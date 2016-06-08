
/* 
Source: Kyle Simpson, You Don't Know JS: Async & Performance
*/
/* 
Ajax requests and responses can be concurrently interleaved — for example, in onscroll events that generate Ajax requests for items of social media content, while responses to earlier onscroll events are still arriving. But they cannot occur at the same instant. "Just like kids at a school cafeteria, no matter what crowd they form outside the doors, they’ll have to merge into a single line to get their lunch!" (Simpson, Async & Performance, 15). This leads to race conditions in which we can't predict which of multiple asynchronously executed functions will complete first.

This is a model for handling asynchrony when two concurrent events need to interact. Only the first of the two callbacks will set the value of a and invoke baz(); the other callback will fire, but it will have no effects, since the latch condition will have already been met.
*/
const http = require('http');
let url = 'http://www.example.com';

const myGetAsync = f => {
    http.get(url, response => {
        console.log(response.statusCode);
        f();
    }).on('error', e => console.log(e.message));
};

let a;

const foo = () => { if (a === undefined) a = 0, baz() };
const bar = () => { if (a === undefined) a = 1, baz() };
const baz = () => console.log(a);

myGetAsync(foo);
myGetAsync(bar);
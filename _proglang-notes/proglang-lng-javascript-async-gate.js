
/* 
Source: Kyle Simpson, You Don't Know JS: Async & Performance
*/
/* 
This is a model for handling asynchrony when two concurrent events need to interact. Both of the callbacks will set values, but only the second callback to fire will also invoke baz().
*/
const http = require('http');
let url = 'http://www.example.com';

const myGetAsync = f => {
    http.get(url, response => {
        console.log(response.statusCode);
        f();
    }).on('error', e => console.log(e.message));
};

let a, b;

const foo = () => {
    a = 0;
    if (a !== undefined && b !== undefined) baz();
};

const bar = () => {
    b = 1;
    if (a !== undefined && b !== undefined) baz();
};

const baz = () => console.log([a, b]);

myGetAsync(foo);
myGetAsync(bar);

/* 
Source: Kyle Simpson, You Don't Know JS: Async & Performance

See also notes on concurrency: http://bitfragment.net/notes/proglang-arg-concurrency/
*/
/* 
1. A JavaScript runtime is a single-threaded environment. The event loop executes instructions serially. Nothing can block that single thread, so every function runs to completion once it begins.

2. JavaScript is asynchronous. Events can occur asynchronously, which means non-sequentially.

3. Non-sequential processing (processing instructions out of sequence) is not equivalent to "parallel" processing, in which processes can run simultaneously. One would need multiple event loops running in parallel for that. Non-sequential processing could be called concurrent processing, rather than parallel processing, if we say that concurrent events occur within the same time period but not necessarily at the same instant.
*/
/* 
4. setTimeout() only delays adding a callback to the event loop: it doesn’t delay the event loop queue itself. When a callback fires depends on the length of the queue at that time: the timer setting itself isn’t always followed exactly. It won’t fire before your timer setting, but it could be later.
*/
/* 
5. Under some conditions, some browsers may delay execution of console functions. It’s possible for console.log() to be deferred here so that the output is {index: 2} instead of {index: 1}:
*/
let a = {index: 1};
console.log(a);
a.index++;
/* 
Setup for what follows:
*/
let url = 'http://example.com';
/* 
6. If we want synchronous processing in JavaScript, it requires special arrangements. Here we're using the 'sync-request' package to make a synchronous HTTP request.
*/
const syncRequest = require('sync-request');

const myGetSync = () => {
    console.log('Making synchronous HTTP request...');
    let request = syncRequest('GET', url);
    console.log(request.statusCode);
};
myGetSync();

console.log('This message won\'t be logged until after myGetSync() returns.');
/* 
7. Here we're making a normal asynchronous HTTP request using Node native code (rather than using the popular 'request' package).
*/
const http = require('http');

const myGetAsync = () => {
    console.log('Making asynchronous HTTP request...');
    http.get(url, response => {
        console.log(response.statusCode);
    }).on('error', e => console.log(e.message));
};
/* 
We call myGet(), then log a separate message to the console. That message will almost certainly be logged to the console after the call to myGet(), but before myGet() returns.
*/
myGetAsync('myGetAsync');

console.log('Something else happens now.');
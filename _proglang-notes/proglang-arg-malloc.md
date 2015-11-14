---
title: Memory allocation
---

# Simulating memory allocation

```js
// Constructor that takes an array to use as memory.
function Mem(mem) {
    this.mem       = mem;
    this.memL      = mem.length;
    this.allocated = [];
    this.reg       = {};
    this.memerr    = "Pointer is not to allocated memory";
}

// Create log message
Mem.prototype.message = function() {
    'use strict';
    let a = `Allocated memory: ${this.allocated}`,
        l = `Length: ${this.allocated.length}`,
        r = `Block registry (pointer:length): ` +
                  `${JSON.stringify(this.reg)}`,
        v = `Stored values: ${this.mem}`;
    console.log(`${a} (${l})\n${r}\n${v}\n-----`);
};

// Return first free index position in memory.
Mem.prototype.next = function() {
    'use strict'; let i = 0;
    while (i <= this.memL) {
        if (this.allocated.indexOf(i) === -1) return i;
        i++;
    }
};

// Create a new block.
Mem.prototype.make = function(ind, lim) {
    'use strict'; let block = [];
    while (ind < lim && ind <= this.memL) {
        if (this.allocated.indexOf(ind) === -1) block.push(ind);
        ind++;
    }
    return block;
};

// Add a block to allocated memory.
Mem.prototype.add = function(ind, block) {
    'use strict'; let i, len = block.length;
    for (i = 0, ind; i < len; i++, ind++) {
        this.allocated.splice(ind, 0, block[i]);
    }
};

// Allocate a block of memory of size `size` and return `pointer`
// containing index of first location in allocated block.
Mem.prototype.alloc = function(size) {
    'use strict';
    let ind, lim, block, pointer, message,
        allocL = this.allocated.length;
    if (size > (this.memL - allocL)) {
        throw `Out of memory (max ${this.memL})`;
    };

    // Create and add block.
    ind     = this.next();
    lim     = ind + size;
    block   = this.make(ind, lim);
    pointer = block[0];
    this.add(pointer, block);

    // Create registry entry, log message, and return pointer.
    this.reg[pointer] = size;
    this.message();
    return block[0];
};


// Release an allocated block of memory at pointer `p`.
Mem.prototype.release = function(p) {
    if (!this.reg[p]) throw this.memerr;
    this.allocated.splice(p, this.reg[p]);
    delete this.reg[p];
    this.message();
};

// Write value at location of pointer.
Mem.prototype.write = function(pointer, value) {
    if (this.allocated.indexOf(pointer) !== -1) {
        this.mem[pointer] = value;
    } else throw this.memerr;
    this.message();
};

// Read value at location of pointer.
Mem.prototype.read = function(pointer) {
    if (this.allocated.indexOf(pointer) !== -1) {
        return this.mem[pointer];
    } else throw this.memerr;
};
```

## Usage

```js
var array = new Array(16);
var mem = new Mem(array);
// console.log(mem.alloc(17)); // => "Out of memory"
var pointer1 = mem.alloc(8);
var pointer2 = mem.alloc(2);
var pointer3 = mem.alloc(6);
// var pointer4 = mem.alloc(1); // => "Out of memory"
mem.release(pointer1);
var pointer4 = mem.alloc(4);
var pointer5 = mem.alloc(4);
mem.release(pointer2);
var pointer6 = mem.alloc(2);
// mem.release("6"); // => "Pointer is not to allocated memory"
mem.write(2, "foo");
mem.release(4);
// mem.write(5, "foo");      // => "Pointer is not to allocated memory"
// mem.read(5);              // => "Pointer is not to allocated memory"
console.log(mem.read(2)); // => "foo"
```

## Output

```js
Allocated memory: 0,1,2,3,4,5,6,7 (Length: 8)
Block registry (pointer:length): {"0":8}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,8,9 (Length: 10)
Block registry (pointer:length): {"0":8,"8":2}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 (Length: 16)
Block registry (pointer:length): {"0":8,"8":2,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 8,9,10,11,12,13,14,15 (Length: 8)
Block registry (pointer:length): {"8":2,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,8,9,10,11,12,13,14,15 (Length: 12)
Block registry (pointer:length): {"0":4,"8":2,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 (Length: 16)
Block registry (pointer:length): {"0":4,"4":4,"8":2,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,10,11,12,13,14,15 (Length: 14)
Block registry (pointer:length): {"0":4,"4":4,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 (Length: 16)
Block registry (pointer:length): {"0":4,"4":4,"8":2,"10":6}
Stored values: ,,,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 (Length: 16)
Block registry (pointer:length): {"0":4,"4":4,"8":2,"10":6}
Stored values: ,,foo,,,,,,,,,,,,,
-----
Allocated memory: 0,1,2,3,8,9,10,11,12,13,14,15 (Length: 12)
Block registry (pointer:length): {"0":4,"8":2,"10":6}
Stored values: ,,foo,,,,,,,,,,,,,
-----
foo
```

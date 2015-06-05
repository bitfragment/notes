---
title: "Recursion"
---

This is not an efficient application of recursion (JavaScript already has a built-in string object method `trim()`, and the same thing can be done in one statement using a regexp replace), but it is the first form in which I used it spontaneously.

```javascript
    /* Strips leading space, invoking itself recursively. */
    function stripLeadingSpace(input) {
        while (input.charAt(0) == " ") {
            input = input.substring(1, input.length);
            stripLeadingSpace(input);
        }
        return input;
    }

    /* Strips trailing space, invoking itself recursively. */
    function stripTrailingSpace(input) {
        while (input.charAt(input.length -1) == " ") {
            input = input.substring(0, input.length - 1);
            stripTrailingSpace(input);
        }
        return input;
    }
```

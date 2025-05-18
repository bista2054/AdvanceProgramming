function outerFunction(x) {
    return function innerFunction(y) {
        return x + y; // Closure retains access to 'x'
    };
}

const closure = outerFunction(10);
const result = closure(5); // Returns 15
console.log(result);

// Hoisting example
console.log(hoistedVar); // undefined (var is hoisted)
var hoistedVar = 10;

//dynamic typing example
let dynamicVar = 5; // Initially a number
console.log(typeof dynamicVar); // "number"
dynamicVar = "Hello"; // Now a string
console.log(typeof dynamicVar); // "string"
# 05 - Functions

Learn to organize code into reusable, modular functions.

## Overview
Functions are blocks of code that perform specific tasks. They make code more organized, reusable, and easier to maintain. This section covers function creation, parameters, return values, and scope.

## Lessons

### 01-functions.c
Introduction to functions:
- Defining functions
- Calling functions
- Function syntax
- Void functions
- Code reusability

### 02-function-parameters.c
Passing data to functions:
- Function parameters/arguments
- Multiple parameters
- Parameter types
- Pass by value
- Function signatures

### 03-function-with-return-statement.c
Returning values from functions:
- Return statement
- Return types
- Using returned values
- Multiple return points

### 04-function-calling-before-defining.c
Function prototypes:
- Forward declarations
- Function prototypes
- Header organization
- Resolving function order issues

### 05-local-variables-and-external-variables.c
Variable scope:
- Local variables
- Global variables
- Variable lifetime
- Scope rules
- Best practices for scope

### 06-math-header-file.c
Using math library:
- Including `<math.h>`
- Common math functions (sqrt, pow, etc.)
- Mathematical operations
- Compiling with `-lm` flag

### 07-ctype-header-file.c
Character handling library:
- Including `<ctype.h>`
- Character testing functions
- Character conversion functions
- Working with characters

### 08-recursion-functions.c
Functions calling themselves:
- Recursive functions
- Base case and recursive case
- Stack overflow concerns
- Recursion vs iteration
- Classic examples (factorial, fibonacci)

## Compiling and Running

```bash
# Standard compilation
gcc 01-functions.c -o functions
./functions

# With math library
gcc 06-math-header-file.c -o math -lm
./math
```

## Key Concepts
- **Function declaration**: Tells compiler function exists
- **Function definition**: Actual implementation
- **Parameters**: Input to function
- **Return value**: Output from function
- **Scope**: Where variables are accessible
- **Recursion**: Function calling itself

## Function Anatomy
```c
return_type function_name(parameter_type parameter_name) {
    // Function body
    return value; // if not void
}
```

## Best Practices
- One function, one purpose (Single Responsibility)
- Use descriptive function names (verbs)
- Keep functions short and focused
- Limit number of parameters (3-4 max)
- Avoid global variables when possible
- Document complex functions
- Always include base case in recursion

## Common Mistakes
- Forgetting to return a value in non-void functions
- Not declaring function before use
- Modifying global variables unnecessarily
- Missing base case in recursion
- Too many parameters
- Forgetting `-lm` flag for math functions

## Next Steps
Progress to **06-arrays** to learn how to work with collections of data.

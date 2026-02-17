# 03 - Conditional Statements

Learn to make decisions in your programs with conditional logic.

## Overview
Conditional statements allow your program to execute different code based on conditions. This is fundamental for creating dynamic and responsive programs.

## Lessons

### 01-if-else-statements.c
Basic conditional logic:
- Simple `if` statements
- `if-else` for binary decisions
- Nested `if-else` statements
- `else if` for multiple conditions
- Writing clean conditional code

### 02-program-for-if-else.c
Practical example demonstrating:
- Real-world use of if-else
- Input validation
- Multiple condition checking
- Program flow control

### 03-ternary-operator.c
Shorthand conditional operator:
- Syntax: `condition ? true_value : false_value`
- When to use ternary operator
- Compact conditional assignments
- Readability considerations

### 04-program-for-ternary-operator.c
Practical ternary operator examples:
- Simple conditions
- Nested ternary operators
- Common use cases

### 05-switch-statement.c
Multi-way selection:
- Switch statement syntax
- Case labels
- Break statements
- Default case
- When to use switch vs if-else

### 06-calculator-using-switch-statement.c
Build a simple calculator:
- User input handling
- Switch for operation selection
- Arithmetic operations
- Error handling

### 07-month-selecting-program-for-switch-statement.c
Month selection program:
- Mapping numbers to months
- Switch statement application
- User-friendly output

## Compiling and Running

```bash
# Compile
gcc 01-if-else-statements.c -o ifelse

# Run
./ifelse
```

## Key Concepts
- Conditions evaluate to true (non-zero) or false (0)
- Use curly braces `{}` for multiple statements
- `else if` for checking multiple conditions
- Switch is efficient for discrete value checking
- Always include `default` case in switch
- Don't forget `break` in switch cases

## Best Practices
- Keep conditions simple and readable
- Use meaningful variable names
- Validate user input
- Consider edge cases
- Use appropriate statement type for the task

## Next Steps
Progress to **04-loops** to learn how to repeat operations efficiently.

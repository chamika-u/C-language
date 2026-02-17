# 04 - Loops

Master iteration and repetition in C programming.

## Overview
Loops allow you to execute code repeatedly, which is essential for processing collections of data, implementing algorithms, and handling repetitive tasks.

## Lessons

### 01-while-loop.c
Basic while loop:
- While loop syntax
- Loop condition
- Incrementing/decrementing counters
- Avoiding infinite loops

### 02-program-for-while-loop.c
Practical while loop examples:
- Real-world applications
- User input in loops
- Condition-based iteration

### 03-do-while-loop.c
Post-condition loop:
- Do-while syntax
- Difference from while loop
- Guarantees at least one execution
- When to use do-while

### 04-for-loops.c
Counter-based iteration:
- For loop syntax
- Initialization, condition, increment
- Loop variable scope
- Nested for loops

### 05-program-for-for-loops.c
Practical for loop applications:
- Counting and iteration
- Processing sequences
- Common patterns

### 06-break-condition.c
Exit loops early:
- Break statement
- Exiting loops prematurely
- Use cases for break
- Breaking from nested loops

### 07-program-for-break-condition.c
Practical break examples:
- Search algorithms
- Validation with early exit
- Menu systems

### 08-continue-condition.c
Skip to next iteration:
- Continue statement
- Skipping current iteration
- Continue vs break
- Filtering in loops

### 09-program-for-continue-condition.c
Practical continue examples:
- Data filtering
- Conditional processing
- Clean loop logic

### 10-program-for-continue-and-break-conditions.c
Combined break and continue:
- Using both in same program
- Complex loop control
- Real-world scenarios

## Compiling and Running

```bash
# Compile
gcc 01-while-loop.c -o while

# Run
./while
```

## Key Concepts
- **While loop**: Condition checked before execution
- **Do-while loop**: Condition checked after execution
- **For loop**: Best for known iteration count
- **Break**: Exits the loop completely
- **Continue**: Skips to next iteration
- Always update loop variables to avoid infinite loops

## Loop Selection Guide
- Use `for` when you know iteration count
- Use `while` for condition-based loops
- Use `do-while` when loop must run at least once
- Use `break` for early exit
- Use `continue` to skip iterations

## Common Mistakes
- Forgetting to update loop counter (infinite loop)
- Off-by-one errors
- Using `=` instead of `==` in conditions
- Breaking from wrong loop in nested loops
- Not considering edge cases (empty data, single element)

## Next Steps
Move to **05-functions** to learn how to organize code into reusable blocks.

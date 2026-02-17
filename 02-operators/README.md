# 02 - Operators

Master different types of operators in C programming.

## Overview
Operators are symbols that perform operations on variables and values. This section covers arithmetic, comparison, and type conversion operations.

## Lessons

### 01-arithmetic-operators.c
Learn basic mathematical operations:
- Addition `+`
- Subtraction `-`
- Multiplication `*`
- Division `/`
- Modulus `%` (remainder)
- Order of operations (PEMDAS)
- Compound assignment operators (`+=`, `-=`, etc.)

### 02-type-conversions.c
Understand type casting and conversion:
- Implicit type conversion (automatic)
- Explicit type conversion (casting)
- Converting between int, float, double
- Precision loss in conversions
- When and why to use type casting

### 03-boolean-comparisons.c
Master comparison and logical operators:
- Relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Logical operators (`&&`, `||`, `!`)
- Boolean values (true/false)
- Combining multiple conditions
- Operator precedence

## Compiling and Running

```bash
# Compile
gcc 01-arithmetic-operators.c -o arithmetic

# Run
./arithmetic
```

## Key Concepts
- Integer division truncates decimal part
- Use modulus `%` for finding remainders
- Type conversion can cause data loss
- Logical operators short-circuit evaluation
- Always use `==` for comparison, not `=`

## Common Mistakes
- Using `=` instead of `==` for comparison
- Dividing integers and expecting decimal result
- Not considering operator precedence
- Mixing signed and unsigned types

## Next Steps
Move on to **03-conditional-statements** to learn how to make decisions in your programs using these operators.

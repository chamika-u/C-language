# 06 - Arrays

Master working with collections of data using arrays.

## Overview
Arrays are data structures that store multiple values of the same type in contiguous memory locations. This section covers array declaration, manipulation, and common operations.

## Lessons

### 01-arrays-in-c.c
Array basics:
- Declaring arrays
- Initializing arrays
- Accessing array elements
- Array indexing (starts at 0)
- Array size

### 02-scan-values-for-loops.c
Reading array values:
- Using loops with arrays
- User input into arrays
- Dynamic data collection
- Scanf with arrays

### 03-change-array-values.c
Modifying arrays:
- Updating array elements
- Assignment to array indices
- Common modifications
- Array element manipulation

### 04-for-loops-with-arrays.c
Iterating through arrays:
- For loops with arrays
- Processing all elements
- Array traversal patterns
- Index-based access

### 05-index-out-of-bound-error-in-arrays.c
Array boundary errors:
- Understanding array bounds
- Common indexing errors
- Buffer overflow
- Defensive programming
- Validation techniques

### 06-average-marks-calculator-using-arrays.c
Practical array application:
- Calculating averages
- Summing array elements
- Real-world example
- Statistical operations

### 07-multidimensional-arrays-in-c.c
2D and multi-dimensional arrays:
- Matrix representation
- 2D array declaration
- Nested loops with 2D arrays
- Accessing 2D array elements
- Practical applications (tables, grids)

## Compiling and Running

```bash
# Compile
gcc 01-arrays-in-c.c -o arrays

# Run
./arrays
```

## Key Concepts
- **Arrays**: Fixed-size collection of same-type elements
- **Index**: Position in array (0-based)
- **Size**: Number of elements
- **Contiguous memory**: Elements stored sequentially
- **Static allocation**: Size determined at compile time
- Arrays cannot be resized after creation

## Array Syntax
```c
// Declaration
int numbers[5];

// Declaration with initialization
int ages[3] = {20, 25, 30};

// Accessing elements
int first = ages[0];  // First element
ages[1] = 26;         // Modify second element

// 2D array
int matrix[3][4];     // 3 rows, 4 columns
```

## Best Practices
- Always initialize arrays
- Check array bounds before access
- Use constants for array size
- Process arrays with loops
- Be careful with sizeof() on arrays
- Avoid magic numbers for indices
- Document array dimensions

## Common Mistakes
- Accessing index beyond array size
- Forgetting arrays are 0-indexed
- Not initializing array elements
- Confusing array size with last index
- Buffer overflow vulnerabilities
- Returning local array from function

## Common Operations
```c
// Finding size
int size = sizeof(array) / sizeof(array[0]);

// Iterating
for(int i = 0; i < size; i++) {
    // process array[i]
}

// Finding max/min
// Calculating sum/average
// Searching for element
```

## Next Steps
Move to **07-strings** to learn about character arrays and text manipulation.

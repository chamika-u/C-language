# 07 - Strings

Master string manipulation and text processing in C.

## Overview
In C, strings are arrays of characters terminated by a null character `\0`. This section covers string declaration, input/output, and common string operations using the standard library.

## Lessons

### 01-strings-in-c.c
String basics:
- String declaration
- String initialization
- Character arrays
- Null terminator `\0`
- Printing strings with `%s`

### 02-string-as-input.c
Reading string input:
- Using `scanf()` for strings
- Using `fgets()` for safer input
- Reading strings with spaces
- Buffer size considerations

### 03-access-characters-in-string.c
String indexing:
- Accessing individual characters
- String as character array
- Iterating through strings
- Character-by-character processing

### 04-length-of-a-string.c
Finding string length:
- Using `strlen()` function
- Manual length calculation
- Understanding null terminator
- Length vs size

### 05-string-copy.c
Copying strings:
- `strcpy()` function
- Safe string copying
- Destination buffer size
- Avoiding buffer overflow

### 06-strcat-in-c.c
Concatenating strings:
- `strcat()` function
- Appending strings
- Buffer size considerations
- Building strings

### 07-string-comparison-function.c
Comparing strings:
- `strcmp()` function
- String equality testing
- Lexicographic comparison
- Return values (0, positive, negative)

### 08-program-for-demonstrates-string.c
Comprehensive string example:
- Multiple string operations
- Practical string manipulation
- Real-world applications
- Combining string functions

## Compiling and Running

```bash
# Include string.h for string functions
gcc 01-strings-in-c.c -o strings

# Run
./strings
```

## Key Concepts
- **String**: Array of characters ending with `\0`
- **Null terminator**: Marks end of string
- **String literal**: Text in double quotes
- **Buffer**: Memory space for string
- **String length**: Number of characters (not including `\0`)
- Strings need `#include <string.h>`

## Important String Functions

```c
#include <string.h>

strlen(str)           // Get length
strcpy(dest, src)     // Copy string
strcat(dest, src)     // Concatenate strings
strcmp(str1, str2)    // Compare strings (returns 0 if equal)
strncpy()             // Safer copy with size limit
strncat()             // Safer concat with size limit
```

## String Declaration Examples

```c
// Declaration methods
char str1[20] = "Hello";           // With size
char str2[] = "World";             // Auto size
char str3[10];                     // Empty, needs initialization
char *str4 = "Constant string";    // String literal (read-only)

// Reading input
scanf("%s", str);                  // No spaces allowed
fgets(str, sizeof(str), stdin);    // Safer, allows spaces
```

## Best Practices
- Always allocate enough space (including `\0`)
- Use `fgets()` instead of `gets()` (deprecated)
- Check buffer sizes to prevent overflow
- Use `strncpy()` and `strncat()` for bounded operations
- Initialize string arrays
- Validate string input
- Remember null terminator in size calculations

## Common Mistakes
- Forgetting null terminator in size
- Using `==` to compare strings (use `strcmp()`)
- Buffer overflow from insufficient space
- Using `gets()` (unsafe function)
- Not including `string.h` header
- Modifying string literals

## String Comparison

```c
// WRONG - compares addresses
if (str1 == str2) { }

// CORRECT - compares content
if (strcmp(str1, str2) == 0) { }
```

## Security Considerations
- Always validate input length
- Use bounded string functions (strncpy, strncat)
- Be aware of buffer overflow risks
- Sanitize user input
- Check for null terminators

## Next Steps
Progress to **08-pointers** to understand memory addresses and advanced string manipulation.

# Basic Bit Operations in C++

This document covers fundamental bitwise operations in C++ with examples.

## Bitwise Operators

| Operator | Name             | Example  | Description                             |
| -------- | ---------------- | -------- | --------------------------------------- | --- | ------------------------------------------ |
| `&`      | AND              | `a & b`  | Sets each bit to 1 if both bits are 1   |
| `        | `                | OR       | `a                                      | b`  | Sets each bit to 1 if one of two bits is 1 |
| `^`      | XOR              | `a ^ b`  | Sets each bit to 1 if only one bit is 1 |
| `~`      | NOT (Complement) | `~a`     | Inverts all the bits                    |
| `<<`     | Left Shift       | `a << n` | Shifts bits left by n positions         |
| `>>`     | Right Shift      | `a >> n` | Shifts bits right by n positions        |

## Examples

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;      // 0101 in binary
    int b = 3;      // 0011 in binary

    cout << "a & b = " << (a & b) << endl;   // 1 (0001)
    cout << "a | b = " << (a | b) << endl;   // 7 (0111)
    cout << "a ^ b = " << (a ^ b) << endl;   // 6 (0110)
    cout << "~a = " << (~a) << endl;         // -6 (two's complement)
    cout << "a << 1 = " << (a << 1) << endl; // 10 (1010)
    cout << "a >> 1 = " << (a >> 1) << endl; // 2 (0010)

    return 0;
}
```

Use Cases

- Checking if a number is even or odd:

```cpp
if (n & 1) // odd, else even
```

- Setting a bit:

```cpp
n = n | (1 << k);
```

- Clearing a bit:

```cpp
n = n & ~(1 << k);
```

- Toggling a bit:

```cpp
n = n ^ (1 << k);
```

- Checking if a bit is set:

```cpp
if (n & (1 << k))
```

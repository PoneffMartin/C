# C INTEGER CONVERSION

### Unsigned Integer Conversions

Conversions of smaller unsigned integer types to larger unsigned integer types is:
* always safe
* typically accomplished by zero-extending the value

```c
unsigned char a = 5; // 0b0000 0101
unsigned short b = a; // 0b0000 0000 0000 0101
```

When a larger unsigned integer is converted to a smaller unsigned integer type the:
* larger value is truncated
* low-order bits are preserved

```c
unsigned short a = 1024 // 0b0000010000000000
unsigned char b = (unsigned char) a // 0b00000000
```

When unsigned integer types are converted to the corresponding signed integer type.
* the bit pattern is preserved so no data is lost
* the high-order bit becomes the sign bit
* If the sign bit is set, both the sign and magnitude of the value changes

```c
// Output is "not equal"
unsigned char a = 0xFF; // 0b11111111 or 255 in decimal
char b = a; // 0b11111111 however this is -1 in decimal because of the sign bit

/**
 * Note that when these variables are compared they are both converted to signed int.
 * When a is converted to signed int the bit pattern is preserved and zero extended.
 * When b is converted to signed int the value is signed-filled which is in this case 1.
 * Assuming int is 32 bits, after conversion:
 * a is 0b0000 0000 0000 0000 0000 0000 1111 1111
 * b is 0b1111 1111 1111 1111 1111 1111 1111 1111
 */
if (a == b)
    printf("equal\n");
else 
    printf("not equal\n");

/**
 * Notice however that the following block prints "equal".
 */
unsigned char a = 0x7F; // 0b0111 1111 or 127 in decimal
char b = a; // Absolutely the same value as a

/**
 * The same conversion rules as above are applied here.
 * Since however the sign bit of b is 0 it is filled with zeroes.
 * a is 0b0000 0000 0000 0000 0000 0000 0111 1111
 * b is 0b0000 0000 0000 0000 0000 0000 0111 1111
 */
if (a == b)
    printf("equal\n");
else 
    printf("not equal\n");
```

| From  unsigned   | To             |                     Method                            |
| -----------------|----------------|-------------------------------------------------------|
| char             | char           | Preserve bit pattern; high-order bit becomes sign bit |
| char             | short          | Zero-extend                                           |
| char             | long           | Zero-extend                                           |
| char             | unsigned short | Zero-extend                                           |
| char             | unsigned long  | Zero-extend                                           |
| short            | char           | Preserve low-order bits (Data loss)                   |
| short            | short          | Preserve bit pattern; high-order bit becomes sign bit |
| short            | long           | Zero-extend                                           |
| short            | unsigned char  | Preserve low-order bits (Data loss)                   |
| long             | char           | Preserve low-order bits (Data loss)                   |
| long             | short          | Preserve low-order bits (Data loss)                   |
| long             | long           | Preserve bit pattern; high-order bit becomes sign bit |
| long             | unsigned char  | Preserve low-order bits (Data loss)                   |
| long             | unsigned short | Preserve low-order bits (Data loss)                   |

### Signed Integer Conversions

When a signed integer is converted to an unsigned integer of equal or greater size and the value of the signed integer is not negative
* the value is unchanged
* the signed integer is sign-extended

A signed integer is converted to a shorter signed integer by truncating the high-order bits. 

When signed integers are converted to unsigned integers:
* bit pattern is preserved—no lost data
* high-order bit loses its function as a sign bit
* If the value of the signed integer is not negative, the value is unchanged.
* If the value is negative, the resulting unsigned value is evaluated as a large, signed integer

| From  | To             |                           Method                            |
| ------|----------------|-------------------------------------------------------------|
| char  | short          | Sign extend                                                 |
| char  | long           | Sign extend                                                 |
| char  | unsigned char  | Preserve pattern; high-order bit loses function as sign bit |
| char  | unsigned short | Sign-extend to short; convert short to unsigned short       |
| char  | unsigned long  | Sign-extend to long; convert long to unsigned long          |
| short | char           | Preserve low-order bits (Data loss)                         |
| short | long           | Sign extend                                                 |
| short | unsigned char  | Preserve low-order bits (Data loss)                         |
| short | unsigned short | Preserve pattern; high-order bit loses function as sign bit |
| short | unsigned long  | Sign-extend to long; convert long to unsigned long          |
| long  | char           | Preserve low-order bits (Data loss)                         |
| long  | short          | Preserve low-order bits (Data loss)                         |
| long  | unsigned char  | Preserve low-order bits (Data loss)                         |
| long  | unsigned short | Preserve low-order bits (Data loss)                         |
| long  | unsigned long  | Preserve pattern; high-order bit loses function as sign bit |

# Bitmask Macros

A simple trick to avoid errors when defining bitmasks

```c
#define BIT(X)          (1 << (X))
#define GPIO_SET        BIT(22) // This sets the bit at position 22 to 1. (Could be any other valid bit position).
```
# Print precision
A width or precision may be specified as  \*, in which case the value is computed by converting the next argument (which must be an int). 
For example, to print at most max characters from a string s:
```c
printf("%.*s", max, s);
```

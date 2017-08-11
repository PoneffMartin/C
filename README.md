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
unsigned short a = 1024 // 0b0000 0100 0000 0000
unsigned char b = (unsigned char) a // Value is truncated. 0b0000 0000
```

When unsigned integer types are converted to the corresponding signed integer type.
* the bit pattern is preserved so no data is lost
* the high-order bit becomes the sign bit
* If the sign bit is set, both the sign and magnitude of the value changes

```c
// Output is "not equal"
unsigned char a = 0xFF; // 0b1111 1111 or 255
char b = a; // Since b is signed the high-order bit becomes the sign bit and b will remain 0b1111 1111 but this is -1 on signed char

/**
 * Note that when the two variables are compared they are both converted to signed int according to integer promotion rules.
 * a is unsigned and when converted to signed int the bit pattern is preserved and the int value is zero-filled.
 * b is signed and that is why when converted to signed int the value is signed-filled which in this case results in filling with 1.
 */
if (a == b)
	printf("equal\n");
else 
	printf("not equal\n");

/**
 * Notice however that the following block works as expected and the output is "equal".
 */
unsigned char a = 0x7F; // 0b0111 1111 or 127
char b = 0x7F; // 0b0111 1111 or 127

/**
 * When a is converted to signed int nothing special happens, it simply remains 127 as signed int.
 * When b is converted, however the bit sign is taken into account and since in this case it is 0,
 * the new signed int value is filled with zeroes which results in the same value 127.
 */
if (a == b)
	printf("equal\n");
else 
	printf("not equal\n");
```

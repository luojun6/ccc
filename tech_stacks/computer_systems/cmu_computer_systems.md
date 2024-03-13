# Notes of CMU - Intro to Computer Systems

## 1 Bits, Bytes, and Ints

What we want to understand is what is the bit level representation of numbers. And how does that affect some of the properties you have when you operate then on, and especially looking at the corner cases when things overflow. We sort of don't do what, you might expect them to do.

### 1.1 Representing information as bits

### 1.1.1 Everything is bits

- **Each bit is 0 or 1**
- **By encoding/interpreting sets of bits in various ways**
  - Computers determine what to do (instructions)
  - ...and represent and manipulate nunbers, sets, strings, etc...
- **Why bits? Eletronic Inplementation**
  - Easy to store with bitstable elements
  - Reliably transmitted on noisy and inaccurate wires

![bits_eletronic_implementation](./images/bits_eletronic_implementation.png)

The reason why bits are great is in the digital world we can sort of take what otherwise an analog signal and quantify it. And just say I'm going to say that one range of values.

Let's say it's low voltage - I'm going to call that a $0$. And the high range of value I'm going to call it a $1$. If there is noise or imperfections in the circuit or anything going on, as long as that doesn't exceed these bit's threshold you've set up. Then you'll get a nice clean signal out of it.

### 1.1.2 For example, can count in binary

That's sort of at the core why everything we do, and especially for storing information, it turns out it's much easier to store one bit of information or a digital value than it is to store an analog value.

- **Base 2 Number Representation**
  - Represent $15213_{10}$ as $11101101101101_{2}$
  - Represent $1.20_{10}$ as $1.0011001100110010[0011]_{...2}$
  - Represent $1.5213 \times 10^4$ as $1.1101101101101_{2} \times 2^{13}$

When we do floating-point numbers where what you do is to the right of the binary point - not a decimal point:

$2^{1} 2^{0}$ . $2^{-1} 2^{-2}$

Something to the left of that would have a weight $2^0$, and the next one over would have weight $2^{1}$. But what you do is as you go to the right that adds weight $2^{-1}$ and $2^{-2}$. In otherwords they are $1 \over 2$ and $1 \over 4$.

So we can represent just like you do the decimal representation of fractions. We can do the binary representation of fractions. That's the core of floating point number of representations.

#### 1.1.3 Encoding Byte Values

It gets very annoying if you have say 32 or even 64-bit numbers to be writing the strings 1 and 0 out. So what we use and what's become largely the most common is to group collections of 4 bits at a time into. And then represent that in base 16 or what's known as hexadecimal representation. Using the letters $A$ through $F$ as values $10$ through $15$.

| **Hex** | **Decimal** | **Binary** |
| :-----: | :---------: | :--------: |
|    0    |      0      |    0000    |
|    1    |      1      |    0001    |
|    2    |      2      |    0010    |
|    3    |      3      |    0011    |
|    4    |      4      |    0100    |
|    5    |      5      |    0101    |
|    6    |      6      |    0110    |
|    7    |      7      |    0111    |
|    8    |      8      |    1000    |
|    9    |      9      |    1001    |
|    A    |     10      |    1010    |
|    B    |     11      |    1011    |
|    C    |     12      |    1100    |
|    D    |     13      |    1101    |
|    E    |     14      |    1110    |
|    F    |     15      |    1111    |

- **Byte = 8 bits**
  - Binary &00000000*{2}& to &1111111*{2}&
  - Decimal: $0_{10}$ to $255_{10}$
  - Hexadecimal $00_{16}$ to $FF_{16}$
    - Base 16 numbers representation
    - Use characters $0$ to $9$ and $A$ to $F$
      - $0xFA1D37B$
      - $0xfa1d37b$

#### 1.1.4 Example Data Representations

| C Data Type | Typical 32-bit | Typical 64-bit | x86-64 |
| :---------- | :------------: | :------------: | :----: |
| char        |       1        |       1        |   1    |
| short       |       2        |       2        |   2    |
| int         |       4        |       4        |   4    |
| long        |       4        |       8        |   8    |
| float       |       4        |       4        |   4    |
| double      |       4        |       8        |   8    |
| long double |       -        |       -        | 10/16  |
| pointer     |       4        |       8        |   8    |

There's also a slightly obscure holdover from ancient days of floating point. Where there's a special representation in Intel machines that use a 10 bytes or 80 bit representation. And when you use that on a 64-bit machine they sort of waste an extra 6 bytes out of that. So that everything is aligned in 16 byte increment.

The other thing and this is an important featuer is any address is defined to be the word size of the machine. When they say it's a 64-bit machine, what they really mean is that the addresses are 64-bit values or 8-byte values.

### 1.2 Bit-level manipulations

#### 1.2.1 Boolean Algebra

- **Developed by George Boole in 19th Century**

  - Algebraic representation of logic
    - Encode "True" as 1 and "False" as 0

- **And**

  - **A&B = 1 when both A = 1 and B = 1**
    |&|0|1|
    |-|-|-|
    |0|0|0|
    |1|0|1|

- **Or**

  - **A|B = 1 when either A = 1 or B = 1**
    |\||0|1|
    |-|-|-|
    |0|0|0|
    |1|1|1|

- **Not**

  - **~A = 1 when A = 0**
    |~|0|
    |-|-|
    |0|1|
    |1|0|

- **Exclusive-Or (Xor)**
  - **A^B = 1 when either A = 1 or B = 1, but not both**
    |^|0|1|
    |-|-|-|
    |0|0|1|
    |1|1|0|

#### 1.2.2 General Boolean Algebras

- **Operate on Bit Vectors**

  - Operations applied bitwise

    |     | 01101001 |
    | --- | -------- |
    | &   | 01010101 |
    |     | 01000001 |

    |     | 01101001 |
    | --- | -------- |
    | \|  | 01010101 |
    |     | 01111101 |

    |     | 01101001 |
    | --- | -------- |
    | ^   | 01010101 |
    |     | 00111100 |

    | ~   | 01010101 |
    | --- | -------- |
    |     | 10101010 |

- **All of the Properties of Boolean Algebra Apply**
  So again we will spend a lot of time making use of the fact that in C. And this is one of the features to C that people like, is that you can do these sort of very low level of bit manipulations directly in the language.

#### 1.2.3 Example: Representing & Manipulating Sets

- **Representation**

  - Width w bit vector represents subset of {0, 1, ..., w-1}
  - ## $\alpha_{j}=1$ if $j\owns A$

    - 01101001 {0,3,5,6}
    - _7<span style="color:red">65</span>4<span style="color:red">3</span>21<span style="color:red">0</span>_

    - 01010101 {0,2,4,6}
    - _7<span style="color:red">6</span>5<span style="color:red">4</span>3<span style="color:red">2</span>1<span style="color:red">0</span>_

This example is an imagine we want to represent sets. Where the elements of the set are numbers ranging between 0 and 7. So 1 byte is enought to capture eight cases.

We'll just number the bits from right to left. This bit 0 would represent whether or not the value 0 is the element of the set.

- **Operations**

| Sign | Meaning              | Result of Bits | Result of Set      |
| ---- | -------------------- | -------------- | ------------------ |
| &    | Inersetion           | 01000001       | {0, 6}             |
| \|   | Union                | 01111101       | {0, 2, 3, 4, 5, 6} |
| ^    | Symmetric difference | 00111100       | {2, 3, 4, 5}       |
| ~    | Complement           | 10101010       | {1, 3, 5, 7}       |

These are actaully very common, for example, there are operations at a file I/O. About I/A that you can track which set of possible inputs to the system. Think of different network connections have an input ready for me to read.

And there is a data structure that is sort fo hidden away among some C library calls. But it basically is using exactly this representation about a thousand.

#### 1.2.4 Bit-Level Operations in C

A bits worth of information to represent these sets. And do manipulation on those sets so this is a very common and why do we use representation of sets in computer science.

- **Operations &, |, ~, ^ Available in C**
  - Apply to any "integral" data type
    - long, int, short, char, unsigned
  - View arguments as bit vectors
  - Arguments applied bit-wise
- **Examples (char data type)**
  - ~0x41 -> 0xBE
    - ~01000001 -> 10111110
  - ~0x00 -> 0xFF
    - ~00000000 -> 11111111
  - 0x69 & 0x55 -> 0x41
    - 01101001 & 01010101 -> 01000001
  - 0x69 | 0x55 -> 0x7D
    - 01101001 | 01010101 -> 01111101

#### 1.2.5 Contrast: Logic Operations in C

- Contrast to Logical Operations
  - &&, ||, !
    - View 0 as "False"
    - Anything nonzero as "True"
    - Always return 0 or 1
    - <span style="color:#C70039">Early termination</span>
- **Examples (char data tye)**
  - !0x41 -> 0x00
  - !0x00 -> 0x01
  - !!0x41 -> 0x01
  - <br>
  - 0x69 && 0x55 -> 0x01
  - 0x69 || 0x55 -> 0x01
  - p && \*p (avoids null pointer access)

One thing that's really important and that programmers screw it up all the time. It's to mix up the & and &&, or the | and ||. There is sort of a syntactic similarity, and there is actually somewhat of a semantic relation too.

In particularly this early termination is something that people use a lot, if you want to make sure that you're not accessing a null pointer, you can test whether that's null pointer first before accessing it. If _`p && \*p`_ is 0 or null, then it will do the dereferencing of null.

#### 1.2.6 Shift Operations

There is a curious feature that left shifts are always the same, but there are two different flavors of the right shift.

- **Left Shift: x << y**

  - Shift bit-vector **x** left **y** positions
    - Throw away extra bits on left
    - Fill with 0's on right
      |**Argument x**|01100010|
      |-|-|
      |**<< 3**|00010*000*|
      |**Log. >> 2**|*00*011000|
      |**Arith. >> 2**|*00*011000|

- **Right Shift: x >> y**

  - Shift bit-vector **x** right **y** positions
    - Throw away extra bits on right
  - Logical Shift
    - Fill with 0's on left
  - Arithmetic shift
    - Replicate most significant bit on left
      |**Argument x**|10100010|
      |-|-|
      |**<< 3**|00010*000*|
      |**Log. >> 2**|*00*01000|
      |**Arith. >> 2**|*11*011000|

- Undefined Behavior
  - Shift amount < 0 or ≥ word size

What should happen if I want to shift an 8-bit nunber 8 positions to the left: x << 8?

On most machines you'll get whatever x was, but not zero! Because what will do is it will compute this number mod(8). And the reason that happens is if you think about it, it's looking at just the lower two three bits of the shift amount and ignoring all the rest. So that's effectively like mod(8).

### 1.3 Integers

#### 1.3.1 Representation: unsigned and signed

##### 1.3.1.1 Encoding Integers

![encoding_integers.png](.//images/encoding_integers.png)

**A Simple Example of Unsigned Case:**

| 4   | 3   | 2   | 1   | 0   | w     |
| --- | --- | --- | --- | --- | ----- |
| 16  | 8   | 4   | 2   | 1   | $2^w$ |
| 1   | 0   | 1   | 1   | 0   | x     |

Result: 16 + 4 + 2 = 22

**A Simple Example of Signed Case:**

| 4   | 3   | 2   | 1   | 0   | w     |
| --- | --- | --- | --- | --- | ----- |
| -16 | 8   | 4   | 2   | 1   | $2^w$ |
| 1   | 0   | 1   | 1   | 0   | x     |

Result: -16 + 4 + 2 = -10

- **C short 2 bytes long**

|     | Decimal | Hex   | Binary            |
| --- | ------- | ----- | ----------------- |
| x   | 15213   | 3B 6D | 00111011 01101101 |
| y   | -15213  | C4 93 | 11000100 10010011 |

- **Sign Bit**
  - For 2's complement, most significant bit indicates sign
    - 0 for nonnegative
    - 1 for negative

##### 1.3.1.2 Numeric Ranges

- **Unsigned Values**

  - _UMin_ = 0, 000...0
  - _UMax_ = $2^w$ - 1, 111...1

- **Two's Complement Values**

  - _TMin_ = -$2^{w-1}$, 100...0
  - _TMax_ = $2^{w-1}$ - 1, 011...0

- **Other Values**
  - Minus 1, 111...1

**Values for _W_ = 16**

|      | Decimal | Hex   | Binary            |
| ---- | ------- | ----- | ----------------- |
| UMax | 65535   | FF FF | 11111111 11111111 |
| TMax | 32767   | 7F FF | 01111111 11111111 |
| TMin | -32768  | 80 00 | 10000000 00000000 |
| -1   | -1      | FF FF | 11111111 11111111 |
| 0    | 0       | 00 00 | 00000000 00000000 |

##### 1.3.1.3 Values for Different Word Sizes

These numbers call UMax the biggest unsigned number, TMin the smallest most negative two's complement number, and TMax the largest positive two's complement number.

|          | **8** | **16**  | **32**         | **64**                     |
| -------- | ----- | ------- | -------------- | -------------------------- |
| **UMax** | 255   | 65,535  | 4,294,967,295  | 18,446,744,073,709,551,615 |
| **TMax** | 127   | 32,767  | 2,147,483,647  | 9,223,372,036,854,775,807  |
| **TMin** | -128  | -32,768 | -2,147,483,648 | -9,223,372,036,854,775,808 |

- **Observations**

  - |_TMin_| = _TMax_ + 1
    - Asymmetric range
  - _UMax_ = 2 \* _TMax_ + 1

- **C Programming**
  - #include <limits.h>
  - Declares constans, e.g.,
    - ULONG_MAX
    - LONG_MAX
    - LONG_MIN
  - Values platform specific

##### 1.3.1.4 Unsgined & Signed Numeric Values

- Equivalence
  - Same encodings for nonnegative values
- Uniqueness
  - Every bit pattern represents unique integer value
  - Each representable integer has unique bit encoding
- Can Invert Mappings
  - U2B(x) = B2U$^{-1}$(_x_)
    - Bit pattern for unsigned integer
  - T2B(x) = B2T$^{-1}$(_x_)
    - Bit pattern for two's complement

#### 1.3.2 Conversion, casting

##### 1.3.2.1 Mapping Between Signed & Unsigned

![mapping_between_signed_unsigned.png](./images/mapping_between_signed_unsigned.png)

- **Mappings between unsigned and two's complement numbers: <span style="color:#C70039">Keep bit representations and reinterpret</span>**

![mapping_rules_between_signed_unsigned.png](./images/mapping_rules_between_signed_unsigned.png)

##### 1.3.2.2 Conversion Visualized

- **2's Comp. -> Unsigned**
  - Ordering Inversion
  - Negative -> Bit Positive

![signed_conversion_visualized.png](./images/signed_conversion_visualized.png)

##### 1.3.2.3 Signed vs. Unsigned in C

- **Constants**
  - By default are considered to be signed integers
  - Unsigned if have "U" as suffix
    - 0U, 4354223U
- **Casting**
  - Explicit casting between signed & unsigned same as U2T and T2U

```c
int tx, ty;
unsigned ux, uy;
tx = (int) ux;
uy = (unsigned) ty;
```

- Implicit casting also occurs via assignments and procedure calls

```c
tx = ux;
uy = ty;
```

##### 1.3.2.4 Casting Surprises

- **Expression Evaluation**
  - If there is a mix of unsigned and signed in single expression, **_<span style="color:#C70039">signed values implicitly cast to unsigned</span>_**
  - Includeing comparision operations <, >, ==, <=, >=
  - Examples fow _W_ = 32:
    - TMIN = -2,147,483,648
    - TMAX = 2,147,483,647

| Constant$_{1}$ | Constant$_{2}$        | Relation | Evaluation |
| -------------- | --------------------- | -------- | ---------- |
| 0              | 0U                    | ==       | unsigned   |
| -1             | 0                     | <        | signed     |
| -1             | 0U                    | >        | unsigned   |
| 2,147,483,647  | -2,147,483,647 - 1    | >        | signed     |
| 2,147,483,647U | -2,147,483,647 - 1    | <        | unsigned   |
| -1             | -2                    | >        | signed     |
| (unsigned)-1   | -2                    | <        | unsigned   |
| 2,147,483,647  | 2,147,483,648(U)      | <        | unsigned   |
| 2,147,483,647  | (int)2,147,483,648(U) | >        | signed     |

##### 1.3.2.5 Summary Casting Signed <-> Unsigned: Basic Rules

- **Bit pattern is maintained**
- **But reinterpreted**
- **Can have unexpected effects: adding or subtracting 2$^w$**
- **Expression containing signed and unsigned int**
  - int is cast to unsigned!!!

```c
for (int i = n-1; i >= 0; i--)
  function(i);
```

Here's an interesting question what if we were declared as being unsigned?

```c
for (unsigned i = n-1; i >= 0; i--)
  function(i);
```

The loop will go forever!!! What would most likely happen is we would go from being 0 to being UMax. And that's really big number and the way we'd most likely cause a memory fault because it's so far out of bounds.

```c
for (int i = n-1; i - sizeof(char) >= 0; i--)
  function(i);
```

So _sizeof()_ returns an unsigned value, it's not actually a function, it's built in but it's the result of sizeof is considered to being unsigned.

If you have a signed value in it unsigned in any kind of arithmetic, it will turn treat the combination of the two is unsigned. So it will actually do an unsigned comparison here.

#### 1.3.3 Expanding, truncating

##### 1.3.3.1 Sign Extension

- **Task:**
  - Given _w_-bit signed integer _x_
  - Convert it to _w+k_-bit integer with same value
- **Rule:**
  - Make _k_ copies of sign bit:
  - X' = (x$_{w-1}$, ..., x$_{w-1}$), x$_{w-1}$, x$_{w-2}$, ..., x$_{0}$
    - () -> k copies of MB

[sign_ext.png](./images/sign_ext.png)

**Simple Example:**

| Extented | Original | Value                  |
| -------- | -------- | ---------------------- |
|          | 1110     | -8+4+2 = -2            |
| 1        | 1110     | -16+8+4+2 = -2         |
| 1111     | 1110     | -128+64+...+8+4+2 = -2 |

That's the idea of sign extension and you'll see that a lot in bit patterns. Especially if you see a bit pattern with it starts with a bunch of F's, that tells you the number is negative.

##### 1.3.3.2 Sign Extension Example

```c
short int x = 15213;
int ix = (int) x;
short int y = -15213;
int iy = (int) y;
```

|     | Decimal |         Hex |                              Binary |
| --- | ------: | ----------: | ----------------------------------: |
| x   |   15213 |       3B 6D |                   00111011 01101101 |
| ix  |   15213 | 00 00 3B 6D | 00000000 00000000 00111011 01101101 |
| y   |  -15213 |             |                   11000100 10010011 |
| iy  |  -15213 |             | 11111111 11111111 11000100 10010011 |

- **Converting from smaller to larger integer data type**
- **C automatically performs sign extension**

##### 1.3.3.3 Truncating

|          | Truncated | Base | Value                |
| -------- | --------- | ---- | -------------------- |
| unsinged | 1         | 0101 | 16+4+1 = 21          |
| unsinged | Dropped   | 0101 | 4+1 = 5 = 21_mod(16) |
| singed   | 1         | 0101 | -16+4+1 = -11        |
| singed   | Dropped   | 0101 | 4+1 = 5 = ???        |

##### 1.3.3.4 Summary: Expanding, truncating: Basic Rules

- **Expanding (e.g., short int to int)**

  - Unsigned: zeros added
  - Signed: sign extension
  - Both yield expected result

- Truncating (e.g., unsigned to unsigned short)
  - Unsigned/signed: bits are truncated
  - Result are reinterpreted
  - Unsigned: mode operation
  - Signed: similar to mod
  - For small numbers yield expected behavior

#### 1.3.4 Addtion, negation, multipliation, shifting

##### 1.3.4.1 Unsigned Addition

![unsigned_addition.png](./images/unsigned_addition.png)

If you take two numbers that range between up to the maximum value of an unsigned number, and then add then. That in principle you might need to get an extra bit to represent that sum.

Unfortunately we can't just go out and add more bits to your computer indefinitely. So we just stop it at some point and say, well, whatever bit happened to be in that sort of next bit position. We're just goig to drop it and pretend it doesn't exist. And say that the result of addition is just whatever the _w_ bit pattern you get if you only consider the first _w_ bits out of it. With no warning no message no error or anything, thi is just it happens silenty.

- Standard Addition Function
  - Ignores carry output
- Implements Modular Arithmetic
  - s = UAdd$_{w}$(_u_, _v_) = _u_ + _v_ mod 2$^w$

| Dropped | Original | Value                         |
| ------- | -------- | ----------------------------- |
|         | 0101     | 4+1 = 5                       |
|         | 1101     | 8+4+1 = 13                    |
| 1       | 0010     | 5+13 mod 2$^4$ = 18 mod16 = 2 |

##### 1.3.4.2 Visulizing (Mathematical) Integer Addition

- **Integer Addtion**
  - 4-bit integers _u_, _v_
  - Compute true sum Add$_{4}$(_u_, _v_)
  - Values increase linearly with _u_ and _v_
  - Forms planer surface

![4bits_int_addition.png](./images/4bits_int_addition.png)

What we'll do is dropping that most significant bit, sort of create a cliff that when you roll over from 15 to 16 instead of it drops all the way down to 0. And that's referred to as an overflow.

![visualizing_unsigned_addition.png](./images/visualizing_unsigned_addition.png)

##### 1.3.4.3 Two;s Complement Addition

![twos_complement_addition.png](./images/twos_complement_addition.png)

- **TAdd and UAdd have identical bit-level behavior**
  - Signed vs. unsigned addition in C:

```c
int s, t, u, v;
s = (int) ((unsigned) u + (unsigned) v);
t = u + v;
```

Two's complement addition looks just like a regular edition. In other words, we can perform a subtraction. And addition of subtraction of numbers by using this two's complement representation for negative numbers.

- Will give s == t

| Dropped | Original | Value       |
| ------- | -------- | ----------- |
|         | 0101     | 4+1 = 5     |
|         | 1101     | -8+4+1 = -3 |
| 1       | 0010     | 5-3 = 2     |

| Dropped | Original | Value             |
| ------- | -------- | ----------------- |
|         | 1011     | -8+2+1 = -5       |
|         | 0011     | 2+1 = 3           |
|         | 1110     | -5+3 = -8+4+2= -2 |

**Overflow examples:**

| Dropped | Original | Value        |
| ------- | -------- | ------------ |
|         | 1010     | -8+2 = -6    |
|         | 1101     | -8+4+1 = -3  |
| 1       | 0111     | 7 (overflow) |

It's become positive and that's referred to as a negative overflow. The reason of course is the number -9, but we can't represent it in a 4-bit two's complement number, so it overflowed. You'll notice that the +7 differs from -9 by 16.

| Dropped | Original | Value         |
| ------- | -------- | ------------- |
|         | 0111     | 4+2+1 = 7     |
|         | 0101     | 4+1 = 5       |
| 1       | 1100     | -4 (overflow) |

We've taken two positive numbers and added them together and gotten a negative result.

##### 1.3.4.4 TAdd Overflow

- **Functionality**
  - True sum requires _w_+1 bits
  - Drop off MSB
  - Treat remaining bits as 2's comp. integer

![tadd_overflow.png](./images/tadd_overflow.png)

##### 1.3.4.5 Visulizing 2's Complement Addition

- **Values**
  - 4-bits two's comp.
  - Range from -8 to +7
- **Wraps Around**
  - If sum >= 2$^{w-1}$
    - Becomes negative
    - At most once
  - If sum < -2$^{w-1}$ - Becomes positive - At most once

![visualize_tadd_comp.png](./images/visualize_tadd_comp.png)

##### 1.3.4.6 Multiplication

Multiplication is basically the same idea. In fact all the operation are the basically the same idea that if you can't represent it within the word size, you just take the lower _w_ bits.

So all these complicated solutions here are just ways or sayings, in principle if you take two _w_ bits numbers and multiply them together. You might need a result may require as much as 2*w* bits to represent.

Before addtion is _w_+1, multiplication you actually have to double, because you're potentially squaring the largest number.

- **Goal: Computing Product of _w_-bit numbers _x, y_**
  - Either signed or unsigned
- **But, exact results can be bigger than _w_ bits**

  - Unsigned: up to 2w bits
    - Result range: 0 $\le$ _x_\*_y_ $\le$ (2$^w$ - 1)$^2$ = 2$^{2w}$ - 2$^{w+1}$ + 1
  - Two's complement min(negative): Up to 2*w*-1 bits
    - Result range: _x_\*_y_ $\ge$ (-2$^{w-1}$\*2$^{w-1}$-1) = -2$^{2w-2}$ + 2$^{w-1}$
  - Two's complement max(positive): Up to 2*w* bits, but only for (_TMin_$_{w}$)$^2$
    - Result range: _x_\*_y_ $\le$ (-2$^{w-1}$)$^2$ = 2$^{2w-2}$

- **So, maintaining exact results...**
  - Would need to keep expanding word size with each product computed
  - Is done in software, if needed
    - e.g., by “arbitrary precision” arithmetic packages

##### 1.3.4.7 Unsigned Multiplication in C

![unsigned_multiplication.png](./images/unsigned_multiplication.png)

- **Standard Multiplication Funciton**
  - Ignores high order _w_ bits
- **Implements Modular Arithmetic**
  - UMult$_{w}$(_u_, _v_) = _u_ - _v_ mod 2$^w$

| Dropped | Original | Value   |
| ------- | -------- | ------- |
|         | 0011     | 2+1 = 3 |
|         | 0101     | 4+1 = 5 |
|         | 1101     | 15      |

| Dropped | Original | Value         |
| ------- | -------- | ------------- |
|         | 0101     | 4+1 = 5       |
|         | 0101     | 4+1 = 5       |
| 1       | 1001     | 25 mod 16 = 9 |

##### 1.3.4.8 Signed Multiplication in C

![signed_multiplication.png](./images/signed_multiplication.png)

- **Standard Multiplication Function**
  - Ignores high order _w_ bits
  - Some of which are different for signed vs. unsigned multiplication
  - Lower bits are the same

| Dropped | Original | Value        |
| ------- | -------- | ------------ |
|         | 0100     | 4            |
|         | 0101     | 4+1 = 5      |
| 1       | 0100     | 20 mod 16 =4 |

| Dropped | Original | Value     |
| ------- | -------- | --------- |
|         | 0101     | 4+1 = 5   |
|         | 0101     | 4+1 = 5   |
| 1       | 1001     | -8+1 = -7 |

#### 1.3.5 Summary

### 1.4 Representations in memory, pointers and strings

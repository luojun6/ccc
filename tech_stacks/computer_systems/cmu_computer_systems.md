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

### 1.2 Bit-level manipulations

### 1.3 Integers

#### 1.3.1 Representation: unsigned and signed

#### 1.3.2 Conversion, casting

#### 1.3.3 Expanding, truncating

#### 1.3.4 Addtion, negation, multipliation, shifting

#### 1.3.5 Summary

### 1.4 Representations in memory, pointers and strings

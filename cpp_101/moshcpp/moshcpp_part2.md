# CodeWithMosh C++ - Part 2

## 1 Arrays

### 1.1 Creating and Initializing Arrays

```cpp
#include <iostream>

int main() {

    int numbers[4] = {10, 20};

    std::cout << numbers[0] << std::endl;

    return 0;
}
```

### 1.2 Determing the Size of Arrays

```cpp
#include <iostream>

int main() {

    int numbers[4] = {10, 20};

    // Do NOT use this method, big wasting on the memory!!!
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        std::cout << numbers[i] << std::endl;

    for (int number: numbers)
        std::cout << number << std::endl;

    return 0;
}
```

### 1.3 Copying Arrays

```cpp
#include <iostream>

#define ARRAY_SIZE 4

int main() {

    int first_numbers[ARRAY_SIZE] = {10, 20};
    int second_numbers[ARRAY_SIZE];

    int size = sizeof(first_numbers) / sizeof(int);
    for (int i = 0; i < size; i++)
        second_numbers[i] = first_numbers[i];

    for (int number : first_numbers)
        std::cout << number << std::endl;

    for (int number : second_numbers)
        std::cout << number << std::endl;

    return 0;
}
```

### 1.4 Comparing Arrays

```cpp
#include <iostream>

// #define ARRAY_SIZE 4



int main() {

    int first[] = {10, 20, 30, 40};
    int second[] = {10, 20, 30, 40};

    bool areEqual = true;
    int size = sizeof(first) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (first[i] != second[i])
        {
            areEqual = false;
            break;
        }
    }

    std::cout << areEqual << std::endl;

    return 0;
}
```

### 1.5 Passing Arrays to Functions

```cpp
#include <iostream>

// #define ARRAY_SIZE 4

void printNumbers(const int *numbers, const int size) {
    for (int i = 0; i < size; i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
}

int main() {

    int numbers[] = {10, 20, 30, 40};
    int size = sizeof(numbers) / sizeof(int);
    printNumbers(numbers, size);

    return 0;
}
```

### 1.6 Understanding size_t

`t` here is for type, so `size_t` is a type or a data type defined in the standard library, that is used for representing the size of objects. It's guaranteed to be large enough to contain the size of the largest object the system can handle.

```cpp
#include <iostream>
#include <limits>

int main() {

    int numbers[] = {10, 20, 30, 40};

    std::cout << sizeof(int) << std::endl;  // 4
    std::cout << sizeof(size_t) << std::endl;   // 8
    std::cout << std::numeric_limits<long long>::min() << std::endl;
    std::cout << std::numeric_limits<long long>::max() << std::endl;
    std::cout << std::numeric_limits<size_t>::min() << std::endl;
    std::cout << std::numeric_limits<size_t>::max() << std::endl;
    std::cout << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << std::numeric_limits<unsigned long>::max() << std::endl;

    return 0;
}
```

```sh
4
8
-9223372036854775808
9223372036854775807
0
18446744073709551615
0
18446744073709551615
```

32-bits cpu -> unsigned int
64-bits cpu -> unsigned long

### 1.7 Unpacking Arrays

```cpp
#include <iostream>

int main() {

    int values[3] = {10, 20, 30};
    // C++: structured binding
    // JavaScript: destructing
    // Python: unpacking

    auto [x, y, z] = values;

    std::cout << x << ", " << y << ", " << z << std::endl;

    return 0;
}
```

### 1.8 Searching Arrays

**SEARCH ALGORITHMS**

- Linear search
- Binary search
- Ternay serach
- Jump search
- Exponential search

### 1.9 Sorting Arrays

**SORTINg ALORITHMS**

- Bubble sort
- Selection sort
- Insertion sort
- Merge sort
- Quick sort

### 1.10 Multi-dimensional Arrays

```cpp
#include <iostream>

#define ROW 2
#define COL 3

void printMatrix(int matrix[ROW][COL]){
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
            std::cout << matrix[row][col] << " ";
        std::cout << std::endl;
    }
}

int main() {

    int matrix[ROW][COL] = {
        {11, 12, 13},
        {21, 22, 23}
    };

    printMatrix(matrix);

    return 0;
}
```

## 2 Pointers

### 2.1 What is a Pointer?

**Pointer is a special variable that hold the address of another variable in memory.**

![pointers1_0.png](./images/pointers_0.png)

**The reasons for using pointers:**

- Efficently passing large objects
- Dynamic memory allocation
- Enabling polymorphism

### 2.2 Delcaring and Using Pointers

```cpp
#include <iostream>

int main() {

    int number = 10;
    std::cout << "&number: " << &number << std::endl;

    int* ptr = &number;

    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;

    // Indirection (de-referencing) operator
    *ptr = 20;
    std::cout << "*new ptr : " << *ptr << std::endl;

    int* newPtr = nullptr;  // NULL - conventional C
                            // 0 - ealier C++

    std::cout << "nullptr: " << newPtr << std::endl;


    return 0;
}
```

### 2.3 Constant Pointers

**3 Scenarios**

1. Data is constant
2. Pointer is constant
3. Both data and pointer are constant

```cpp
/* Scenario 1: Data is constant */

#include <iostream>

int main() {

    const int x = 10;
    // int* ptr = &x; // Error
    const int* ptr = &x;

    int y = 20;
    ptr = &y; // Pointer is not constant

    return 0;
}
```

```cpp
/* Scenario 2: Pointer is constant */

#include <iostream>

int main() {

    int x = 10;
    int* const ptr = &x;

    int y = 20;
    // ptr = &y; // Error

    *ptr = 20;

    return 0;
}
```

```cpp
/* Scenario 3: Pointer and Data are constant */

#include <iostream>

int main() {

    const int x = 10;
    const int* const ptr = &x;

    int y = 20;
    // ptr = &y; // Error

    // *ptr = 20; // Error

    return 0;
}
```

### 2.4 Passing Pointers to Functions

```cpp
#include <iostream>

void increasePrice(double* price) {
    *price *= 1.2;
}

int main() {

    double price = 100;
    double *ptr = &price;
    increasePrice(ptr);

    std::cout << "Price: " << price << std::endl;

    return 0;
}
```

```cpp
#include <iostream>

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {

    int a = 40;
    int *ptr_a = &a;
    int b = 80;
    int *ptr_b = &b;

    std::cout << "a = " << a << ", b = " << b <<std::endl;

    swap(ptr_a, ptr_b);
    std::cout << "a = " << a << ", b = " << b <<std::endl;

    return 0;
}
```

### 2.5 Understanding size_t

Both the `size` function as well as the `sizeof` operator return a value of type `size_t`. `t` here is short for type, or a data type defined in the standard library that is used for representing the size of objects. It's guaranteed to be large enough to contain the size of the largest object the system can handle.

```cpp
#include <iostream>

using namespace std;

int main() {
    int number[] = { 10, 20, 30 };
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(long long): " << sizeof(long long) << endl;

    return 0;
}
```

```sh
sizeof(int): 4
sizeof(size_t): 8
sizeof(long long): 8
```

An integer takes 4 bytes, but the `size_t` value takes 8 bytes, so it takes more memory and can store larger values. This is equivalent to the `long long` type, which takes 8 bytes of memory.

The difference is that `long long` values are signed by default, so they can be negative or positive, but `size_t` values are always positive, so they can store larger values.

```cpp
#include <iostream>
#include <limits>

using namespace std;

int main() {
    int number[] = { 10, 20, 30 };
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(long long): " << sizeof(long long) << endl;
    cout << "std::numeric_limits<long long>::min()" << std::numeric_limits<long long>::min() << endl;
    cout << "std::numeric_limits<long long>::max()" << std::numeric_limits<long long>::max() << endl;
    cout << "std::numeric_limits<size_t>::min()" << std::numeric_limits<size_t>::min() << endl;
    cout << "std::numeric_limits<size_t>::max()" << std::numeric_limits<size_t>::max() << endl;

    return 0;
}
```

```sh
sizeof(int): 4
sizeof(size_t): 8
sizeof(long long): 8
std::numeric_limits<long long>::min()-9223372036854775808
std::numeric_limits<long long>::max()9223372036854775807
std::numeric_limits<size_t>::min()0
std::numeric_limits<size_t>::max()18446744073709551615
```

| `size_t` equivalent | machine type |
| ------------------- | ------------ |
| unsing int          | 32 bit       |
| unsing long long    | 64 bit       |

There is nothing magical about it, it's just a data type for representing the sizes, this type is guaranteed to be large enough to contain the size of the largest object the system can handle.

### 2.6 Unpacking Arrays

- C++: structured binding
- JavaScript: destructuring
- Python: unpacking

```cpp
#include <iostream>

using namespace std;

int main() {
    int values[] = { 10, 20, 30 };
    auto [x, y, z] = values;

    // int x = values[0];
    // int y = values[1];
    // int c = values[2];

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}
```

### 2.7 Searching Arrays - Linear Searching

![arrays_0](./images/arrays_0.png)

![arrays_1](./images/arrays_1.png)

**EXERCISE**

Implement the linear search algorithm.

Create a function for finding a value in an integer array. If the target value exists, return its index; otherwise return -1.

```cpp
#include <iostream>

using namespace std;

int find(int *numbers, int size, int target);

int main() {

    int numbers[] = { 10, 20, 30 };

    int index = find(numbers, 3, 20);

    cout << index << endl;

    return 0;
}

int find(int *numbers, int size, int target) {

    for (size_t i = 0; i < size; i++) {
        if (numbers[i] == target)
            return i;
    }

    return -1;
}
```

### 2.8 Sorting Arrays - Bubble Sorting

![arrays_2](./images/arrays_2.png)

Let's say we have an area of integers and we want to sort this array in an increasing order with bubble sort algorithm.

We scan the array from left to right, and if items are out of order we swap them. So we start off by comparing the items at index 0 and 1, if the right item is smaller than the left item, we swap them because we want to sort this aray in ascending order.

![arrays_3](./images/arrays_3.png)

So here 2 is smaller than 9 and we have to swap them, now we compare the items at index 1 and 2.

![arrays_4](./images/arrays_4.png)

Again the right item is smaller, so we have to swap these items as well.

![arrays_5](./images/arrays_5.png)

One more time, again we have to swap these items.

![arrays_6](./images/arrays_6.png)

And one last time.

![arrays_7](./images/arrays_7.png)

This was our first iteration or first pass, we need multiple passes to fully sowrdness array, at the end of each pass, the next largest item moves to its correct position. So here 8 is in the correct position.

![arrays_8](./images/arrays_8.png)

This is why we call this algorithm "Bubble Sword". Because after each pass, the next largest item bubbles up, and moves to its correct position.

![arrays_9](./images/arrays_9.png)

So in the next pass, the next largest item which is 4 will bubble up. Once again we compare the items at index 0 and 1, these items are in the right order, because 4 is greater than 2, so we don't need to swap them.

![arrays_10](./images/arrays_10.png)

Let's look at the next 2 items, 1 is smaller than 4, so we should swap these items.

![arrays_11](./images/arrays_11.png)

And one more time, again these items are out of order, so we need to swap them.

![arrays_12](./images/arrays_12.png)

And the last items are in the right order, so we're done with the second pass, now 4 is in the right position.

![arrays_13](./images/arrays_13.png)

As you can see, our array is almost sorted, we just need one more pass to swap 2 and 1, and then our array will be fully sorted.

![arrays_14](./images/arrays_14.png)

```cpp
#include <iostream>

using namespace std;

void swap(int *numbers, int i, int j);
void sort(int *numbers, int size);

int main() {

    int numbers[] = { 8, 2, 4, 1, 3 };
    int size = sizeof(numbers) / sizeof(int);
    sort(numbers, size);

    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;

    return 0;
}

void swap(int *numbers, int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int *numbers, int size) {
    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++) {
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i-1);
        }
    }
}
```

## 3 String

## 4 Struct

## 5 Stream

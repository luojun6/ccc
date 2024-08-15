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

## 3 String

## 4 Struct

## 5 Stream
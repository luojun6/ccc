# Data Structures

## Big O Notation

### What is Big O?

**Big O from Wikipedia:**
Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinite.

We use Big O to describe the performance of an algorithem, and this helps us determine if a given algorithm is scalable or not. Which basically means is an algorithm going to scale well as the input grows really large.

So just because your code executes quickly on your computer doesn't mean it's going to perform well when you give it a large data set.

So that's why we use the **Big O Notation** to describe the performance of an algorithm. Now what does have to do with data structures? Certain operations can be more or less costly depending on what data structures we use.

![normal_array_01](./figures/normal_array_01.png)

For example, access an array element by it's index is super fast. But arrays have a fixed length and if you want constantly add or remove items, they have to get resized, and this will get costly as the size of our input grows very large.

![normal_linked_list_00](./figures/normal_linked_list_00.png)

So, if that's what we need to do. Then we have to use another data structure called a **linked-list**. These data structures can grow or shrink very quickly, but accessing a **linked-list** element by its index is slow.

So that's why you need to learn about the Big O Notation first before we can talk about various data structures.

### O(1)

Here is our example. This method takes an array of integers and paints the first item on the console.

```c
#include <stdio.h>

void log(int *numbers)
{
    printf("%d\n", numbers[0]);
}

int main()
{
    int numbers[4] = {};

    log(numbers); // (O)1

    return 0;
}
```

It doesn't matter how big the array is. We can have an array with one or one million items. All you're doing here is printing the first item. So this method has a single operation, and takes a constant amount of time to run.

You don't worry about the exact execution time in milliseconds, because that can be different from one machine to another or even on the same machine.

All we care about is that this method runs in ocnstant time, and we represent it using the **O(1)**. This is the runtime complexity of this method.

So in this example, the size of input doesn't matter, this method will always run in constant time or **O(1)**.

```c
#include <stdio.h>

void log(int *numbers)
{
    printf("%d\n", numbers[0]);
}

int main()
{
    int numbers[4] = {};

    //  O(2) -> O(1)
    log(numbers);
    log(numbers);

    return 0;
}
```

Well, what about we duplicate the _`printf()`_, and both operations run in constant time, so the runtime complexity of this method is **O(2)**.

Now when talking about the runtime complexity. We don't really care about the number of operations, we just want to know how much algorithm slows down as the input grouws larger.

So in this example, whether we have one or one million items, our method runs in constant time. So we can simplify by writing down **O(1)**, meaning **<span style="color:#2874A6">constant time</span>**.

### O(n)

Here we have a slightly more complex example. Have a loop. So we are iterating over the items this array, and printing each item.

```c
#include <stdio.h>

void logArray(int *parray, int size)
{
    // O(n)
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(parray + i));
    }
}

int main()
{
    int numbers[4] = {0, 1, 2, 3};

    logArray(numbers, 4);

    return 0;
}
```

If you have million items (_`size`_ equals a million), obviously you're going to have a million _`printf()`_ operations.

So the cost of this algorithm grows linearly, and in direct correlation to the _`size`_ of the input. So we represent the runtime complexity of this method using **O(n)**.

The **O(n)**, where **n** represents the _`size`_ of the input. So as **n** grows, the cost of this algrithm also grows linearly, now it doesn't matter what kind of loop we use to iterate over this array.

Now what if we have a _`printf()`_ statement before and after our loop.

```c
void logArray(int *parray, int size)
{

    printf("Before the loop");       // O(1)
    for (int i = 0; i < size; i++)   // O(n)
    {
        printf("%d\n", *(parray + i));
    }
    printf("After the loop");        // O(1)
}
```

You saw that these single operations run in constant time, so here we have the **O(1)**, so the runting operation complexity of this method is **O(1 + n +n)**. However, when using the Big O notation, we drop these constant **O(1)**s because they don't really matter.

Here is the reason, if our array has one million inputs (_`size`_ equalis a million), adding 2 extra operations doesn't rally have a significant increase on the cost of our algorithm.

The cost of our algorithm still increases linearly, so we can simplify this by dropping the constant **O(1 + n +n)**, what matters is that the cost of algorithm increases linearly and in direct proportion to the _`size`_ of our input.

Then what if you had two loops here.

```c
void logArray(int *parray, int size, int length)
{
    // O(n) + O(m)

    for (int i = 0; i < size; i++)   // O(n)
    {
        printf("%d\n", *(parray + i));
    }

    for (int i = 0; i < length; i++)   // O(m)
    {
        printf("%d\n", *(parray + i));
    }
}
```

###

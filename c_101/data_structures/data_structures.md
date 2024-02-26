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

    //  O(2)
    log(numbers);
    log(numbers);

    return 0;
}
```

Well, what about we duplicate the _`printf()`_, and both operations run in constant time, so the runtime complexity of this method is **O(2)**.

Now when talking about the runtime complexity. We don't really care about the number of operations, we just want to know how much algorithm slows down as the input grouws larger.

So in this example, whether we have one or one million items, our method runs in constant time.

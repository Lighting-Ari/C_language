#include <stdio.h>

int main()
{

    int a[50], i, size;
    int *q = a; // declrearing and initializing an pointer variable 'q'

    printf("\n Please enter the size of the array:");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("\n Overflow condition! Cannot insert more elements."); // if the user enter a size above 50)
        return 0;
    }

    else

    {
        printf("\n Please enter the element of the array:");
        for (i = 0; i < size; i++)
        {

            // using all 5 method we can take value from the user but it is recommended to use one one of the following 3.
            // scanf("%d", &a[i]);   // Method 1: Array indexing // Using array indexing
            // scanf("%d", q + i);   // Method 2: Pointer arithmetic
            scanf("%d", &q[i]); // Method 3: Pointer as array
            // scanf("%d", (a + i)); // Using pointer arithmetic
            // scanf("%d", i + a);   // Commutative form of pointer arithmetic

            /*

    1. scanf("%d", &a[i]);
    Valid: Accesses the address of the i-th element of array a using array indexing.

    Explanation:
    a[i] is the element at index i, and &a[i] gives its memory address.
    Example:
    If a is an array of integers, this reads an integer into a[i].

    2. scanf("%d", q + i);
    Valid: Uses pointer arithmetic to access the i-th element via pointer q.

    Explanation:
    Since q points to the start of the array (q = a), q + i computes the address of a[i].
    Example:
    Equivalent to &a[i].

    3. scanf("%d", &q[i]);
    Valid: Treats q as an array and accesses the i-th element via the pointer.

    Explanation:
    q[i] is equivalent to *(q + i), so &q[i] gives the address of a[i].
    Example:
    Same as &a[i].
            */
        }

        printf("\n The Element of the array is:");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);     // Standard array indexing
            printf("%d ", *(q + i)); // Pointer arithmetic with dereference
            printf("%d ", *(a + i)); // Array name as pointer + dereference
            printf("%d ", i[a]);     // Unconventional but valid
            printf("%d ", i[q]);     // Unconventional but valid

            //printf("%d ", *q[i]); // this is not valid

/*
1. printf("%d ", a[i]);
Valid: Accesses the i-th element of the array a using standard array indexing.

Explanation:
Directly retrieves the value stored at index i of the array a.

2. printf("%d ", *q[i]);
Invalid: Syntax error.

Explanation:

q[i] is equivalent to *(q + i) (the value at the i-th element).

Adding * before q[i] (i.e., **q + i) attempts to dereference an integer, which is invalid.

Error: error: invalid type argument of unary '*' (have 'int').

3. printf("%d ", *(q + i));
Valid: Uses pointer arithmetic to access the i-th element via pointer q.

Explanation:

q + i computes the address of the i-th element.

*(q + i) dereferences the pointer to get the value.

4. printf("%d ", *(a + i));
Valid: Equivalent to a[i].

Explanation:

The array name a decays into a pointer to its first element.

a + i gives the address of the i-th element, and *(a + i) retrieves its value.

5. printf("%d ", i[a]);
Valid but unconventional: Uses commutative property of array indexing.

Explanation:

In C, a[i] is equivalent to i[a] due to pointer arithmetic rules.

Avoid this syntax for readability.

6. printf("%d ", i[q]);
Valid but unconventional: Similar to i[a].

Explanation:

q[i] is equivalent to i[q] because q is a pointer.

Rarely used in practice due to poor readability.
*/
        }
    }

    return 0;
}
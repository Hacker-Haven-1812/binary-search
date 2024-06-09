#include <stdio.h>
#include <stdlib.h>

struct array {
    int a[30];
    int size;
    int length;
};

void display(struct array arr)
{
    printf("Elements are:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.a[i]);
    }
}
int binarysearch(struct array arr, int key) {
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l+ h) / 2;
        if (key == arr.a[mid])
        {
            return mid;
        }
        else if (key < arr.a[mid])
        {
            return h = mid - 1;
        }
        else
        {
            return h = mid + 1;
        }
    }
    return - 1;
}
int recursiveBinarySearch(int A[], int l, int h, int  key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h / 2);
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            return recursiveBinarySearch(A, l, mid - 1, key);
        }
        else
        {
            return recursiveBinarySearch(A, mid + 1, h, key);
        }
    }
}
int main() {
    struct array arr = { {2, 3, 4, 5, 6}, 10, 5 };
    printf("%d\n", recursiveBinarySearch(arr.a,0,arr.length ,6));
    display(arr);
   
    return 0;
}

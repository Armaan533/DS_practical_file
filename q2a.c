#include <stdio.h>

int main()
{
    int arr[10], n, i, big;
    printf("Enter no. of elements in array:\t");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    big = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>big)
            big = arr[i];
    }
    printf("The biggest element in the array is %d", big);
    return 0;
}
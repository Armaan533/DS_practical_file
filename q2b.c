#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, i;
    printf("Enter size of array to make:\t");
    scanf("%d", &n);
    arr = (int *)malloc(n*sizeof(int));
    printf("Enter elements to insert into dynamic array:\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Dynamic array created");
    printf("Contents of dynamic array:\t");
    for(i=0;i<n;i++)
        printf("%d\t", arr[i]);
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[10], n, i, j, temp;
    printf("Enter no. of elements in array:\t");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reverse array:\n");
    for(i=0;i<n;i++)
        printf("%d\t", arr[i]);
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[50], n, sum = 0, i;
    printf("Enter no of elements of array:\t");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
            sum += arr[i];
    }
    printf("Sum of even elements is %d", sum);
    return 0;
}
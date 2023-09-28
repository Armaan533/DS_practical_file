#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr1[50], arr2[50], uArr[100], n1, n2, i = 0, j = 0, k = 0, flag = 0;
    printf("Enter no of elements for array 1:\t");
    scanf("%d", &n1);   
    printf("Enter no of elements for array 2:\t");
    scanf("%d", &n2);
    printf("Enter elements for array 1:\n");
    for(i=0;i<n1;i++)
        scanf("%d", &arr1[i]);
    printf("Enter elements for array 2:\n");
    for(i=0;i<n2;i++)
        scanf("%d", &arr2[i]);
    sort(arr1, n1);
    sort(arr2, n2);
    i = j = 0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
            uArr[k++] = arr1[i++];
        else if(arr1[i] < arr2[j])
            uArr[k++] = arr2[j++];
        else
            uArr[k++] = arr2[j++]; i++;
    }
    while(i<n1)
        uArr[k++] = arr1[i++];
    while(j<n2)
        uArr[k++] = arr2[j++];

    printf("Union of the two arrays:\n");
    for(i=0;i<k;i++)
        printf("%d\t", uArr[i]);
    return 0;
}
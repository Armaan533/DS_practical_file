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
    int arr1[10], arr2[10], iArr[20], i, k = 0;
    int n1, n2, j;
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
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            iArr[k++] = arr1[i];
            i++;
            j++;
        }
    }
    printf("Intersection of the two arrays is:\t");
    for(i=0;i<k;i++)
        printf("%d\t", iArr[i]);
    return 0;
}
#include<stdio.h>

void quickSort(int[], int, int);
int  partition(int[], int, int);
void swap(int*, int*);

void main()
{
    int n,i;

    printf("Enter Array Size\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Array Elements\n");
    for(i=0;i<n;i++)
    
        scanf("%d",&arr[i]);

    quickSort(arr,0,n-1);

    printf("After the QuickSort\n");

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    
}

void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int q; 
        q= partition(arr, start, end);
        quickSort(arr, start, q-1);
        quickSort(arr, q+1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int q;
    q = start;
    int pivot;
    pivot= arr[end];
    int i;
    for(i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            swap(&arr[i], &arr[q]);
            q++;
        }
    }
    swap(&arr[end], &arr[q]);
    return q;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}


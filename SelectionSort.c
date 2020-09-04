#include <stdio.h>
void selectionsort(int [],int );
int main()
{
    int n,i;
    int arr[n];
    printf("Enter the size of array:-");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    selectionsort(arr,n);
    printf("After sorting array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
        
    }
        return 0;
}
void selectionsort(int arr[],int arraysize)
{
    int i, j,t,min,count;
    for(i=0;i<arraysize;i++) {
        min=i;
        for(j=i+1;j<arraysize;j++) {
        if(arr[j]<arr[min]) 
        {
          min=j; 
            
        }
          
        }
    t=arr[min];
    arr[min]=arr[i];
    arr[i]=t;
    }
}

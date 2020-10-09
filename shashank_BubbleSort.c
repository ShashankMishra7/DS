#include  <stdio.h>
void main ()
{
  void bubble_sort (int[], int);
  int n, a[20], i;
  printf ("Enter the size of array");
  scanf ("%d", &n);
  printf ("Input the array elements one  by one: \n");
  for (i = 0; i<n; i++)
    {
      scanf ("%d", &a[i]);
    }
  bubble_sort(a, n);
}

void bubble_sort(int a[], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
    {
      for (j = 0; j < n - i - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      temp = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = temp;
	    }
	}
    }
    printf("after bubble sort\n");
    for (i = 0; i < n; i++)
    {
      printf ("%d\n", a[i]);
    }
}


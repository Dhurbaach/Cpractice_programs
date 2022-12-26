#include <stdio.h>
 
int main()
{
   int b[100],x, i, n, y;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &b[i]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &x);
 
   printf("Enter the value to insert\n");
   scanf("%d", &y);
 
   for (i = n - 1; i >= x - 1; i--)
      b[i+1] = b[i];
 
   b[x-1] = y;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", b[i]);
 
   return 0;
}

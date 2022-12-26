#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i, c=0;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( i = 1 ; i <= n ; i++ )
   {
      printf("%d\n", Fibonacci(c));
      c++; 
   }
 
   return 0;
}
 
int Fibonacci(int k)
{
   if ( k == 0 )
      return 0;
   else if ( k == 1 )
      return 1;
   else
      return ( Fibonacci(k-1) + Fibonacci(k-2) );
} 

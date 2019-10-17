#include <stdio.h>



int fib(int n)
{
    int arr[150],result;
    
    arr[0]=1;arr[1]=1;

    int i;

    for(i=n;i>1;i--)
    {
        arr[i] = (n-1) + (n-2);
    }

    return arr
    
}


int main()
{

    int n;
    while(1==1)
    {
    scanf("%d",&n);

    printf("fib of n: %d\n",fib(n));
    }

    return 0;
}
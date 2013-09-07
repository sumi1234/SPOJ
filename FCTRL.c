#include<stdio.h>

int main()
{
    long long int t,n;
    long long i=1,fact;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        
        long long z  = 0; 
        while(n)
        {
            z = z + n/5;
            n=n/5;            
        }
        printf("%lld\n",z);
    }
    return 0;
}
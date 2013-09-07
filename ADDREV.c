#include<stdio.h>

int rev_number(int a)
{
    int rev = 0;
    while(a)
    {
        rev = rev*10 + a%10;
        a = a/10;    
    }
    return rev;
}

int main()
{
    unsigned int n,x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",rev_number(rev_number(x) + rev_number(y)));
        
    }
    return 0;
}
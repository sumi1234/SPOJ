#include<stdio.h>

int modulus(char *b,int a)
{
    int r = 0,i=0;
    while(b[i])
    {
        r= 10*r + (b[i] - '0');      
        r = r%a;
        i++;
    }
    
    return r;   
    
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else if(a==0)
        return b;
    else
        return gcd(b,a%b);    
}

int main()
{
    int t,a,i;
    char b[255];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        scanf("%s",b);
        if(a==0)
            printf("%s\n",b);
        else if(b[0]=='0')
            printf("%d\n",a);
        else
            printf("%d\n",gcd(a,modulus(b,a)));
              
    }
    
}
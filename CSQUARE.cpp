#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    long long a,m;
    char b[300];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%lld",&a);
         scanf("%s",b);
         scanf("%lld",&m);
        if(a==0)
            printf("0\n");
        else if(strcmp(b,"0")==0)
            printf("%lld\n", 1%m); 
        else if(m==0)
            printf("%lld\n",a);
        else
        { 
            int l=0;
            long long res=1;
            l=strlen(b);
            for(j=l-1;j>=0;j--)
            {       
                if(b[j]=='1')
                    res=(res*a)%m;
                else if(b[j]=='2')
                    res=(((res*a)%m)*a)%m;
                a=(((a*a)%m)*a)%m;
             }
        res=res%m;
        printf("%lld\n",res%m);
    }      
    }
    return 0;
}
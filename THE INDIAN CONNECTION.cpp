#include<stdio.h>

/*
int main()
{
    int t,count;
    long long int n,k;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%lld %lld",&n,&k);
        if(k==1)
            printf("Male\n");
        else if(k==2)
            printf("Female\n");
        else{
            k=k-1;
        while(k>1)
        {
            if(k%2!=0)
                count+=1;
            k=k>>1;
        }
        if(count%2==0)
            printf("Female\n");
        else
            printf("Male\n");
        }
        printf("\n");
    }
    return 0;
}
*/
int findGender(long long n)
{
    int count = 0;
    if(n==1)
        return 1;
    else if(n==2)
        return 0;
    else
    {
        n = n -1;
        while(n>1)
        {
            if(n%2!=0)
                count++;
            n=n>>1;
        }
        
        return (count%2);        
    }
}

int main()
{
    int t, n,i;
    long long k;
    
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%lld", &k);
        
        if(findGender(k))
            printf("Male\n");
        else
            printf("Female\n");
    }
    return 0;
}
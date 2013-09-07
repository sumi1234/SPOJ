    #include<stdio.h>
     
    inline void fastRead(int *a)
    {
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
    *a=*a*10+c-'0';
    c=getchar_unlocked();
    }
    }
     
    int main()
    {
    long long int n,k;
    int a,i=0;
    scanf("%lld %lld",&n,&k);
    while(n--)
    {
    fastRead(&a);
    if(a%k == 0)
    i++;
    }
    printf("%d",i);
    return 0;
    } 
#include<stdio.h>
#include<map>
using namespace std;

map<long long, long long> table;
map<long long, long long> :: iterator i;
long long int max(long long int x, long long int y)
{
    return x>y?x:y;
}

long long int maxDollars(long long int n)
{
    if(n==0||n==1||n==2)
        return n;
    i = table.find(n);
    if(i!=table.end())
        return i->second;
    else
    {
        long long value = max(n,(maxDollars(n>>2)+maxDollars(n>>1)+maxDollars(n/3)));
        table.insert(i,pair<long long, long long> (n,value));
        return value;
    }
  
}


int main()
{
    long long int n;
    table.clear();
    while((scanf("%lld",&n))!=EOF)
    {
        printf("%lld\n",maxDollars(n));
    }
    
    return 0;
}
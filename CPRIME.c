#include <stdio.h>
#include <math.h>

#define MAX 100000000
#define LIMIT 10000
#define PRIMELEN 5761456

unsigned flag[(MAX>>6) + 1];
int primes[PRIMELEN+10], total;

#define isComposite(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setComposite(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void primeSieve()
{
	int i, j, k;
	for(i=3; i<LIMIT; i+=2)
		if(!isComposite(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				setComposite(j);
	primes[0] = -1;
	primes[1] = 2;
	for(i=3,j=2; i<MAX; i+=2)
		if(!isComposite(i))
			primes[j++] = i;
	total = j;
}

int binarySearch(int start, int end, int value)
{
    int mid;
    while(start <= end)
    {
        if(value < primes[start])
        	return start-1;
        if(value > primes[end])
        	return end;
        mid = (start+end) / 2;
        if(value == primes[mid])
        	return mid;
        else if(value < primes[mid])
        	end = mid-1;
        else
        	start = mid+1;
    }
    return total-1;
}

int main()
{
	primeSieve();
	unsigned int n;
	double x, p, error;
	while(scanf("%d", &n)==1 && n)
	{
		p = binarySearch(0, total-1, n);
		x = n;
		error = ( fabs(p - x/log(x)) / p ) * 100.0;
		printf("%.1lf\n", error);
	}
	return 0;
}
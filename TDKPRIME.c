#include <stdio.h>
#include <math.h>

#define MAX 100000000
#define LIMIT 10000
#define PRIMELEN 5761456
//to get value of primelen http://primes.utm.edu/howmany.shtml

unsigned flag[(MAX>>6) + 1];
long int primes[PRIMELEN+10];

#define isComposite(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setComposite(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void primeSieve()
{
	long i, j, k;
	for(i=3; i<LIMIT; i+=2)
		if(!isComposite(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				setComposite(j);
	primes[0] = -1;
	primes[1] = 2;
	for(i=3,j=2; i<MAX; i+=2)
		if(!isComposite(i))
			primes[j++] = i;
}

int main()
{
	primeSieve();
	int q,i;
	long k;
	scanf("%d", &q);
	for(i=0;i<q;i++)
	{
		scanf("%ld", &k);
		printf("%ld\n", primes[k]);
	}
	return 0;
}
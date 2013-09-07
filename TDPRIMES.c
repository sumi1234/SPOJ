#include <stdio.h>
#include <math.h>

#define MAX 100000000
#define LIMIT 10000
//to get value of primelen http://primes.utm.edu/howmany.shtml

unsigned flag[(MAX>>6) + 1];

#define isComposite(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setComposite(x) (flag[x>>6]|=(1<<((x>>1)&31)))

int main()
{
		long i, j, k;
	for(i=3; i<LIMIT; i+=2)
		if(!isComposite(i))
			for(j=i*i,k=i<<1; j<MAX; j+=k)
				setComposite(j);
	printf("2\n");
	for(i=3,j=2; i<MAX; i+=2)
		if(!isComposite(i))
		{	if(j%100==1)
				printf("%ld\n",i);
			j++;
		}
	return 0;
}
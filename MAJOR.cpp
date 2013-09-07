//Program to find majority element
#include<stdio.h>
#include<malloc.h>

int majorityElement(int arr[],int size)
{
    int i,major = arr[0],count = 1;
    for(i=1;i<size;i++)
    {
        if(major == arr[i])
            count++;
        else if(count==0)
        {
            major = arr[i];count = 1;
        }
        else
            count--;
              
    }
    count = 0;
    for(i=0;i<size;i++)
    {
        if(major==arr[i])
            count++;
    }
    return count>(size/2)?major:0;
}


int main()
{
    int t,i;
    unsigned int n,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int *arr = (int *)(malloc((sizeof(int))*n));
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        int major = majorityElement(arr,n);
        if(major)
            printf("YES %d\n", major);
        else
            printf("NO\n");
    }
    return 0;
    
}
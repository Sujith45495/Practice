#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[],int n)
{
	int i,temp,j;
	for(int i=1;i<n;i++)
	{
	temp=arr[i];
	j=i-1;
	while(j>=0 && arr[j]>temp)
	{
	arr[j+1]=arr[j];
	j=j-1;
	}
	arr[j+1]=temp;
	}
}
int main()
{
	int i,n,arr[n];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the values of array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	printf("the array values:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d \n",arr[i]);
	}
	printf("the elements after insertion");
	 insertionsort(arr,n);
	 for(i=0;i<=n;i++)
	 {
		 scanf("%d",&arr[i]);
	 }


}

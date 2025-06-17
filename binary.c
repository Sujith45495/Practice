#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a,i,n,key,low,high,mid;
	printf("Enter the size of list: ");
	scanf("%d",&n);
	a=(int*)malloc((n+1)*sizeof(int));
	printf("\nEnter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements in the List are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter an element to search: \n");
       	scanf("%d",&key);

	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(int)(low+high)/2;
		if(a[mid]==key)
		{
			printf("\n Element found at %d position", (mid+1));
			break;
		}
		else if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	if(low>high)
		printf("\n Element not found in the list");
	return 0;
}



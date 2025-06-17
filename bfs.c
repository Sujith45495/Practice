#include<stdio.h>
#include<stdlib.h>
int q[20],a[20][20],vis[20],rear=-1,front=-1;
int main()
{
	int i,j,n,s;
	printf("enter the no. of vertices\n");
	scanf("%d",&n);
	printf("enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the adjacency matrix of vertices\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	for(i=0;i<=n;i++)
	vis[i]=0;
	printf("enter the source vertex\n");
	scanf("%d",&s);
	q[++rear]=s;
	vis[s]=1;
	printf("%d",s);
	if(front<=rear)
	{
		s=q[++front];
		for(int i=1;i<=n;i++)
		{
			if(a[s][i]==0 && vis[i]==1)
			{
				printf("%d",i);
				vis[i]=1;
				q[++rear]=i;
			}
		}
	}
}

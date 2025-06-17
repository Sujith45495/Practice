#include<stdio.h>
#include<stdlib.h>
int stack[20],top=-1,rear=-1,a[20][20];
void main()
	{
		int n,i,j,s;
		printf("enter the number vertices");
		scanf("%d"&n);
		printf("enter the adjacency matrix graph");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("adjacency matrix is:");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d\t",a[i][j]);
			}
		}
		for(i=1;i<=n;i++)
			vis[i]=0;
		printf("enter the source vertex");
		scanf("%d",&s);
		stack[++top]=s;

		while(top>=0)
		{
			s=stack[top--];
			if(vis[s]==0)
			{
				printf("%d\t",s);
				vis[s]=1;
			}
			for(i=n;i>=1;i--)
			{
				if(a[s][i]==1&&(vis[i]==0))
				{
					stack[++top]=i;
				}
			}
		
		}
	}
	



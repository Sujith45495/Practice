#include<stdio.h>
int q[20],front=-1,rear=-1,a[20][20],vis[20];
void main()
{
        int n,i,j,s;
        printf("ENTER THE NUMBER VERTICES");
        scanf("%d",&n);
        printf("ENTER THE ADJACENCY MATRIX OF GRAPH:\n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("\n THE ADJACENCY MATRIX IS\n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        printf("%d",a[i][j]);
                }
                printf("\n");
        }
        for(i=1;i<=n;i++)
                vis[i]=0;
        printf("ENTER THE SOURCE VERTEX:");
        scanf("%d",&s);

        q[++rear]=s;
        vis[s]=1;
        printf("%d",s);
        while(front<=rear)
        {
                s=q[++front];
                for(i=1;i<=n;i++)
                {
                        if((a[s][i]==1)&&(vis[i]==0))
                        {
                                printf("\t%d",i);
                                vis[i]=1;
                                q[++rear]=i;
                        }
                }
        }
}

          


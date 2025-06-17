#include<stdio.h>
void display();
void getdata ();
void wait();
void turnaround();
int i,n,at[10],bt[10],wt[10],tat[10];
float twt=0,ttat=0;
void main()
{	
	system("clear");
	printf("\n***** FCFS ( FIRST COME FIRST SERVE ) SCHEDULING ******\n");
	getdata();
	wait();
	turnaround();
	display();
}
void getdata()
{
	printf("\nEnter the number of process - ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter the %d process burst time & arrival time : ",i+1);
		scanf("%d %d",&bt[i],&at[i]);
	}
}
void wait()
{
	int s=0;
	wt[0]=0;
	for(i=1; i<n; i++)
	{
		s=s+bt[i-1];
		wt[i]=s-at[i];
		twt=wt[i]+twt;
	}
}
void turnaround()
{
	tat[-1]=0;
	for(i=0; i<n; i++)
	{
		tat[i]=bt[i]+wt[i];
		ttat=ttat+tat[i];
	}
}
void display()
{
	printf("\nPROCESS\t|BURST TIME\t|ARRIVAL TIME\t|WAIT TIME\t|TURN AROUND TIME\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t|%d\t\t|%d\t\t|%d\t\t|%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	}
	printf("\nTotal Waiting time (TWT) = %f",twt);
	printf("\nAverage Waiting time (AWT) = %f",twt/n);
	printf("\n\nTotal Turn Around Time(TAT) = %f",ttat);
	printf("\nAverage Turn Around Time Avg.(TAT) = %f \n\n",ttat/n);
}


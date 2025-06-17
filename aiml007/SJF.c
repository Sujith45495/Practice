#include<stdio.h>
main()
{
	system("clear");
	int time,bt[10],at[10],sum_bt=0,small,n,i;
	int sum_turnaround=0,sum_wait=0;
	printf("***** SJF ( SHORTEST JOB FIRST ) NON-PRE-EMPTIVE SCHEDULING ******\n\n");
	printf("Enter no of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter arrival time & burst time for process %d : ",i+1);
		scanf("%d%d",&at[i],&bt[i]);
		sum_bt+=bt[i];
	}
	bt[9]=9999;
	printf("\n\nProcess\t|Arrival Time\t|Burst Time\t|Waiting Time\t|Turn Around Time\n");
	for(time=0;time<sum_bt;)
	{
		small=9;
		for(i=0;i<n;i++)
		{
			if(at[i]<=time && bt[i]>0 && bt[i]<bt[small])
			small=i;
		}
		if(small==9)
		{
			time++;
			continue;
		}
		printf("%d\t|%d\t\t|%d\t\t|%d\t\t|%d\t\n",small+1,at[small],bt[small],time-at[small],time+bt[small]-at[small]);
		sum_turnaround+=time+bt[small]-at[small];
		sum_wait+=time-at[small];
		time+=bt[small];
		bt[small]=0;
	}
	printf("\nTotal Waiting Time (TWT) = %f",sum_wait*1.0);
	printf("\nAverage Waiting Time (AWT) = %f",sum_wait*1.0/n);
	printf("\n\nTotal Turn Around Time(TAT) = %f",sum_turnaround*1.0);
	printf("\nAverage Turnaround Time (ATAT) = %f \n\n\n",sum_turnaround*1.0/n);
}


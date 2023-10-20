//FCFS WITH ARRIVAL TIME

#include<stdio.h>
 void main()
 {
    int n, bt[20], at[20], wt[20], tat[20], temp[20], i,j;
    float awt=0, atat = 0;
    printf("Enter total number of processes");
    scanf("%d", &n);
    printf("\nEnter process Burst Time\n");
    for(i = 0; i< n ; i++)
    {
        printf("p[%d]:", i+1);
        scanf("%d", &bt[i]);
    }
    printf("\nEnter Process Arrival Time\n");
    for(i = 0; i<n; i++){
        printf("p[%d]", i+1);
        scanf("%d", &at[i]);
    }
    temp[0] = 0;
    printf("\nProcess\t\tBurst Time\t\tArrival time\t waiting Time\tTurnaround Time");
    for(i = 0; i<n; i++)
    {
        wt[i] = 0;
        temp[i+1] = temp[i]+bt[i];
        wt[i] = temp[i]- at[i];
        tat[i] = bt[i] + wt[i];
        awt = awt+wt[i];
        atat = atat+ tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d", i+1, bt[i], at[i], wt[i], tat[i]);
    }
    awt = awt/n;
    atat =atat/n;
    printf("\n\nAverage Waiting Time: %f", awt);
    printf("\nAverage Turnaround Time: %f",atat);
}
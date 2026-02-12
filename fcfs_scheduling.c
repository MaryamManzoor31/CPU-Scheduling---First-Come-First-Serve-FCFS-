#include <stdio.h>

int main()
{
    int i, n;
    int wt[20], bt[20], tat[20];
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of processes (Max 20): ");
    scanf("%d", &n);

    if(n <= 0 || n > 20)
    {
        printf("Invalid number of processes.\n");
        return 1;
    }

    printf("\nEnter the burst time for each process:\n");
    for(i = 0; i < n; i++)
    {
        printf("Process P%d: ", i+1);
        scanf("%d", &bt[i]);
    }

    // Waiting time for first process
    wt[0] = 0;

    // Calculate waiting time
    for(i = 1; i < n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
    }

    // Calculate turnaround time
    for(i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    avg_wt /= n;
    avg_tat /= n;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i+1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time: %.2f", avg_wt);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat);

    // Gantt Chart
    printf("\nGantt Chart:\n|");
    for(i = 0; i < n; i++)
    {
        printf("  P%d  |", i+1);
    }

    printf("\n0");
    for(i = 0; i < n; i++)
    {
        printf("      %d", wt[i] + bt[i]);
    }

    printf("\n");

    return 0;
}

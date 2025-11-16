#include <stdio.h>
void inputruns(int runs[], int n) 
{
    printf("Enter runs scored by each player:\n");
    int i;
    for (i = 0; i < n; i++) 
	{
        printf("player %d: ", i+1);
        scanf("%d", &runs[i]);
    }
}
void totalavg(int *runs, int n, int *total, float *average) 
{
    *total = 0;
    int i;
    for (i = 0; i < n; i++) 
	{
        *total += *(runs + i);
    }
    *average = *total / (float)n;
}
void highestscorer(int *runs, int n, int *highestrun, int *playerindex) 
{
    *highestrun = *runs;
    *playerindex = 0;
    int i;
    for (i = 1; i < n; i++) 
	{
        if (*(runs+i) > *highestrun) 
		{
            *highestrun = *(runs+i);
            *playerindex = i;
        }
    }
}

int main() {
    int runs[11];
    int total;
    float avg;
    int highest, index;

    inputruns(runs, 11);
    totalavg(runs, 11, &total, &avg);
    highestscorer(runs, 11, &highest, &index);
    printf("\nTotal Runs: %d\n", total);
    printf("Average Runs: %.2f\n", avg);
    printf("Highest Scorer: Player %d with %d runs\n", index + 1, highest);
}



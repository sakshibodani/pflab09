#include<stdio.h>
void recordstatus(int beds[3][5])
{
	printf("Recording bed status..... enter 0 for empty and 1 for occuppied..\n");
	int i,j;
	for(i=0; i<3; i++)
	{
		printf("ward %d:\n", i+1);
		for(j=0; j<5; j++)
		{
			printf(" *Bed %d :", j+1);
			scanf("%d", &beds[i][j]);
		}
	}
}
void countbeds(int beds[3][5], int *occupied, int *empty)
{
	*empty=0;
	*occupied=0;
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<5; j++)
		{
			if(beds[i][j]==1)
			(*occupied)++;
			else
			(*empty)++;
		}
	}
}
void displayresult(int beds[3][5])
{
	printf("Current bed status...");
	int i,j;
	for(i=0; i<3; i++)
	{
		if (i==0)
	     printf("\nGeneral ward\n");
	    else if(i==1)
		 printf("\nICU WARD\n");
		else if(i==2)
		 printf("\nPrivate ward\n");
		 for(j=0; j<5; j++)
		 {
		 if (beds[i][j] == 1)
                printf(" Bed %d: Occupied\n", j + 1);
            else
                printf(" Bed %d: Empty\n", j + 1);
		 }  
	}
}
int main()
{
	int beds[3][5];
	int empty=0;
	int occupied=0;
	recordstatus(beds);
	countbeds(beds, &occupied, &empty);
	displayresult(beds);
	printf("\nTotal Occupied Beds: %d\n", occupied);
    printf("Total Empty Beds: %d\n", empty);

	
}

#include <stdio.h>

void inputAttendance(int att[4][5])
 {
    printf("Enter attendance (1 = present, 0 = absent):\n");
int i,j;
    for (i = 0; i < 4; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Class %d: ", j + 1);
            scanf("%d", &att[i][j]);

           
        }
    }
}

void calculatePercentage(int att[4][5])
 {
    printf("\nAttendance Report\n");
    int i,j;
    for (i = 0; i < 4; i++) 
	{
        int present = 0;

        for (j = 0; j < 5; j++) 
		{
            present += att[i][j];
        }

        float percentage = (present * 100.0f) / 5;

        printf("\nStudent %d: %.2f%% attendance", i + 1, percentage);

        if (percentage < 75.0) {
            printf("  ? WARNING! Attendance below 75%%");
        }
        printf("\n");
    }
}

int main()
 {
    int attendance[4][5];

    inputAttendance(attendance);
    calculatePercentage(attendance);

    return 0;
}


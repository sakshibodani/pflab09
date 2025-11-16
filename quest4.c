#include<stdio.h>
void search(int *ptr, int rows, int cols, int target) 
{	
    int found = 0;
    int i,j;
    for (i=0; i<3; i++) 
	{
        for (j=0;j<4;j++) 
		{
            if (*(ptr + (i*cols + j))==target)
			 {
                printf("Element %d found at row %d, column %d\n", target, i, j);
                found = 1;
            }
        }
    }
    if (!found) 
	{
        printf("element %d not found \n", target);
    }
}                                           
int main() 
{
    int arr[3][4] ={ {10, 20, 30, 40},{5, 15, 25, 35},{2, 4, 6, 8}};
    int num;
    printf("Enter number to search: ");
    scanf("%d", &num);
    searchElement(&arr[0][0], 3, 4, num);

}



#include <stdio.h>
void replace(char arr[3][15]) 
{
	int i,j;
    for (i= 0;i < 3; i++)
	 {
        for (j=0; j < 15; j++)
		 {
            char ch=arr[i][j];
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'|| ch=='E'||ch== 'I'||ch =='O' ||ch=='U')
				 {
                arr[i][j]='*'; 
            }
        }
    }
}
void display(char arr[3][15]) 
{
    printf("\nUpdated Array:\n");
    int i;
    for (i = 0; i < 3; i++) 
	{
        printf("%s\n", arr[i]);
    }
}

int main() {
    char words[3][15] = {"programming","fundamentals", "Lab"};
    replace(words);
    display(words);

}


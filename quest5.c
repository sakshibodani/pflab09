#include <stdio.h>

void printData(void *ptr, char type)
{
    if (type == 'i') 
        printf("Integer: %d\n", *(int *)ptr);
    else if (type == 'f') 
        printf("Float: %.2f\n", *(float *)ptr);
    else if (type == 'c') 
        printf("Character: %c\n", *(char *)ptr);
    else 
        printf("Invalid type code!\n");
}
int main() 
{
    int productID = 100;
    float price = 99.9;
	char category = 'A';
    printData(&productID, 'i');
    printData(&price, 'f');
    printData(&category, 'c');

    return 0;
}


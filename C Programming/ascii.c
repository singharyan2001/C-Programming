#include<stdio.h>

int main()
{
	unsigned char key;
	printf("Enter key from keyboard: ");
    scanf(" %c", &key);
    printf("key = 0x%x\n", key);
    return 0;
}

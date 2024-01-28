//structure padding - the process of introducing blanks in the memory is called structure padding.

#include<stdio.h>
#include<string.h>
//32 bit processor - 4 bytes per clock cycle
struct test
{
    int id1;
    int id2;
    char name;
    char c;
    float percentage;
}z;

struct test1
{
    int id1;
    char name;
    int id2;
    char c;
    float percentage;
}z1;

int main()
{
    //struct test z;
    printf("size: %d\n", sizeof(z));
    printf("size: %d\n", sizeof(z1));
    
    return 0;
}
// Structures
#include<stdio.h>
#include<string.h>

struct first
{
    int roll_no;
    char name[10];
};

int main(){
    int i;
    struct first student[100];

    for(i=0; i<60; i++)
    {
        printf("Please enter roll number of student %d: ", i+1);
        scanf("%d", &student[i].roll_no);
        printf("Please enter name of student %d: ", i+1);
        scanf(" %s", student[i].name);
    }
    return 0;
}
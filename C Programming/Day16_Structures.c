// Structures
#include<stdio.h>
#include<string.h>

struct first
{
    int roll_no;
    char name[10];
};

struct total
{
    struct first a;
    int marks;
};

int main(){
    struct total z;

    z.a.roll_no = 99;
    //z.a.name = {"Aryan"};
    // z.a.name[] = {'A','r','y','a','n','\0'};
    strcpy(z.a.name,"Aryan"); 
    z.marks = 650;

    printf("roll no: %d\n", z.a.roll_no);
    printf("name: %s\n", z.a.name);
    printf("marks: %d\n", z.marks);
    printf("\n");
    struct total q = {103,{"Aman"}, 780};
    printf("roll no: %d\n", q.a.roll_no);
    printf("name: %s\n", q.a.name);
    printf("marks: %d\n", q.marks);

    return 0;
}

//scanf("%s", y.name)
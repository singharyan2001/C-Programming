// Structures
#include<stdio.h>
#include<string.h>

struct personal
{
    long id;
    float gpa;
};

struct identity
{
    char name[30];
    struct personal person;
};

int main()
{
    struct identity X = {"Aryan"}, *ptr = &X;

    X.person.id = 123456789;
    X.person.gpa = 3.4;
    printf("%s %ld %f\n", X.name, X.person.id, X.person.gpa);
    printf("%s %ld %f\n", ptr->name, ptr->person.id);
    
    return 0;
}
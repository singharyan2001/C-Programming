//

#include<stdio.h>
#include<string.h>

//defining a structure - user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    int i;
    
    for(i=0; i<3; i++){
        struct student s[i];
        printf("Enter name: ");
        scanf(" %s", &s[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);
        printf("cgpa: ");
        scanf("%f", &s[i].cgpa);
    }

    return 0;
}

//

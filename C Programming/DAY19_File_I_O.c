/*
    File I/O - fscanf() & fprintf()
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    FILE *fp;
    char s[80];
    int t;
    if((fp = fopen("test19","w")) == NULL)
    {
        printf("cannot open file.\n");
        exit(1);
    }
    printf("Size of file pointer fp is %d\n", sizeof(fp));
    printf("Enter a string and a number: ");
    fscanf(stdin," %s %d", s, &t);     // read from keyboard
    fprintf(fp," %s %d", s, t);        // write to file
    fclose(fp);                        // close the file

    if((fp = fopen("test19","r")) == NULL)
    {
        printf("cannot open file.\n");
        exit(1);
    }
    fscanf(fp, "%s %d",s, &t);  //read from a file
    fprintf(stdout, "%s %d", s, t); // print on the screen
    fclose(fp); // close the file

    return 0;
}
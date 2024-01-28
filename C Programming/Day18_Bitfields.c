//Bit Fields

#include<stdio.h>
#include<string.h>

struct status_types
{
    unsigned delta_cts : 1;
    unsigned delta_dsr : 1;
    unsigned tr_edge : 1;
    unsigned delta_rec : 1;
    unsigned cts : 1;
    //unsigned short cts : 1;
    unsigned dsr : 1;
    unsigned ring : 1;
    unsigned rec_line : 1;
}status;

int main()
{
    printf("size of unsigned: %u\n",sizeof(unsigned));
    status.delta_cts = 0;
    status.delta_dsr = 7;
    printf("size of status: %u\n",sizeof(status));
    return 0;
}
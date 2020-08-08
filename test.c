
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct stuff{

    int * numptr1;
    int * numptr2;
    int num1;
    int num2;
}stuff;

int main()
{
    int proc_id, par_proc_id;
    proc_id=getpid();
    par_proc_id=getppid();

    printf("process id:%d \n",proc_id);
    printf("process id:%d \n",par_proc_id);

    return 0;    
}
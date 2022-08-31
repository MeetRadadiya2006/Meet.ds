#include<stdio.h>
#include<time.h>
#include<dos.h>
int main(void)
{
    clock_t start,end;
    start=clock();

    end = clock();
    printf ("the time was: %f\n",(end - start)/CLK_TCK);
    return 0;
}
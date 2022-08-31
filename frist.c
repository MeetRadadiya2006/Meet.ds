#include<stdio.h>
int pos=0,a[5],i;
void frontinsert(int n)
{
    int len = sizeof(a)/sizeof(a[0]);
    for (i=len-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=n;
}
void lastinsert (int n)
{
    pos = sizeof(a)/sizeof(a[0]);
    a[pos++]=n;
}
void output ()
{
    i=0;
    int len =sizeof(a)/ sizeof(a[0]);
    while(i<=len)
    {
        printf("\n\t%d",a[i]);
        i++;
    }
}
int main ()
{ 
    int n;
    frontinsert(11);
    frontinsert(12);
    frontinsert(13);
    frontinsert(14);
    frontinsert(9);
    frontinsert(7);
    output();
    return 0;
}
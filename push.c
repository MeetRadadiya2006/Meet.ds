#include <stdio.h>
#include<stdlib.h>
#define n 5
int top=-1,stack[n],i;
void push(int val)
{

    if (top > n - 1)
    {

        printf("overflow");
    }
    else
        stack[++top] = val;
}
void pop()
{
    int x;
    if (top <= -1)
        printf("\n underflow");
    else
        x = stack[top--];
    printf("\n poped element is %d", x);
}
int print()
{
    for (int i = 0; i <= top; i++)
    {
        printf("\n %d %d", i, stack[i]);
    }
}
int main()
{
    int ch,val;
    do{     
        printf("\n Press --> 1 For Push \n Press --> 2 For Pop \n Press --> 3 For Show \n Press --> 4 For pip \n Press --> 0 For Exit");
        printf("\n Enter Choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:  
            printf("\n enter value :");
            scanf("%d",&val);
            push(val);
            break;
        case 2:
           pop();
        break;
        case 3:  
            print();
        break;
        case 4:
            print();
        break;
        case 0:
            exit(0);
        break;
        default:
            printf("\n wrong choice");
        }
    }while (n!=0);
}
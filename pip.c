#include<stdio.h>
#include<stdlib.h>
#define n 5
int i,top=-1,stack[5],how,z;
void push(int val)
{
        if(top>n-1)
            printf("overflow");
        else
            stack[++top]=val;
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
void pip(int val)
{
    for(i=0;i<=top;i++)
    {
        if(stack[i]==val)
        {
            printf("\nposition:%d",i+1);
        }
    }
}
void print()
{
    for(i=0;i<=top;i++)
    {
        printf("\n\t %d",stack[i]);
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n press 1 -->> for push");
        printf("\n press 2 -->> for pop");
        printf("\n press 3 -->> for pip");
        printf("\n press 4 -->> for show");
        printf("\n press 0 -->> for exit");
        printf("\n\nenter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("how many you enter :");
                scanf("%d",&how);
                if (how<=6)
                {
                    for(z=0;z<how;z++)
                    {
                        printf("\n\tenter value:");
                        scanf("%d",&val);
                        push(val);
                    }
                }
                else
                {
                    printf("\n\tNot'allowd \n\tOnly 1 To 6 allowd\n");
                }
                break;
            case 2:
                pop();
                break;

            case 3:
                printf("\n\tenter value:");
                scanf("%d",&val);
                pip(val);
                break;

            case 4:
                print();
                break;

            case 0:
                printf("Exit");
                exit(0);
                break;

            default:
                printf("\nwrong choice");
                break;      
        }

    }while(n!=0);
}
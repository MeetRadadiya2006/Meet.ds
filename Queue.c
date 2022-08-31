#include <stdio.h>
int f=-1,r=-1,q[5],max=5,i;
void inert(int val)
{
    if (r+1==max)
    {
        printf("\nfull");
    }
    else if (f==-1&&r==-1)    //f==-1&&r==-1
    {
        q[++f]=val;
        r++;
    }
    else
    q[++r]=val;
}
void delete ()
{
    if(f==-1&&r==-1)
    printf("\n queue is already empty");
    else if (f==r)
    f=r=-1;
    else
    ++f;
}
void print()
{
    if (f==-1)
    {
        printf("\n Queue is empty");
    }
    else {
        for (i=f;i<r;i++)
        printf("\n %d",q[i]);
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n press 1 --> for Enter");
        printf("\n press 2 --> for Delete");
        printf("\n press 3 --> for Show");
        printf("\n press 0 --> for Exit");
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n enter value :");
            scanf("%d",&val);
            inert(val);
        break;
        case 2:
            delete();
        break;
        case 3:
            print();
        break;
        case 0:
            printf("Exit");
        break;
        default:
            break;
        }
    } while (ch!=0);
    
}
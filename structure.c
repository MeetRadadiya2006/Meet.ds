#include <string.h>
#include <stdio.h>
struct student // union
{
    int rollno;
    char name[10];
    int m1, m2, m3, total;
    float per;
};
int main()
{
    int i;
    struct student st[5];
    printf("enter record of 2 student");
    for (i = 0; i < 2; i++)
    {
        printf("enter rollno:");
        scanf("%d", &st[i].rollno);
        printf("enter m1:");
        scanf("%d", &st[i].m1);
        printf("enter m2:");
        scanf("%d", &st[i].m2);
        printf("enter m3:");
        scanf("%d", st[i].m3);
    }
    printf("student information list:");
    for (i = 0; i < 2; i++)
    {
        st[i].total = st[i].m1 + st[i].m2 + st[i].m3;
        st[i].per = st[i].total / 3;
        printf("rollno:%d\n name : %s", st[i].rollno, st[i].name);
        printf("\ntotal:%d \n persantage :%f", st[i].total, st[i].per);
    }
    return 0;
}

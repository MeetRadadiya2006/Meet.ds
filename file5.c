#include <stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    fp = fopen("fili5.txt", "r");
    while (fscanf(fp, "%s", buff) != EOf)
    {
        printf("%s", buff);
    }
    fclose(fp);
}

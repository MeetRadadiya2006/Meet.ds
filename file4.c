#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file4.txt", "w+");
    fprintf(fp, "hi");
    fputs("\ni'm meet", fp);
    fclose(fp);
}
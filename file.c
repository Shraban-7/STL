#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"i m shrabon");
    fprintf(fp,"this is my program");
    fclose(fp);
}

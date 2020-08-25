#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    char a,l;
    int d,n,c;
    scanf("%s",word);
        if(strlen(word)>=10)
        {

            a=word[0];
            c=strlen(word)-1;
            l=word[c];
            d=strlen(word)-2;
            printf("%c%d%c",a,d,l);
        }
        else
            printf("%s",word);


}

#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,e,Ave1,Ave2;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    Ave1 = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1f\n",Ave1);
    if(Ave1>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Ave1<5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        Ave2=(Ave1+e)/2;
        if(Ave2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",Ave2);
    }
    return 0;

}

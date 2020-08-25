#include<stdio.h>
struct person
{

    int age;
    float salary;
};
int main()
{
    struct person person1;

    person1.age=19;
    person1.salary=3000.00;
    printf("%f\n",person1.salary);
    printf("%d\n",person1.age);

    return 0;
}

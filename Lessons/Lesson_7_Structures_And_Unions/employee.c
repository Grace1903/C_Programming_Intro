
#include <stdio.h>

struct Employee {

    char name[50];
    int salary;
};

int main(int argc, char const *argv[])
{
   struct Employee employees[50];
   int i;

   for(i=0;i<3;i++){
    printf("enter the name");
    scanf("%s", employees[i].name);

    printf("enter the salary");
    scanf("%d",&employees[i].salary);
   } 

    for (int i = 0; i < 3; i++)
    {
        printf("name = %s, salary = %d\n", employees[i].name
                                        , employees[i].salary);
    }
    
    return 0;
}

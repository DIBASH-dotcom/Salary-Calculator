#include <stdio.h>
#include <string.h>

int main() {
    int exp;
    float Salary, Bonus=0;
    char Rating[10], Dep[10];

    printf("Enter experience (years): ");
    scanf("%d", &exp);

    printf("Enter Rating (A/B/C): ");
    scanf("%s", Rating);

    printf("Enter Department (IT/HR/Sales): ");
    scanf("%s", Dep);

  
    Salary = 20000;

    if(exp < 2) {
        printf("No Bonus will be given\n");
    } else {
        if(strcmp(Rating, "A") == 0) {
            if(strcmp(Dep, "IT") == 0) 
			Bonus = Salary * 0.20;
			
            else if(strcmp(Dep, "HR") == 0)
			 Bonus = Salary * 0.15;
			 
            else if(strcmp(Dep, "Sales") == 0) 
			Bonus = Salary * 0.18;
        } else if(strcmp(Rating, "B") == 0) {
            if(strcmp(Dep, "IT") == 0)
			 Bonus = Salary * 0.10;
            else if(strcmp(Dep, "HR") == 0)
			 Bonus = Salary * 0.08;
            else if(strcmp(Dep, "Sales") == 0) 
			Bonus = Salary * 0.12;
        } else if(strcmp(Rating, "C") == 0) {
            Bonus = Salary * 0.05;
        }

        
        if(Bonus >= 10000) {
            Bonus = Bonus * 1.05;
        }

        printf("Salary: %.2f\n", Salary);
        printf("Bonus: %.2f\n", Bonus);
        printf("Total Payment: %.2f\n", Salary + Bonus);
    }

    return 0;
}

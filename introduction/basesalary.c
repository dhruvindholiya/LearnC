#include<stdio.h>
int main(){
    float basic, hra, da, ta, gross_salary;
    
    printf("Enter your salary: ");
    scanf("%f", &basic);
    
    hra = basic * 0.10;
    da = basic * 0.05;
    ta = basic * 0.08;
    
    gross_salary = basic + hra + ta + da;
    
    printf("Gross salary amount is: %f", gross_salary);
    return 0;
}

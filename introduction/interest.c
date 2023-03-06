#include<stdio.h>

int main() {
	
    float principle, rate, time, interest;
    
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    printf("Enter time: ");
    scanf("%f", &time);
    
    interest = (principle * rate * time) / 100;

    printf("Your Interest = %f", interest);
    
    return 0;

}

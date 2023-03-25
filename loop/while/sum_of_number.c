#include<stdio.h>
int main() {
	
    int n, sum = 0, rem;
    
    printf ("Please enter any number: ");
    scanf ("%d", &n);
    
    while (n > 0) {
        rem = n%10;    
        sum = sum+rem;    
        n = n/10;    
    }
    
    printf ("The sum of your given number is %d" , sum);
    return 0;
}

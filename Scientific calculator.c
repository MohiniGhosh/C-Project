#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a,b,result;
    

    printf("Scientific Calculator\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\4.Division\n5.modules\n6.factorial\n7.Square Root\n8.Power\n9.Logarithm\n10.Sine\n11.Cosine\n12.Tangent\n");
   
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        	
            printf("Enter two numbers to add: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result: %.2f", result);
            break;
        case 2:
        	
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result: %.2f", result);
            break;
        case 3:
        	
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result: %.2f", result);
            break;
        case 4:
        	
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &a, &b);
            result = a / b;
            printf("Result: %.2f", result);
            break;
        case 5:
		    float fac;
		    printf("Enter a number to find factorial: ");
            scanf("%f", &a);
            fac=1;
            for(int i=1;i<=a;i++){
            	fac=fac*i;
			}
            printf("fac: %.2f", fac);
            break;
		    case 6:
        	
            printf("Enter a number to find square root: ");
            scanf("%f", &a);
            result = sqrt(a);
            printf("Result: %f", result);
            break;
        case 7:
        	
            printf("Enter a number and its power: ");
            scanf("%f %f", &a, &b);
            result = pow(a,b);
            printf("Result: %.2f", result);
            break;
        case 8:
        	
            printf("Enter a number to find logarithm (base 10): ");
            scanf("%f", &a);
            result = log10(a);
            printf("Result: %.2f", result);
            break;
        case 9:
        
        	printf("Enter an angle in degrees to find sine: ");
            scanf("%f", &a);
            result = sin(a * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        case 10:
        	
            printf("Enter an angle in degrees to find cosine: ");
            scanf("%f", &a);
            result = cos(a * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        case 11
		:
    
            printf("Enter an angle in degrees to find tangent: ");
            scanf("%f", &a);
            result = tan(a * M_PI / 180);
            printf("Result: %.2f", result);
            break;
        default:
        	
            printf("Invalid choice!");
    }
    return 0;
}

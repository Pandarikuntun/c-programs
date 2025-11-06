//write a program that enters temparature in celsius and converts that into fahrenheit
#include<stdio.h>
main(){
	float f,c;
	char choice;
	printf("which converson are you doing chose it\nenter C for celsius to fahrenheit\nenter F for fahrenheit to celsius\n");
	scanf("%c",&choice);
	choice=toupper(choice);
	 switch(choice) {
        case 'C':
            printf("Enter the Celsius value: ");
            scanf("%f", &c);
            f = (9.0/5.0) * c + 32;
            printf("Temperature in Fahrenheit: %.2f\n", f);
            break;

        case 'F':
            printf("Enter the Fahrenheit value: ");
            scanf("%f", &f);
            c = (f - 32) * (5.0/9.0);
            printf("Temperature in Celsius: %.2f\n", c);
            break;

        default:
            printf("--- Entered invalid choice ---\n");
    }
}

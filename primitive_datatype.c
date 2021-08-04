#include <stdio.h>
int main(){
    // integer(signed) occupies 4 bytes memory(-2^15 to 2^15-1)
    int num1 =1,num2=2;
    int sum = num1+num2;
    printf("The sum of two number is = %d\n",sum);


    // integer(unsigned) occupies 4 bytes memory(0 to 2^16-1)
    unsigned int n1=2,n2=2;
    unsigned int sub = n1-n2;
    printf("The substraction of two unsigned integer is = %u\n",sub);


    // short integer occupies 2 bytes memory(-2^15 to 2^15-1)
    short int n=10,_n=10;
    short int div = n/_n;
    printf("The division of two short integer is = %hi\n",div);


    // long integer occupies 8 bit memory(-2^15 to 2^15-1)
    long int nu1=10,nu2=10;
    long int mul = nu1*nu2;
    printf("The multiplication of two long integer is = %Ld\n",mul);


    // character occupies 1 bytes memory(values between 0 to 255 in case unsigned char and between -128 to 217 in case singed char)
    // ASCII(American Standard Code for Information Interchange)A-Z:65-90,a-z:97-122,0-9:48-57    
    char alpha = 'A';
    printf("The value of alpha is = %c\n",alpha);
    
    


    // float occupies 4 bytes memory(3.4E-38 to 3.4E+38),and it has 6 digits of pricition

    float a=1.0,b=2.0;
    float re = a+b;
    printf("The addition of two float numbers = %f\n",re); 


    // double occupies 8 bytes memory(1.7E-308 to 1.7E+308),and it has 14 digits of pricition
    double a1=1.234567805,b1;
    double re1 = a1+b1;
    printf("The addition of two double numbers = %f\n",re1);
    printf("The addition of two double numbers in exponential formate = %e\n",re1);


    return 0;
}

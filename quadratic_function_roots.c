//  Created by Büşra Özkan on 1/17/21.
//  Write the program that takes the coefficients for the quadratic function from the user and calculates the function roots. For example; enter a,b and c for ax^2+bx+c.

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float a,b,c,x_1,x_2;
    double discriminant;
    printf("Enter a,b and c for ax^2+bx+c:\n");scanf("%f %f %f",&a,&b,&c);
    
    discriminant=b*b-4*a*c;
    if (discriminant>0){
        x_1=(-b+sqrt(discriminant))/2*a;
        x_2=(-b-sqrt(discriminant))/2*a;
        printf("Function has two real roots. The Roots:%.f ve %.f\n",x_1,x_2);
    }
    else if (discriminant==0){
        x_1=(-b+sqrt(discriminant))/2*a;
        x_2=x_1;
        printf("Function has a same root. The Root:%.f\n ",x_1);
    }
    else
        printf("Function doesn't have any roots.\n");
    return 0;
}


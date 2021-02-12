//
//  main.c
//  fibonacci_series
//
//  Created by Büşra Özkan on 2/12/21.
//  Write the program that takes the Fibonacci series's number to be displayed from the user and prints the terms on the screen.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,fib1=1,fib2=1,fib;
    printf("Enter the number of terms of the Fibonacci series you want to view:\n");scanf("%d",&n);
    printf("%d%6d",fib1,fib2);
    
    for (i=1;i<(n-1);i++){
        fib=fib1+fib2;
        printf("%6d",fib);
        fib1=fib2;
        fib2=fib;
    }
    printf("\n");
    return 0;
}

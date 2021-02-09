//  Created by Büşra Özkan on 1/31/21.

//  Write the program that takes the numbers from the user and selects the permutation or combination operation and calculates the value.

// permutation---> P(n,r)=n!/(n-r)!
// combination----> C(n,r)=n!/(r!*(n-r)!)

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,r,i,operation;
    float n_fak=1,n_r_fak=1,r_fak=1,permutation,combination;
    
    printf("Enter the numbers for permutation or combination operation:\n (Ex:Enter 2 and 5 for P(5,2)\n");scanf("%d %d",&n,&r);
    
// Firstly, calculate n!,(n-r)! and r!
    
    for (i=1;i<=n;i++){
        n_fak*=i;
    }
    for (i=1;i<=(n-r);i++){
        n_r_fak*=i;
    }
    for (i=1;i<=r;i++){
        r_fak*=i;
    }
    
// calculate permutation or combination.
    
    printf("Select your operation:\n1 for permutation \n2 for combination\n");scanf("%d",&operation);
    if (operation==1){
        permutation=n_fak/n_r_fak;
        printf("Permutation=%.3f\n",permutation);
    }
    else if (operation==2){
        combination=n_fak/(n_r_fak*r_fak);
        printf("Combination=%.3f\n",combination);
    }
    else
        printf("You select wrong operation.\n");
    return 0;
}

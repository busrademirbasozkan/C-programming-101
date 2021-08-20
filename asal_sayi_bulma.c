//
//  main.c
//  asal sayı
//
//  Created by Büşra Özkan on 8/20/21.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n,i,sayac=0;
    printf("Pozitif bir tamsayı giriniz:");scanf("%d",&n);

    for(i=2;i<n;i++){
        if (n%i==0){
            sayac++;
        }
    }
if (sayac==0){
    printf("%d sayısı asal sayıdır.\n",n);
}
else {
    printf("%d sayısı asal sayı değildir\n",n);
}
}

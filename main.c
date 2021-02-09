//
//  main.c
//  permutation or combination
//
//  Created by Büşra Özkan on 1/31/21.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n,r,i,islem;
    float n_fak=1,n_r_fak=1,r_fak=1,permutation,combination;
    
// permütasyon---> P(n,r)=n!/(n-r)!
// komibasyon----> C(n,r)=n!/(r!*(n-r)!)
    
    printf("permutasyon yada kombinasyonunu almak istedğiniz sayıları giriniz:\n (ör:P(5,2) için 5 ve 2 giriniz\n");scanf("%d %d",&n,&r);
    
// Öncelikle n!,(n-r)! ve r! değerlerini aşağıdaki gibi hesaplayalım.
    
    for (i=1;i<=n;i++){
        n_fak*=i;
    }
    for (i=1;i<=(n-r);i++){
        n_r_fak*=i;
    }
    for (i=1;i<=r;i++){
        r_fak*=i;
    }
    
// Yapmak istediğimiz işleme göre hesaplama aşağıdaki kod ile sağlanır.
    
    printf("Yapmak istediğiniz işlemi seçiniz:\npermütasyon için 1 \nkombinasyon için 2\n");scanf("%d",&islem);
    if (islem==1){
        permutation=n_fak/n_r_fak;
        printf("Permüyasyon=%.3f\n",permutation);
    }
    else if (islem==2){
        combination=n_fak/(n_r_fak*r_fak);
        printf("Kombinasyon=%.3f\n",combination);
    }
    else
        printf("Hatalı işlem seçtiniz.\n");
    return 0;
}

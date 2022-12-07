#include <stdio.h>
float ortalamaBul(float toplam)
{float ort;
ort=toplam/5;
return ort;}

int main(){
    int sayi;
    float toplam = 0;

    for(int i=0 ; i<5 ; i++){
        printf("%d. sayiyi giriniz : ", i+1);
        scanf("%d", &sayi);
        
        toplam = toplam + sayi;
    }
    
    float ortalama=ortalamaBul(toplam);
    printf("Girilen sayilarin ortalamasi : %f \n", ortalama); 

    return 0;
}
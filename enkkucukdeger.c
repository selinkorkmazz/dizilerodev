#include<stdio.h>
int enkucukdeger(int dizi[])
{
    int min;
    min = dizi[0];
    

    for(int i=0 ; i<5 ; i++){
        if(min > dizi[i])
        min = dizi[i]; 

          
    }
    return min;
}
int main(){
     int dizi[5], min;

     for(int i=0 ; i<5 ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &dizi[i]);
     }

    int enkucuk=enkucukdeger(dizi);

     printf("Dizideki en kucuk sayi : %d \n", enkucuk);
     
     return 0;
 }
#include<stdio.h>
int enbuyukdeger(int dizi[])
{
    int max;
    max = dizi[0];
    

    for(int i=0 ; i<5 ; i++){
          if(max < dizi[i])
               max = dizi[i]; 

          
    }
    return max;
}
int main(){
     int dizi[5], max;

     for(int i=0 ; i<5 ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &dizi[i]);
     }

    int enbuyuk=enbuyukdeger(dizi);

     printf("Dizideki en buyuk sayi : %d \n", enbuyuk);
     
 }
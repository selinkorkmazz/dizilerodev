#include<stdio.h>
float ortalamaBul(int dizi[5])
{
    int toplam=0;
    for(int i=0 ; i<5 ; i++){
    
        toplam += dizi[i];
    }
    float ort=toplam/5.0;
    return ort;}

int kackezgectigi(int dizi[],int aranan)
{
    
    int sayac=0;
    for(int i=0;i<5;i++)
    {
        if(dizi[i]==aranan){
            sayac++;
        }
    }
    return sayac;
}
int enbuyukdeger(int dizi[])
{
    int max;
    max = dizi[0];
    for(int i=0 ; i<5 ; i++)
    {
        if(max < dizi[i])
        max = dizi[i];  
    }
    return max;
}
int enkucukdeger(int dizi[])
{
    int min;
    min = dizi[0];
    for(int i=0 ; i<5 ; i++)
    {
        if(min > dizi[i])
        min = dizi[i];    
    }
    return min;
}
int ikinciBuyukDeger(int dizi[])
{
    int max,ikinci;
    max=dizi[0];
    for(int i=1;i<5;i++)
    {if(max<dizi[i])
    {
        ikinci=max;
        max=dizi[i];
    }
    else if (dizi[i]>ikinci&&dizi[i]<max)
    {
        ikinci=dizi[i];
    }}
    return ikinci; 
}
int ortalamadanBuyuk(int dizi[])
{
    int ortalama=ortalamaBul(dizi);
    int i;
    for(i=0;i<5;i++)
    {
        if(dizi[i]>ortalama)
        printf("%d\t",dizi[i]);
    }
    return dizi[i];
}
int ortalamadanKucuk(int dizi[])
{
    int ortalama=ortalamaBul(dizi);
    int i;
    for(i=0;i<5;i++)
    {
        if(dizi[i]<ortalama)
        printf("%d\t",dizi[i]);
    }
    return dizi[i];
}
int ortalamadanBuyukOlaniTopla(int dizi[])
{
    int ortalama=ortalamaBul(dizi);
    int i;
    int toplam=0;
    for(i=0;i<5;i++)
    {
        if(dizi[i]>ortalama)
        {
        toplam += dizi[i];
        }
    }
    return toplam;
}
float ortalamadanBuyukOlaninOrtalamasi(int dizi[])
{
    int ortalama=ortalamaBul(dizi);
    int toplam=ortalamadanBuyukOlaniTopla(dizi);
    float sayac=0;
    float ort;
    for(int i=0;i<5;i++)
    {
        if(dizi[i]>ortalama)
        {
            sayac++;
        }
    }
    ort=toplam/sayac;
    return ort;
}
int main(){
    int dizi[5];

    for(int i=0 ; i<5 ; i++)
    {
        printf("%d. sayiyi giriniz : ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    float ortalama=ortalamaBul(dizi);
    printf("Girilen sayilarin ortalamasi : %.2f \n", ortalama);

    int aranan;
    printf("Dizi icinde aranacak sayiyi giriniz:");
    scanf("%d",&aranan);
    printf("%d sayisi dizi icinde %d kez gecmistir.\n",aranan,kackezgectigi(dizi,aranan));

    int enbuyuk=enbuyukdeger(dizi);
    printf("Dizideki en buyuk sayi : %d \n", enbuyuk);

    int enkucuk=enkucukdeger(dizi);
    printf("Dizideki en kucuk sayi : %d \n", enkucuk);

    int ikincienbuyuk=ikinciBuyukDeger(dizi);
    printf("En buyuk ikinci sayisi: %d\n",ikincienbuyuk);

    printf("Dizinin ortalamasindan buyuk olan elemanlari:\n");
    ortalamadanBuyuk(dizi);

    printf("\nDizinin ortalamasindan kucuk olan elemanlari:\n");
    ortalamadanKucuk(dizi);
    
    printf("\nDizinin ortalamasindan buyuk olan elemanlarin toplami:%d\n",ortalamadanBuyukOlaniTopla(dizi));

    printf("Dizinin ortalamasindan buyuk olan elemanlarin ortalamasi:%.1f\n",ortalamadanBuyukOlaninOrtalamasi(dizi));

    return 0;
}
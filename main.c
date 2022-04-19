#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



struct calisanlar {

char ad[50];
char soyad[50];
char iseBaslangicTarihi[20];
float maas;
int primSayisi;
char cinsiyet;
};

void calisaninBilgileriniGoster(struct calisanlar *eleman) {
    printf("%s %s %s %f %d %c\n",eleman -> ad,eleman -> soyad,eleman -> iseBaslangicTarihi,eleman->maas,eleman->primSayisi,eleman->cinsiyet);

}


int main()
{   setlocale(LC_ALL,"Turkish");

    struct calisanlar calisan1;
    printf("Lütfen calisanin bilgilerini giriniz...\n");
    scanf("%s %s %s %f %d %c",calisan1.ad,calisan1.soyad,calisan1.iseBaslangicTarihi,&calisan1.maas,&calisan1.primSayisi,&calisan1.cinsiyet);
    struct calisanlar *calisan1Adres = &calisan1;

    printf("%s %s %s %f %d %c\n",calisan1.ad,calisan1.soyad,calisan1.iseBaslangicTarihi,calisan1.maas,calisan1.primSayisi,calisan1.cinsiyet);
    printf("%s %s %s %f %d %c\n",(*calisan1Adres).ad,(*calisan1Adres).soyad,(*calisan1Adres).iseBaslangicTarihi,(*calisan1Adres).maas,(*calisan1Adres).primSayisi,(*calisan1Adres).cinsiyet);
    printf("%s %s %s %f %d %c\n",calisan1Adres -> ad,calisan1Adres -> soyad,calisan1Adres -> iseBaslangicTarihi,calisan1Adres->maas,calisan1Adres->primSayisi,calisan1Adres->cinsiyet);

    calisaninBilgileriniGoster(&calisan1);



    return 0;
}

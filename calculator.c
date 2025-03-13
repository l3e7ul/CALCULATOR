#include <stdio.h>
#include "calculator.h"

    int derivative(){
    int der=0;
    int j=0;
    int k=0;
    int i=0;
    int katSayılar[10];

    printf("Denkleminizin kaç dereceli olduğunu yazınız :\n ");
    scanf("%d", &der);

    while(i<= der){
        printf("%d dereceli bilinmeyenin kat sayısı:\n ",i);
        scanf("%d", &katSayılar[i]);
        i++;
    }
    printf("Denkleminiz : ");
    while(j<=der){
        printf("%d x^%d + ", katSayılar[j],j);
        j++;
    }

    printf("\ntürevi : \n");
    while(k<=der){
        printf("%d x^%d-1 + ", katSayılar[k]*k,k-1);
        k++;
    }
    return 0;
}


    int integral() {
        int der = 0;
        int i = 0;
        int katsayilar[10];
        float yeniKatsayilar[10];

        printf("Denkleminizin kaç dereceli olduğunu yazınız: \n");
        scanf("%d", &der);

        while (i <= der) {
            printf("%d dereceli bilinmeyenin katsayısı: \n", i);
            scanf("%d", &katsayilar[i]);
            i++;
        }

        printf("Denkleminiz: ");
        for (i = der; i >= 0; i--) {
            printf("%d x^%d + ", katsayilar[i], i);
        }

        printf("\nİntegrali: \n");
        for (i = der; i >= 0; i--) {
            yeniKatsayilar[i] = (float)katsayilar[i] / (i + 1);
            printf("%.2f x^%d + ", yeniKatsayilar[i], i + 1);
        }

        printf("c\n");

        return 0;
    }

    int addition() {
        int a, b;
        printf("Toplama islemi icin iki sayi giriniz :  ");
        scanf("%d %d", &a, &b);
        printf("sonuc: %d\n", a + b);
        return 0;
    }

    int subtraction() {
        int a, b;
        printf("Cikarma islemi icin iki sayi giriniz : ");
        scanf("%d %d", &a, &b);
        printf("Sonuc: %d\n", a - b);
        return 0;
    }

    int multiplication() {
        int a, b;
        printf("Carpma islemi icin iki sayi giriniz : ");
        scanf("%d %d", &a, &b);
        printf("Sonuc: %d\n", a * b);
        return 0;
    }

    int division() {
        int a, b;
        printf("Bolme islemi icin iki sayi giriniz :: ");
        scanf("%d %d", &a, &b);
        if (b != 0) {
            printf("Result: %.2f\n", (float)a / b);
        } else {
            printf("Hata! Payda 0 olamaz.\n");
        }
        return 0;
    }
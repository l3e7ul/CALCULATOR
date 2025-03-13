#include "calculator.h"
#include <stdio.h>

int main(void) {
       int choice=0;
       do {
              printf("Bilimsel hesap makinesine hos geldiniz\n");
              printf("Yapmak istediginiz islemi seciniz\n");
              printf("1-toplama\n");
              printf("2-cikarma\n");
              printf("3-carpma\n");
              printf("4-bolme\n");
              printf("5-integral\n");
              printf("6-turev\n");
              printf("7-cikis\n");
              scanf("%d", &choice);
              switch (choice) {
                     case 1:
                            addition();
                            break;
                     case 2:
                            division();
                            break;
                     case 3:
                            multiplication();
                            break;
                     case 4:
                            division();
                            break;
                     case 5:
                            integral();
                            break;
                     case 6:
                             derivative();
                            break;
                     case 7:
                            break;
                     default:
                            printf("lütfen 1-7 arasında bir sayı seçiniz\n");

}
       }
       while (choice!=7);
       printf("gorusmek uzere!");


       return 0;
}
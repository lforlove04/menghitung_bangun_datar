#include <stdio.h>

#include <stdio.h>

int main() {

  int a, t;
  float luas;

  printf("Masukkan panjang alas: ");
  scanf("%d",&a);
  printf("Masukkan tinggi segitiga: ");
  scanf("%d",&t);
  
   luas = 0.5*a*t;
   
   
    printf("Luas segitiga adalah %2.f\n", luas);
    
  
    int sisi1, sisi2, sisi3;
    float keliling;

    printf("Program Menghitung Keliling Segitiga\n\n");
    printf("Input Sisi - 1 : ");
    scanf("%d", &sisi1);
    printf("Input Sisi - 2 : ");
    scanf("%d", &sisi2);
    printf("Input Sisi - 3 : ");
    scanf("%d", &sisi3);

    keliling = sisi1 + sisi2 + sisi3;
    printf("Keliling Segitiga adalah : %.2f cm\n", keliling);

  
}

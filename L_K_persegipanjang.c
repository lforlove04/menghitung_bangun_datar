#include "stdio.h"
 int main (){
  int p,l,k,luas; 
  printf("Masukan Panjang = ");
  scanf("%i",&p);
  printf("Masukan Lebar = "); 
  scanf("%i",&l);
  k = (p+l) * 2;  
  luas = p * l;   
  printf("Luas = %i",luas); 
  printf("\nKeliling = %i",k);
 }

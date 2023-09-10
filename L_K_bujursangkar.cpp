#include <stdio.h>
#include <stdio.h>
 
int main()
{
    int sisi;
    float luas;
 
    printf("\t\t== Program Luas Bujur Sangkar ==\n\n");
    printf(" Masukkan Sisi = ");
    scanf("%d", &sisi);
    luas=sisi*sisi;
    
	printf(" Luas Bujur Sangkar = %g\n",luas);
    
	
    float keliling;
 
    printf("\t\t== Program Keliling Bujur Sangkar ==\n\n");
    printf(" Masukkan Sisi = ");
    scanf("%d", &sisi);
    keliling=4*sisi;
   
    printf(" Keliling Bujur Sangkar = %g\n",keliling);

    
}

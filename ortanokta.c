#include <stdio.h>
#include <stdlib.h>
double fonk(double x)
{
   return (x*x-2*x-3);
}
int main(int argc, char *argv[])
{
  // burdaki veri tipini float yerine double olarak tan�mlasayd�k scanf de veri tipi karakterini %lf olarak de�i�tirmeliyiz.
  double x1,x2; 
  // float olarak tan�mlad���m�zda x1=0 , x2=40 de�erini girdi�imizde 29 ad�mda denklemin kokune ula��yoruz
  // x1 ve x2 de�i�kenini double olarak tan�mlad���m�zda 56 ad�mda sonuca ula��yoruz sebebi : float tek duyarl� ger�el say� (7 basamak), double �ift duyarl� ger�el say� (15 basamak)
  printf("Ilk degere tahmini girin : ");
  scanf("%lf",&x1);
  printf("Ik�nc� degere tahmini girin : ");
  scanf("%lf",&x2);
  if((fonk(x1)*fonk(x2))>0)
  {
         printf("Girdiginiz degerler aras�nda kok yok\n");
  }
  else if(fonk(x1)==0 || fonk(x2)==0)
  {
     printf("Girdiginiz degerlerden birisi denklemin koku\n");
  }
  else
  {
      double xr;
      int i=0;
      for(i=0;i<100;i++)
      {
         xr=(x1+x2)/2;
         
         if(fonk(xr)==0)
         {
            printf("Denklemin koku = %lf  Adim : %d \n",xr,i+1);
            break;
         }
         else if((fonk(x1)*fonk(xr))<0)
         {
            x2=xr;
         }
         else x1=xr;
         printf("%.16lf\n",xr);
         
      }
  }
  system("PAUSE");	
  return 0;
}

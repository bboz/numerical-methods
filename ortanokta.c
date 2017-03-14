#include <stdio.h>
#include <stdlib.h>
double fonk(double x)
{
   return (x*x-2*x-3);
}
int main(int argc, char *argv[])
{
  // burdaki veri tipini float yerine double olarak tanımlasaydık scanf de veri tipi karakterini %lf olarak değiştirmeliyiz.
  double x1,x2; 
  // float olarak tanımladığımızda x1=0 , x2=40 değerini girdiğimizde 29 adımda denklemin kokune ulaşıyoruz
  // x1 ve x2 değişkenini double olarak tanımladığımızda 56 adımda sonuca ulaşıyoruz sebebi : float tek duyarlı gerçel sayı (7 basamak), double çift duyarlı gerçel sayı (15 basamak)
  printf("Ilk degere tahmini girin : ");
  scanf("%lf",&x1);
  printf("Ikıncı degere tahmini girin : ");
  scanf("%lf",&x2);
  if((fonk(x1)*fonk(x2))>0)
  {
         printf("Girdiginiz degerler arasında kok yok\n");
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

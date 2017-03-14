#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fak(double n)
{
   if(n==0) return 1;
   return  n*fak(n-1);    
}      

int main(int argc, char *argv[])
{
  double n=0;
  double e=1;
  double e1=0;
  while(e!=e1)
  {
     e=e1;
     e1=e1 + (1/fak(n));
     n=n+1;
     printf("%.16g\n",e);
  }
  
  system("PAUSE");	
  return 0;
} 

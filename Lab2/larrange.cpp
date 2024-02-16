#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define max 50

int main ()
{
  float arrx[max+1],arry[max+1],num,den,x,y =0.0;
  int i,j,n;
  printf("Enter the value of n");
  scanf("%d",&n);
  
   printf("Enter the value of x for which value of y is needed");
  scanf("%f",&x);
 
  for(i = 0; i< n; i++){
    printf("Enter the value of x%d and f(x%d) ",i,i);
    scanf("%f%f",&arrx[i],&arry[i]);
  }

  for(i = 0; i<n; i++){
    num = den =1.0;
     for(j = 0; j<n; j++){
      if(j!=i){
      num *=( x - arrx[j]);
      den *=  (arrx[i]-arrx[j]);
    }
  }
    y = y +  (num/den)*arry[i];
  }
  printf("Value of y is %f",y);
 
  return 0;
}

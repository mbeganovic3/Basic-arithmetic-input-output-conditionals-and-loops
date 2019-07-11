#include <stdio.h>
#include <math.h>

int main()
{
  int num, z;
 double x;

 do {
  printf("Number ?\n");
  scanf("%d", &num);

 if(num == 0) break;

 if((sqrt(8*num+1)) == (int) (sqrt(8*num+1))){
	printf("%i is a triangular number\n", num);
 }else{

 x = (sqrt(8*(num)+1)-1) / 2;
 z = (int) x;
 z = (z*(z+1)) / 2;
 
 printf("%i is not triangular, nearest triangular number below %i is %i\n", num, num, z);
 }


}while(num !=0);

printf("Done\n");

}

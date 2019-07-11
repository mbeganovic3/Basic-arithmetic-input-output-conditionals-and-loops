#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number from 1 to 20:\n");
  scanf("%d", &number);

 if(number < 1 || number > 20) {
	 printf("Number is not in the range from 1 to 20\n");
  }else{
	printf("Here are the first %d ordinal numbers:\n", number);

	for(int i = 1; i <= number; i++){
		if(i == 1){
		        printf("1st\n");
		}else if(i == 2){
                        printf("2nd\n");
                }else if(i == 3){
                        printf("3rd\n");
                }else {
		         printf("%dth\n", i);
		}
	}

}




}

#include <stdio.h>
#include<unistd.h>

int add(int a, int b){
  return a + b;
}

int subtract(int a, int b){
  return a - b;
}

int multiple(int a, int b){
  return a * b;
}

int divide(int a, int b){
  return a / b;
}

/*Square root function */
 int square_root(int power, int number){
  int result =1;
  for( int i =0; i< power; i++){
    result*=number;
  }
  return result;
}

double logarithmic(double x ){
  // egde case
  if (x <=0){
  // Indicate error (logarithm undefined)
    return -1.0;
  }
  // Parameters for calculations
  double result = 0.0;
  double y = (x - 1)/ (x + 1);
  double y_square = y * y;
  double num = y;
  int n = 1;

  // Calculate the sum terms
  for(int i; i < 100; i++){
    result += num / n;
    num *= y_square;
    n += 2;
  }
  // Final result multiplied by 2 due to the adjustment in series
  return 2 * result;
}





int main(){
  /* Add this extra methdos
  * Logarithmic values ->done
  * Square roots -> done
  * */

  printf("Wellcome!!\n");
  sleep(2);
  printf("Loading calculator...\n");
  sleep(3);
  printf("Loading.....\n");

  printf("Your options as follows:\n");
  printf("1). Addition\n");
  printf("2). Subtration\n");
  printf("3). Multiplication\n");
  printf("4). Division\n");
  printf("5) Square Root\n");
  printf("6). Logarithmic\n");
  int userOptions;
  int num1, num2;
  int repeat[2];
  double result;

  printf("Enter your choice: ");
  if (scanf("%d", &userOptions) != 1) {
      printf("Invalid input. Please enter a number.\n");
      return 1;
  }


  printf("Enter your numbers: ");
  if (scanf("%d %d", &num1, &num2) !=2){
      printf("Invalid input. Please enter two numbers.\n");
      return 1;
  }

if(userOptions == 1){
  result = add(num1, num2);
  printf("%d\n", result);
  }else if(userOptions == 2){
   result = subtract(num1, num2);
   printf("%d\n", result);
  }else if(userOptions == 3){
  result = multiple(num1, num2);
  printf("%d\n", result);
  }else if(userOptions == 4){
   result = divide(num1, num2);
    if (num2 != 0) {
     printf("Result: %d\n", result);
      }
  }else if( userOptions == 5) {
        result =square_root(num1 , num2);
        printf("Result of square root: %d\n", result);
  } else if (userOptions == 6) {
    result= logarithmic(num1);
     printf("Result of logarithmic: %d\n",result);
  }else {
        printf("No futher options \n");
   }
  
 return 0;
}

#include <stdio.h>

int main(void) {
  int num; 
  int i = 1; 
  int sumNum = 0; 
  
  printf("Enter the value of N: ");
  scanf("%d", &num);

  while (i <= num) {
    sumNum+=i*2;
    i++;
    
  }
  printf("The result of summation: %d\n", sumNum);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unordered_map>
using namespace std;


void printPrimes(int num1, int num2) {

  int i;
  int j;
  int temp;
  unordered_map<int, bool> isComposite;

  if(num1 <= 2) {
      printf("2\n");
      num1 = 3;
  }

  for (j = 2; j*j <= num2; j++) {
    temp = num1/j;
    temp *= j;
    for(i = temp; i <= num2; i+=j) {
      if(i!=j) {
          isComposite[i] = true;        
      }
    }
  }
  for (i = num1; i <= num2; i++) {
    if(isComposite[i] == false) {      
      printf("%d\n", i);
    }    
  }  
}

int main()
{
  int num1;
  int num2;
  int numberOfInputs;

  scanf("%d", &numberOfInputs);
  for(int i = 0; i < numberOfInputs; i++)
  {
    scanf("%d", &num1);
    scanf("%d", &num2);
    printPrimes(num1, num2);
  }
  return 0;
}

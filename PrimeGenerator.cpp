#include<iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  int inputNum;
  int j;
//  cout << "Enter the range of numbers to find out all the primes between them." << endl;
  cin >> inputNum;
  for(int k = 0; k < inputNum; k++)
  {

    cin >> num1;
    cin >> num2;

    if(num2 <= num1)
    {
      cout << "Plese enter valid numbers" << endl;
    }
    else
    {
      if(num1 <= 2 && 2 <= num2)
      {
        cout << 2 << endl;
      }
      for (int i = num1; i <= num2; i++)
      {
        if(i % 2 != 0)
        {    
          for (j = 2; j < i; j++)
          {
            if(i % j == 0)
            {
	      break; 
   	    }
          }
	
	  if(j == i)
	  {
	    cout << i << endl;
	  }
        }
      }
    }
    cout << endl;
  }
  return 0;
}

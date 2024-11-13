#include <iostream>

using namespace std;

int main()
 {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  int reversed_number = 0;
  while (number > 0) 
  {
    int remainder = number % 10;
    reversed_number = reversed_number * 10 + remainder;
    number /= 10;
  }
  cout << "Reversed number: " << reversed_number << endl;
  return 0;
}
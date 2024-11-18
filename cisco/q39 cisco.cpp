#include <iomanip>

#include <iostream>

using namespace std;

int
main ()
{

  double goodpi = 3.141593;

  double badpi = 3.5;

   cout << goodpi << ", ";

  cout << setprecision (3);         //LINE I

  cout << goodpi << ", ";    // LINE II

  cout << badpi << ", ";

  return 0;

}

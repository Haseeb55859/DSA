#include <iostream>

using namespace std;

int
main ()
{

  cout << 31.23 << ", ";

  cout.setf (ios::hex, ios::basefield);

   cout.setf (ios::showbase);         //LINE I

  cout << 31.23 << ", ";

  cout.unsetf (ios::showbase);    // LINE II

  cout << 63.23 << ", ";

  return 0;

}

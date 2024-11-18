#include <iostream>

using namespace std;

int
main ()
{

  cout << 31 << ", ";

  cout.setf (ios::oct, ios::basefield);

  cout.setf (ios::showbase);         //LINE I

  cout << 31 << ", ";

  cout.unsetf (ios::showbase);    // LINE II

  cout << 63 << ", ";

  return 0;

}

#include <iostream>

using namespace std;

int
main ()
{

  cout << 31 << ", ";

  cout.setf (ios::hex);         //LINE I

  cout << 31 << ", ";

  cout.setf (ios::showbase, ios::basefield);;    // LINE II

  cout << 63 << ", ";

  return 0;

}

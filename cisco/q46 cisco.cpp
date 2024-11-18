#include <iostream>

using namespace std;

void
f (double a)            //LINE II
{

  cout << 2 + a << endl;

}
template < class A > void
f (A & a)            //LINE I
{

  cout << 1 + a << endl;

}

int
main ()
{

  double a = 1.5;

  f (a);            //LINE II

  return 0;

}


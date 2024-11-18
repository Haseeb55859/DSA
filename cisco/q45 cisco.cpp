#include <iostream>

using namespace std;

template < class T > void
f (double a)            //LINE I
{

  cout << 1 + a << endl;

}

int
main ()
{

  double a = 1.5;

  f < float &>(a);        //LINE II

  return 0;

}


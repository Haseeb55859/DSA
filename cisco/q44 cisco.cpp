include <iostream>

using namespace std;

template < class T > void
f (T & a)           //LINE I
{

  cout << 2 * a << endl;

}

int
main ()
{

  int a = 2;

  f (a);            //LINE II

  return 0;

}

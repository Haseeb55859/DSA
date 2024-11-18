#include <iostream>

using namespace std;

template < class T > class Pocket
{

public:

  T value;

  Pocket (T value)

  };

template < class T > Pocket < T >::Pocket (T value):value (value)
{
}                //LINE I

int
nmain ()
{

  Pocket < double >a (7);    //LINE II

  cout << a.value << endl;

  return 0;

}


#include <iostream>

using namespace std;

template < typedef T >        //LINE I
  class Pocket
{

public:

  T value;

  Pocket (T value)
  {
  };                //LINE II

};

int
main ()
{

  Pocket < double >a (7);

  cout << a.value << endl;

  return 0;

}


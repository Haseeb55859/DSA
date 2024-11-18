#include <iostream>

using namespace std;
class SomethingSpecial
{

public:

  double value;

    SomethingSpecial ():value (0)
{
  }

  SomethingSpecial (double value):value (value)
  {
  }

  SomethingSpecial operator+= (SomethingSpecial & _Right)
  {

    SomethingSpecial result;

    result.value = value + _Right.value;

    return result;

  }

    };

template < typename T > class Pocket
{

  T value;

  public:

  Pocket ()
  {
  }

  Pocket (T value);

  T getValue ()
  {
    return value;
  }

  void add (T _Right)
  {
    value += _Right;
  }

};

template < class T > Pocket < T >::Pocket (T value):value (value)
{
}

int
main ()
{

  Pocket < double >a (3);    //LINE I

  Pocket < SomethingSpecial > n;

  n.add (SomethingSpecial ());    //LINE II

  cout << a.getValue () << ", ";

  a.add (3);

  cout << a.getValue ();

  return 0;

}


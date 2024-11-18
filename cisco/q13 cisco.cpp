#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

template < typename T > class Pocket

{

  T value;

public:

Pocket (T value):value (value)
  {
  }

  T getValue () const
  {
    return value;
  }

  bool operator < (const Pocket & _Right) const
  {
    return value < _Right.value;
  }

};
template < typename T >
  ostream & operator << (ostream & stream, const Pocket < T > &pocket)
{

  stream << pocket.getValue ();

  return stream;

}

void
printer (Pocket < double >i)
{

  cout << i << ", ";

}

bool
Compare (const Pocket < double >&_Left, const Pocket < double >&_Right)
{
  return int (_Left.getValue ()) < int (_Right.getValue ());
}

int
main()
{

  double mynumbers[] = { 1.11, 3.13, 2.12, 5.15, 6.16, 1.15 };

  vector < double >v1 (mynumbers, mynumbers + 6);    //LINE I

  stable_sort (v1.begin (), v1.end (), Compare);    //LINE II

  for_each (v1.begin (), v1.end (), printer);

  return 0;

}

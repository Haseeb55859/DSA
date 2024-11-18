#include <deque>

#include <iostream>

#include <algorithm>

#include <functional>

using namespace std;

void
printer (int i)
{

  cout << i << ", ";

}

struct MultiAdd:public binary_function < int, int, int >
{

  int operator () (const int &_Left, const int &_Right) const
  {
    return 2 * (_Left + _Right);
  }

};

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  deque < int >d1 (mynumbers, mynumbers + 6);

  deque < int >d2 (6);        //LINE I

  transform (d1.begin (), d1.end (), d2.begin (), bind2nd (MultiAdd (), 1));;    //LINE II

  for_each (d2.begin (), d2.end (), printer);

  return 0;

}

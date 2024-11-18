#include <deque>

#include <iostream>

#include <algorithm>

using namespace std;

void
printer (int i)
{

  cout << i << ", ";

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  deque < int >d1 (mynumbers, mynumbers + 6)

  deque < int >::iterator it = lower_bound (d1.begin (), d1.end (), 3);

  d1.push_back (4);    //LINE I

  for_each (it, d1.end (), printer);    //LINE II

  return 0
}

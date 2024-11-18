#include <iostream>

#include <algorithm>

#include <vector>

#include <deque>

#include <set>

using namespace std;

void
myprint (int i)

{

  cout << i << ", ";

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  v1.pop_back ();

  v1.pop_back ();

  v1.pop_back ();

  set < int >s1 (mynumbers, mynumbers + 6);

  deque < int >d1 (mynumbers, mynumbers + 6);

  d1.pop_front ();        //LINE II

  d1.pop_front ();
 
  d1.pop_front ();

  for_each (v1.begin (), v1.end (), myprint);    //LINE II

  for_each (s1.begin (), s1.end (), myprint);

  for_each (d1.begin (), d1.end (), myprint);

  return 0;

}

#include <vector>

#include <iostream>

#include <algorithm>

#include <functional>

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

  vector < int >v1 (mynumbers, mynumbers + 6);

  for_each (v1.begin (), v1.end (), bind2nd (plus < int >(), 1));    //LINE I

  for_each (v1.rbegin (), v1.rend (), printer);    // LINE II

  return 0;

}

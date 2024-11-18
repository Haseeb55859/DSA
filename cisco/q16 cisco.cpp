#include <vector>

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

  int mynumbers1[] = { 8, 9, 7, 6 };

  int mynumbers2[] = { 4, 1, 4, 5 };

  vector < double >v1 (7);

  sort (mynumbers2, mynumbers2 + 4);

  sort (mynumbers1, mynumbers1 + 4);    //LINE I

   merge (mynumbers1, mynumbers1 + 2, mynumbers2, mynumbers2 + 2, v1.begin ());    //LINE II

  for_each (v1.begin (), v1.end (), printer);

  return 0;

}

#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 1, 1, 6, 6 };

  vector < int >v (mynumbers, mynumbers + 8);

  vector < int >::iterator it = search_n (v.begin (), v.end (), 2, 1);    //LINE I

  cout << it - v.begin () << ", ";    //LINE I

  return 0;

}

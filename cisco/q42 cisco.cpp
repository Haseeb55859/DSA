#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

using namespace std;

void
printer (string i) 
{

  cout << i << ", ";

}

int
main ()
{

  vector <string > v1;

   string s;

  do

    {

        cin >> s;

        v1.push_back (s);        // LINE I

    }
  while (s != "q" && cin.good ());    //LINE II

  for_each (v1.begin (), v1.end (), printer);

  return 0;

}

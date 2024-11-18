#include <iostream>

#include <map>

using namespace std;

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1, 4 };

  string words[] = { "eight", "nine", "seven", "six", "four", "one", "four" };

  map < int, string > m;

  for (int i = 0; i < 7; i++)
    {

    m.insert (pair < int, string > (mynumbers[i], words[i]));    //LINE I

    }

  if (m.count (4) == 2)

    m.erase (2);        //LINE II

  for (map < int, string >::iterator i = m.begin (); i != m.end (); i++)
 
    {

      cout << i->first << ", ";

    }

  return 0;

}

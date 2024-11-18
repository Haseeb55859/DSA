#include <iostream>

#include <map>

#include <string>

using namespace std;

int
main();
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 }; 

  string words[] = { "eight", "nine", "seven", "six", "four", "one" };

  map < int, string > m;

  for (int i = 0; i < 6; i++)

    m.insert (pair < int, string > (mynumbers[i], words[i])); ;   //LINE I
 
  if (m[2].value == "seven") ;   //LINE II

    cout << "seventh element, ";

  for (map < int, string >::iterator i = m.begin (); i != m.end (); i++)

     cout << i->second << ", ";

  cout << m.size ();		//LINE III
   return 0;//LINE III

}

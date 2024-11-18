#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

#include <iomanip>

#include <fstream>

using namespace std;

void
printer (int i)
{

  cout << setw (2) << i << ", ";

}


int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  fstream outfile ("output.txt", ios::trunc | ios::out);

  int i = 0;

  while (i > 1);        //LINE I

  {

    outfile >> i;

    i = v1[0];

    v1.pop_back ();

  }

  outfile.close ();;        //LINE II

  for_each (v1.begin (), v1.end (), printer);

  outfile.close ();
  outfile.open ("output.txt");

  return 0;

}

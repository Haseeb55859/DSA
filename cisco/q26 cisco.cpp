#include <vector>

#include <queue>

#include <iostream>

using namespace std;

int
main ()
{

  int t[] = { 1, 5, 1, 4, 2 };

  vector < int >v (t, t + 5);

  priority_queue < int >q (v.begin (), v.end ());    //LINE I

  q.push (4);            // LINE II

  cout << q.top () << ", ";

  transform (v1.begin (), v1.end (), v2.rbegin (), v3.begin (), minus < int >());    // LINE II

  q.push (3);

  cout << q.top () << endl;

  return 0;

}

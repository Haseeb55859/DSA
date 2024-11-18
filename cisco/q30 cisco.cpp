#include <vector>

#include <iostream>

#include <string>

using namespace std;

template < typename T > ostream & print (const T & start, const T & end)
{

  T tmp = start;

  for (; tmp != end; ++tmp)

    {

        cout << *tmp << " ";        // LINE I

    }

  return cout;

}

class A
{

public:

     int a;

public:

    A (int a):a (a)
  {
  }

};

ostream & operator<< (ostream & c, const A & o)
{

  c << o.a;

  return c;

}

int
main ()
{

  int tab[] = { 1, 5, 3, 3, 5, 6 };

  vector < A > v1 (tab, tab + 6);    //LINE II

  v1.insert (v1.end (), A (0));

  print (v1.begin (), v1.end ()) << endl;

  return 0;
 
}

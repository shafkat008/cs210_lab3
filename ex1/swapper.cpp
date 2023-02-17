/*************************
program: swap two integers
**************************/

#include <iostream>
using namespace std;

//template prototypes 
template <typename T>
T swapper(T & x, T & y);

template <typename P>
P printem(P & a, P & b);

int main()
{
	// int int1=3, int2=4;
  // double d1=8.4, d2=3.7;
  // char c1='a', c2='b';

  // //function swapper and printem call
	// printem(int1, int2);
	// swapper (int1, int2);
	// printem(int1, int2);

  // cout << endl;

  // printem(d1, d2);
	// swapper (d1, d2);
	// printem(d1, d2);

  // cout << endl;

  // printem(c1, c2);
  // swapper(c1, c2);
  // printem(c1, c2);

	return 0;
}

//definition of template function swapper for numbers swapping 
template <typename T>
T swapper (T & x, T & y)
{   
    cout << "AFTER SWAP" << endl;
		T tempVal = x;
		x = y;
		y = tempVal;
}

//deinition of template function printem for printing passed values
template <typename P>
P printem (P & a, P & b){
  cout << "First value is: " << a << " Second value is: "  << b << endl;
}


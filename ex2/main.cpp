#include <iostream>
using namespace std;

#include "swapperclass.h"


int main()
{
	my_class <int> intVal(3, 4);
	intVal.printem();
	intVal.swapper ();
	cout << "AFTER SWAP" << endl;
	intVal.printem();

  my_class<char> charVal('a','b');
  charVal.printem();
	charVal.swapper ();
	cout << "AFTER SWAP" << endl;
	charVal.printem();

  my_class<double> doubleVal(2.5, 9.6);
  doubleVal.printem();
	doubleVal.swapper ();
	cout << "AFTER SWAP" << endl;
	doubleVal.printem();

}

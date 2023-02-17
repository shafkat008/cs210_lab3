#include <iostream>
using namespace std;

#include "swapperclass.h"

template <typename T>
my_class<T>::my_class(T a, T b)
{
	x = a;
	y = b;
}

template <typename T>
my_class<T>::swapper()
{
	T TempVal = x;
	x = y;
	y = TempVal;
} 

template <typename T>
my_class<T>::printem(){	
	cout << "First value is: " << x << " Second value is: " << y << endl;
}

    template class my_class <int>;
    template class my_class <char>;
    template class my_class <double>;

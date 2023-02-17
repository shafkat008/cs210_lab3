#include "swapperclass.h"

#include <iostream>
using namespace std;

template  <typename T>
class my_class
{
  private:
    T x;
    T y;
  public:
    myclass(T a, T b);
    void swapper();
    void printem();
};
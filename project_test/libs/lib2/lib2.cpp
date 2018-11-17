#include "lib2.h"

namespace Hoang
{
namespace LibTwo
{
    LibTwo::LibTwo(){}
    LibTwo::LibTwo(int ia, int ib) : a(ia),b(ia) {}
    
    int LibTwo::func_two() { return 1; };
    int LibTwo::getA() { return a; };
    int LibTwo::getB() { return b; };
}
}
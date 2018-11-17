#include "lib1.h"

namespace Hoang 
{
namespace LibOne
{
    LibOne::LibOne(int ia, int ib) : a(ia), b(ib) {};
    int LibOne::getA() { return a; };
    int LibOne::getB() { return b; };
    int LibOne::func_one() { return 1; };
}
}
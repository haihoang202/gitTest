#include<std>

namespace Hoang
{
namespace ServiceOne
{
namespace
{
int main() 
{
    LibOne lo = new LibOne(1,2);
    LibTwo lt = new LibTwo(2,1);

    std::cout << lo.getA() << endl;
    std::cout << lt.getA() << endl;

    return 0;
}

}
}
}
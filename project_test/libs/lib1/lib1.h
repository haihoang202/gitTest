namespace Hoang
{
namespace LibOne 
{
class LibOne
{
public:
    LibOne();
    LibOne(int a, int b);
    ~LibOne();

    int func_one();
    int getA();
    int getB();

private:
    int a;
    int b;
};
}
}
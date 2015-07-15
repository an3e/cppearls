#include <iostream>

// --------------------------------------------------------------------------------------

class Base
{
public:
    // We are allowed to declare and defife multiple methodes which differ only in the
    // number of parameters. C++ does not forbid to compile this implementations, and...
    void printValue(       int value = 11) { std::cout << "Base::printValue("             << value << ")" << std::endl; }
    void printValue(int x, int value = 11) { std::cout << "Base::printValue(" << x << "," << value << ")" << std::endl; }
protected:
private:
};

// --------------------------------------------------------------------------------------

int main()
{
    Base b;
    // ... the compiler will have no problems in case we try to call a method like this
    // since the only method which fits is the one with the a single(default) parameter.
    b.printValue();

    // But if we want to call a class method like this then we will get problems. The
    // compiler can not distinguish which method should be called.
    b.printValue(7);
    return 0;
}

// --------------------------------------------------------------------------------------

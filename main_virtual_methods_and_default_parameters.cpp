#include <iostream>

// --------------------------------------------------------------------------------------

class Base
{
public:
    virtual void printValue(int value = 11) { std::cout << "Base::printValue(" << value << ")" << std::endl; }
protected:
private:
};

// --------------------------------------------------------------------------------------

class Derived : public Base
{
public:
    virtual void printValue(int value = 22) { std::cout << "Derived::printValue(" << value << ")" << std::endl; }
protected:
private:
};

// --------------------------------------------------------------------------------------

int main()
{
    Base*    pB = new Base();
    Derived* pD = new Derived();
    pB->printValue();
    pD->printValue();

    delete pB;
    pB = pD;
    pB->printValue();

    delete pD;
    
    return 0;
}

// --------------------------------------------------------------------------------------

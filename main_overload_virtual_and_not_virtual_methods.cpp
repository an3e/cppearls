#include <iostream>

// --------------------------------------------------------------------------------------
// This base class will provide 3 methods with different parameter lists.
// --------------------------------------------------------------------------------------
class Base
{
public:
    virtual void printValue(char   value) { std::cout << "Base::printValue(char)   = " << value << std::endl; }
            void printValue(int    value) { std::cout << "Base::printValue(int)    = " << value << std::endl; }
            void printValue(double value) { std::cout << "Base::printValue(double) = " << value << std::endl; }

protected:
private:
};

// --------------------------------------------------------------------------------------
// What will happen if we overwrite one of this methods in the derived class?
// What will happen if we overwrite two of this methods in the dirived class?
// --------------------------------------------------------------------------------------
class Derived : public Base
{
public:
    virtual void printValue(char value) { std::cout << "Derived::printValue(char)= " << value << std::endl; }
//            void printValue(int  value) { std::cout << "Derived::printValue(int) = " << value << std::endl; }

protected:
private:
};

// --------------------------------------------------------------------------------------
// In case we override only one method in the Derived class we will only be able to call
// Derived::printValue(). The parameters will be implicitly converted.
// In case we overwrite two of the methods we will not be able to call
// Derived::printValue() whith the third parameter type.
// The scope of the Derived class is less than the scope of Base class.
// Therefore the method with the same name in Base class will not be visible anymore.
// The same behaviour can be observed in case the local variable name covers a global
// variable with the same name (even if this variables have two different types).
// TODO: why does the implicit parameter conversion take place in case there is only
// one Derived::printValue() defined and why there is no implicit conversion in case we
// define a second Derived::printValue() ?
// --------------------------------------------------------------------------------------

int main()
{
    Derived objD;
    char   c = 'A';
    int    i = c; // A == 65
    double d = i + 0.5;

    objD.printValue(c);
    objD.printValue(i);
    objD.printValue(d);

    return 0;
}

// --------------------------------------------------------------------------------------

#include <iostream>

// --------------------------------------------------------------------------------------
// We will declare a pure virtual method in the Base class
// --------------------------------------------------------------------------------------

class Base
{
public:
    virtual void print()=0;
protected:
private:
};

// Can we do it here?
void Base::print()
{
    std::cout << "Base::print()" << std::endl;
}

// --------------------------------------------------------------------------------------

class Derived : public Base
{
public:
    virtual void print();
protected:
private:
};

void Derived::print()
{
    std::cout << "Derived::print()" << std::endl;
}

// --------------------------------------------------------------------------------------

class Derived2 : public Base
{
public:
    // We do not provide an implementation of pure virtual method Base::print() here.
    // Will we able to create an object of this class?
protected:
private:
};

// --------------------------------------------------------------------------------------

int main()
{
    // We are not allowed to create an object of this type since this class is abstract.
    // It is abstract since it has a member method declared as pure virtual.
    // Following code can not be compiled.
    /*
    Base* objB = new Base();
    objB->print();
    delete objB;
    */

    Base* objD = new Derived();
    objD->print();          // what will be printed here?
    objD->Base::print();    // can we do it like that?
    delete objD;

    // We are not allowed to create an object of class Derived2 since it does not
    // provide an implementation of pure virtual method of class Base.
    // Following code can not be compiled.
    /*
    Base* objD2 = new Derived2();
    objD2->print();
    delete objD2;
    */

    return 0;
}

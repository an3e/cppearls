#include <iostream>

// --------------------------------------------------------------------------------------

class Empty
{
public:
    virtual void func(void){ std::cout << this << std::endl; }
    char* ptr;
protected:
private:
};

// --------------------------------------------------------------------------------------

int main()
{
    Empty obj;
    std::cout << "Size of object: " << sizeof(obj) << " bytes." << std::endl;
    return 0;
}

#include <iostream>

class Base
{
public:

    // Constructor
    Base(const int data = 0):
        m_data(data)
    {
        std::cout << "Constructor (" << data << ")" << std::endl;
    }
    
    // Destructor
    ~Base()
    {
        std::cout << "Destructor (" << m_data << ")" << std::endl;
    }
    
    // Copy constructor
    Base (const Base& rhs):
        m_data(rhs.getData())
    {
        std::cout << "Copy constructor (" << m_data << ")" << std::endl;
    }

    // Assignment operator
    const Base& operator=(const Base& rhs)
    {
        m_data = rhs.getData();
        std::cout << "Assignment operator" << std::endl;
        return *this;
    }

    //
    int getData(void) const
    {
        return m_data;
    }

    //
    void setData(int data)
    {
        m_data = data;
    }

protected:
private:

    // Fake class data
    int m_data;
};

// --------------------------------------------------------------------------------------

int main()
{
    Base b1(1);

    Base b2 = b1;
    b2.setData(2);

    Base b3(b2);
    b3.setData(3);

    Base b4 = b3;
    b4.setData(4);
    b4 = b3;

    return 0;
}

#ifndef EXCEPTION_HANDLING
#define EXCEPTION_HANDLING
#include <iostream>
using namespace std;
// 28.1 creating an exception situation

void createException()
{
    int top = 90;
    int bottom = 0;
    try
    {
        cout << "top/2 " << top / 2 << endl;
        // create own exception with throw
        if (bottom == 0)
        {
            throw "Division by zero!";
        }
        cout << "top/bottom " << (top / bottom) << endl;
        cout << "top/3 " << top / 3 << endl;
    }
    catch (const char *ex)
    {
        cout << ex << endl;
    }

    cout << "Done.\n";
}

const int DefaultSize = 10;
class Array
{
public:
    // constructor
    Array(int itsSize = DefaultSize);
    Array(const Array &rhs);
    ~Array() { delete[] pType; }

    // operator
    Array &operator=(const Array &);
    int &operator[](int offSet);
    const int &operator[](int offSet) const;

    // accessor
    int getItsSize() const { return itsSize; }

    // friend function
    friend ostream &operator<<(ostream &, const Array &);

    class xBoundary
    {
    }; // define the exception class

    class xTooBig
    {
    };
    class xTooSmall
    {
    };
    class xZero
    {
    };
    class xNegative    {
    };

private:
    int *pType;
    int itsSize;
};

Array::Array(int size) : itsSize(size)
{
    if (size == 0) throw xZero();
    if (size < 0) throw xNegative();
    if (size < 10 ) throw xTooSmall();
    if (size > 20) throw xTooBig();
    pType = new int[size];
    for (int i = 0; i < size; i++)
        pType[i] = 0;
}

Array &Array::operator=(const Array &rhs)
{
    if (this == &rhs)
        return *this;
    delete[] pType;
    itsSize = rhs.getItsSize();
    for (int i = 0; i < itsSize; i++)
    {
        pType[i] = rhs[i];
    }
    return *this;
}

int &Array::operator[](int offSet)
{
    int mysize = getItsSize();
    if (offSet >= 0 && offSet < mysize)
        return pType[offSet];
    throw xBoundary();
    return pType[0];
}
const int &Array::operator[](int offSet) const
{
    int mysize = getItsSize();
    if (offSet >= 0 && offSet < mysize)
        return pType[offSet];
    throw xBoundary();
    return pType[0];
}

ostream &operator<<(ostream &os, const Array &array)
{
    int size = array.getItsSize();
    for (int i = 0; i < size; i++)
    {
        os << i << ": " << array[i] << endl;
    }
    return os;
}
void createExceptionClass()
{    
    try
    {
        Array intArray(24);
        for (int j = 0; j < 100; j++)
        {
            intArray[j] = j;
            cout << "intArray " << j << " OK!\n";
        }
    }
    catch (Array::xZero)
    {
        cout << "zero. \n";
    }
    catch (Array::xNegative)
    {
        cout << "negative. \n";
    }
    catch (Array::xTooSmall)
    {
        cout << "too small. \n";
    }
    catch (Array::xTooBig)
    {
        cout << "too big. \n";
    }
    catch (Array::xBoundary)
    {
        cout << "out boundary. \n";
    }
    cout << "Done.\n";
}

void testException()
{
    //createException();
    createExceptionClass();
}

#endif
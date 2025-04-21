#include <iostream>
#include <memory>

/*
    Syntax:

    #include <memory>
    std::unique_ptr<Type> ptr(new Type());
    std::unique_ptr<Type> ptr = std::make_unique<Type>();
*/

using namespace std;

class MyClass
{
private:
public:
    MyClass()
    {
        cout << "MyClass Constructor is called." << endl;
    }

    ~MyClass()
    {
        cout << "MyClass Destructor is called." << endl;
    }

    void display()
    {
        cout << "MyClass display member function is called." << endl;
    }
};

int main()
{

    std::unique_ptr<MyClass> myclass_ptr1 = std::make_unique<MyClass>();
    myclass_ptr1->display();

    std::unique_ptr<MyClass> myclass_ptr2 = std::move(myclass_ptr1);
    if (myclass_ptr1)
        myclass_ptr1->display();
    else
        cout << "myclass_ptr1 is now nullptr." << endl;

    myclass_ptr2->display();


    // std::unique_ptr<MyClass> myclass_ptr3 = myclass_ptr2; // Error!

    /*
        Why Error ? 

        Because std::unique_ptr is a smart pointer with exclusive ownership.
        It is designed so that only one unique_ptr can own a resource at a time.
        To enforce this:
        - It deletes the copy constructor and copy assignment operator.
        - It only supports move semantics — you must use std::move() to transfer ownership.
    */

    return 0;
}
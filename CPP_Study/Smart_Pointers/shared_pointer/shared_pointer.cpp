#include <iostream>
#include <memory>

/*
    Syntax:

    #include <memory>
    std::shared_ptr <Type> ptr(newType());
    std::shared_ptr <Type> ptr = std::make_shared<Type>();
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

    std::shared_ptr<MyClass> myclass_ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> myclass_ptr2 = myclass_ptr1;  //Both myclass_ptr1 and myclass_ptr2 share ownership

    myclass_ptr1->display();
    myclass_ptr2->display();

    std::cout << "Reference count: "<< myclass_ptr1.use_count()<<std::endl;

    //ptr1 and ptr2 will automatically delete the object when the last shared_ptr goes out of scope

    return 0;
}
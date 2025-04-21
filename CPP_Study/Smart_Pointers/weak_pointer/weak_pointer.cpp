#include <iostream>
#include <memory>

/*
    Syntax:

    #include <memory>
    std::weak_ptr <Type> weakPtr = sharedPtr;
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

    std::shared_ptr<MyClass> shared_ptr = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weak_ptr = shared_ptr;

    if (auto lockedPtr = weak_ptr.lock()) // Lock to get a shared_ptr
    {
        lockedPtr->display();
    }
    else
    {
        std::cout << "Object has been deleted." << std::endl;
    }

    std::cout << "Reference count: " << shared_ptr.use_count() << std::endl; // Reference count is 1

    shared_ptr.reset();                   // Reset shared_ptr to delete the object

    if (auto lockedPtr = weak_ptr.lock()) // Lock to get a shared_ptr 
    {
        lockedPtr->display();
    }
    else
    {
        std::cout << "Object has been deleted." << std::endl;
    }

    return 0;
}

/*
    - std::weak_ptr is a smart pointer that does not affect the reference count of the object it points to.
    - It is used to break circular references between shared_ptrs.
    - It can be converted to a shared_ptr using the lock() method, which returns a shared_ptr if the object is still alive.
    - If the object has been deleted, lock() returns a null shared_ptr.
    - It is useful for caching and observer patterns where you want to observe an object without taking ownership of it.
    - It does not manage the lifetime of the object it points to, so it does not delete the object when it goes out of scope.
    - It is typically used in conjunction with std::shared_ptr to avoid memory leaks and dangling pointers.
*/
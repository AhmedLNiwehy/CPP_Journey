# Smart Pointers

 - In modern C++, managing dynamic memory safely and efficiently is crucial for writing robust
   applications. Traditional manual memory management, using new and delete, is error-prone and
   can lead to issues such as **memory leaks**, **dangling pointers**, and **double deletions**.

 - C++11 introduced Smart Pointers to address these issues and simplify memory management. Smart
   pointers are template classes that manage the lifecycle of dynamically allocated objects and
   ensure automatic cleanup.

 - They help ensure that resources are properly released when they are no longer
   needed. The three main types of smart pointers in modern C++ are:
    
    1- unique ptr: Provides exclusive ownership of a resource.
    2- shared ptr: Provides shared ownership, allowing multiple pointers to own the same resource.
    3- weak ptr: Provides a non-owning ”weak” reference to a resource managed by shared ptr

## unique ptr
- Is a smart pointer that maintains exclusive ownership of a dynamically allocated object.
- It is non-copyable but movable, which means you can transfer ownership from one
      unique ptr to another but cannot copy it.
      
### Key Features:
- **Automatic Deletion**: The object managed by unique ptr is automatically deleted when the
    unique ptr goes out of scope.
- **Non-Copyable**: unique ptr cannot be copied, only moved.



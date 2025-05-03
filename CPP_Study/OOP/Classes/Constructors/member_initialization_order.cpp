#include <bits/stdc++.h>
using namespace std;

class A {
private:
public:
	A() {
		cout<<"A Constructor\n";
	}
	~A() {
		cout<<"A Destructor\n";
	}
};

class B {
private:
public:
	B() {
		cout<<"B Constructor\n";
	}
	~B() {
		cout<<"B Destructor\n";
	}
};

class C {
private:
public:
	C() {
		cout<<"C Constructor\n";
	}
	~C() {
		cout<<"C Destructor\n";
	}
};

class D {
private:
	A aa;
	B bb;
	C cc;

public:
	D() : bb(B()), aa(A()), cc(C()){
		cout<<"D Constructor\n";
	}
	~D() {
		cout<<"D Destructor\n";
	}
};

int main() {
	D d;

	return 0;
}
/*
A Constructor
B Constructor
C Constructor
D Constructor
D Destructor
C Destructor
B Destructor
A Destructor


From results: Constructors are called based on Class data members order NOT initalizer list order
 */


/*
    - Constructors are called in the order of declaration in the class, not in the order of initialization in the constructor's member initializer list.
    - This means that if you have multiple member variables in a class, their constructors will be called in the order they are declared in the class definition, regardless of the order you specify them in the member initializer list.
    - This is important to remember, as it can lead to unexpected behavior if you are not careful about the order in which you declare your member variables.
    - For example, if one member variable depends on another, you should declare them in the order that reflects their dependencies.
    - If you declare them in the wrong order, the constructor for the dependent member variable may be called before the constructor for the member variable it depends on, leading to undefined behavior.
    - Good practice:	Match initializer list order to declaration order

    **Summary**
            Concept	                                Behavior
        Member construction order	        Follows declaration order in class
        Member destruction order	        Reverse of construction
        Initializer list order	            Ignored for order, only used for value initialization

*/
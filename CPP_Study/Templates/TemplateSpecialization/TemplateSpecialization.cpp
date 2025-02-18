#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a,T b){
    return (a > b) ? a : b ; 
}


template <>
/**
 * @brief Template specialization for comparing C-style strings.
 *
 * This function is a template specialization for the `maximum` function template,
 * specifically for C-style strings (`const char*`). Template specialization is 
 * necessary here because the default template implementation for `maximum` 
 * would perform a pointer comparison rather than a string comparison. 
 * 
 * In C++, template specialization allows us to define a different implementation 
 * of a template for a specific type. In this case, we need to compare the 
 * contents of the strings rather than their addresses, which requires a 
 * specialized implementation.
 * 
 * @param a The first C-style string to compare.
 * @param b The second C-style string to compare.
 * @return The C-style string that is lexicographically greater.
 */
const char * maximum<const char*> (const char* a, const char* b){
    return ( std::strcmp(a,b) > 0) ? a : b;
}


int main(){

    
	int a{10};
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world"};
	
	auto max_int = maximum(a,b); // int type deduced
	auto max_double = maximum(c,d);// double type deduced
	auto max_str = maximum(e,f) ;// string type deduced
	
	std::cout << "max_int : " << max_int << std::endl;
	std::cout << "max_double : " << max_double << std::endl;
	std::cout << "max_str : " << max_str << std::endl;
    

    //Specialization for const char* type
	const char* g{"wild"};
	const char* h{"animal"};

    const char* result = maximum(g,h);
	std::cout << "max(const char*) : " << result << std::endl;
   
    return 0;
}
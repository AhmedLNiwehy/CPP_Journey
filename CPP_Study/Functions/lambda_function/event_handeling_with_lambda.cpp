#include <iostream>
#include <functional>

/*
    - Lambda functions are anonymous functions that can be defined inline and passed as arguments to other functions.
    - They are often used for short-lived operations, such as event handling.

    - The following example demonstrates how to use a lambda function as an event handler for a button click event.
    - The Button class has a method setButtonEventHandler that takes a lambda function as an argument.
    - The lambda function is stored in the onClick member variable and is called when the button is clicked.
*/

class Button
{
public:
    void click() {
        if(onClick) onClick();
    }

    void setButtonEventHandler(std::function<void()> handler)
    {
        if(handler)
        {
            onClick = handler;
        }
    }

private: 
    std::function<void()> onClick; // Callback function for button click event
};

int main()
{

    Button btn;

    btn.setButtonEventHandler([](){std::cout << "Btn is clicked!" << std::endl;});

    btn.click();

    return 0;
}
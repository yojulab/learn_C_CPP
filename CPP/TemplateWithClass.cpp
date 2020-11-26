#include <iostream>
#include <vector>
// #include <cstdlib>
#include <string>
// #include <stdexcept>

using namespace std;

template <class T> class Stack {
    private:
        vector<T> elements; // elements

    public:
        void push(T const ); // push element
        void pop();           // pop element
        T top();        // return top element

        bool empty() 
        { // return true if empty.
            return elements.empty();
        }
};

template <class T>
void Stack<T>::push(T const element)
{
    // append copy of passed element
    elements.push_back(element);
}

template <class T>
void Stack<T>::pop()
{
    if (elements.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    // remove last element
    elements.pop_back();
}

template <class T>
T Stack<T>::top() 
{
    if (elements.empty())
    {
        throw out_of_range("Stack<>::top(): empty stack");
    }

    // return copy of last element
    return elements.back();
}

int main()
{
    try
    {
        Stack<int> intStack;       // stack of ints
        Stack<string> stringStack; // stack of strings

        // manipulate int stack
        intStack.push(7);
        intStack.push(10);
        intStack.push(15);
        cout << intStack.top() << endl;
        // 15
        // manipulate string stack
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        // hello
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception ex)
    {
        cerr << "Exception: " << ex.what() << endl;
        // Exception: std::exception
        return -1;
    }
    return 0;
}
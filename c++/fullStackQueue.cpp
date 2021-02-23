#include <iostream>
#include <stack>
#include <cassert>

template <class T>
class MyQueue {
    private :
        std::stack<T> mainStack;
        std::stack<T> bufferStack;
    
    public :
        void push(T value) {
            while(!mainStack.empty()) {
                bufferStack.push(mainStack.top());
                mainStack.pop();
            }
            mainStack.push(value);

            while(!bufferStack.empty()) {
                mainStack.push(bufferStack.top());
                bufferStack.pop();
            }
        }
        T pop() {
            assert(!mainStack.empty());
            T value = mainStack.top();
            mainStack.pop();
            return value;
        }
};

int main() 
{ 
    MyQueue<int> q; 
    int a = 1;
    int b = 2;
    int c = 3;
    q.push(a); 
    q.push(b); 
    q.push(c); 
  
    std::cout << q.pop() << '\n'; 
    std::cout << q.pop() << '\n'; 
    std::cout << q.pop() << '\n'; 
  
    return 0; 
} 


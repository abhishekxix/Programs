#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string input) {
    std::stack<char> encountered {};
    bool balanced {true};

    for(const char bracket : input) {
        if((encountered.size() > 0) && ((bracket == ']' && encountered.top() == '[') 
            || (bracket == ')' && encountered.top() == '(') || (bracket == '}' && encountered.top() == '{'))) {
            encountered.pop();
        }
        else 
            encountered.push(bracket);
    }
    // if(encountered.size() > 0) {
    //     balanced = false;
    // }

    balanced = encountered.empty();

    return balanced;
}

int main() {
    /* makes I/O significantly faster. */
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string input {};

    std::cin >> input;

    std::cout << std::boolalpha;

    if(isBalanced(input)) {
        std::cout << "Success";
    }

    return 0;
}
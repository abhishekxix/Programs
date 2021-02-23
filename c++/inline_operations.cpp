#include <iostream>

typedef struct {
    int operand1;
    int operand2;
} operands;

inline int sum(operands op) {
    return op.operand1 + op.operand2;
}

inline int difference(operands op) {
    return op.operand1 - op.operand2;
}

inline int product(operands op) {
    return op.operand1 * op.operand2;
}

inline int division(operands op) {
    return op.operand1 / op.operand2;
}

inline int modulo_division(operands op) {
    return op.operand1 % op.operand2;
}

int main() {
    operands op;
    std::cout << "Enter the first operand -> ";
    std::cin >> op.operand1;
    std::cout << "Enter the second operand -> ";
    std::cin >> op.operand2;

    std::cout << op.operand1 << " + " << op.operand2 << " = " << sum(op) << '\n'
              << op.operand1 << " - " << op.operand2 << " = " << difference(op) << '\n'
              << op.operand1 << " * " << op.operand2 << " = " << product(op) << '\n'
              << op.operand1 << " / " << op.operand2 << " = " << division(op) << '\n'
              << op.operand1 << " % " << op.operand2 << " = " << modulo_division(op) << std::endl;

    return 0;            
}
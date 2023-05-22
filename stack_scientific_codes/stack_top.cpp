#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int performOperation(int operand1, int operand2, char operation) {
    switch (operation) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0;
    }
}

int evaluateExpression(const string& expression) {
    stack<int> operandStack;
    stack<char> operatorStack;

    for (char c : expression) {
        if (c == ' ')
            continue;

        if (isdigit(c)) {
            operandStack.push(c - '0');
        }
        else if (isOperator(c)) {
            while (!operatorStack.empty() && operatorStack.top() != '(' &&
                   (c != '*' && c != '/') &&
                   (operatorStack.top() == '+' || operatorStack.top() == '-')) {
                int operand2 = operandStack.top();
                operandStack.pop();

                int operand1 = operandStack.top();
                operandStack.pop();

                char operation = operatorStack.top();
                operatorStack.pop();

                int result = performOperation(operand1, operand2, operation);
                operandStack.push(result);
            }
            operatorStack.push(c);
        }
        else if (c == '(') {
            operatorStack.push(c);
        }
        else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                int operand2 = operandStack.top();
                operandStack.pop();

                int operand1 = operandStack.top();
                operandStack.pop();

                char operation = operatorStack.top();
                operatorStack.pop();

                int result = performOperation(operand1, operand2, operation);
                operandStack.push(result);
            }
            operatorStack.pop();  // Удаляем открывающую скобку '('
        }
    }

    while (!operatorStack.empty()) {
        int operand2 = operandStack.top();
        operandStack.pop();

        int operand1 = operandStack.top();
        operandStack.pop();

        char operation = operatorStack.top();
        operatorStack.pop();

        int result = performOperation(operand1, operand2, operation);
        operandStack.push(result);
    }

    return operandStack.top();
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string expression = "5 + (2 - 1) * 4 / 2";
    int result = evaluateExpression(expression);
    cout << "Результат: " << result << endl;

    return 0;
}

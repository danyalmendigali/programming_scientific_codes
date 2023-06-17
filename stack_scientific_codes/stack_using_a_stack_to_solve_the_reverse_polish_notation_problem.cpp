#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование стека для решения задачи обратной польской записи (постфиксной нотации):

int evaluatePostfix(const string& expression) {
    stack<int> operandStack;
    istringstream iss(expression);

    string token;
    while (iss >> token) {
        if (isdigit(token[0])) {
            operandStack.push(stoi(token));
        } else {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            if (token == "+") {
                result = operand1 + operand2;
            }

            else if (token == "-")
            {
                result = operand1 - operand2;
            }

            else if (token == "*")
            {
                result = operand1 * operand2;
            }

            else if (token == "/")
            {
                result = operand1 / operand2;
            }

            operandStack.push(result);
        }
    }

    return operandStack.top();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string postfixExpression = "5 2 + 3 *";
    int result = evaluatePostfix(postfixExpression);
    cout << "Результат вычисления: " << result << endl;




   return 0;
}


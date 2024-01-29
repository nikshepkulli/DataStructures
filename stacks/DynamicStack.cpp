#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> stack;

    // Input values for the stack
    cout << "Enter integer values to push into the stack (enter a non-integer value to stop):\n";
    int value;
    while (cin >> value) {
        stack.push(value);
    }
    // Clearing the input buffer
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Pop some values
    stack.pop();
    stack.pop();
    stack.pop();

    // Print remaining values in the stack
    cout << "Values remaining in the stack:\n";
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    return 0;
}

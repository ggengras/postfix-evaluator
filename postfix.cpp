/*
 * Graeme Gengras
 * ENGS65 Project 5
 * Postfix.cpp
 *
 * Program to evaluate postfix expressions
 *
 * Used the following link as a reference and for test cases:
 * http://www.cs.csi.cuny.edu/~zelikovi/csc326/data/assignment5.htm
 */

#include <iostream>
#include "Stack.h"

using namespace std;

// Function to do the postfix calculation
int EvaluatePostfix(string postfix) {
  Stack stack;
  int result;

  for(int i = 0; i < postfix.length(); i++) { // Remove spaces from string
    if(postfix[i] == ' ') {
      postfix.erase(i,1);
    }
}

  // Main postfix evaluation loop
  for(int i = 0; i < postfix.length(); i++) {
    if(isdigit(postfix[i])) { // If we see a digit
      int operand = postfix[i] - '0'; // ASCII to integer conversion
      stack.push(operand);
    }

    else { // If we see an operator
      char op = postfix[i];
      int num2 = stack.pop();
      int num1 = stack.pop();

      switch(op) {
        case '+': result = num1 + num2; stack.push(result); break;
        case '-': result = num1 - num2; stack.push(result); break;
        case '*': result = num1 * num2; stack.push(result); break;
        case '/': result = num1 / num2; stack.push(result); break;
      }
    }
  }

  return stack.top();
}

// Main loop
int main() {
  while(true) {
    string postfix;
    Stack stack; // Not sure why this line is here but if I take it out I get
                 // seg faults...warrants further investigation

    cout << "Enter expression to evaluate or q to quit\n-> ";
    getline(cin, postfix); // User input

    if(postfix == "Q" || postfix == "q" || postfix == "quit" || postfix == "Quit") { // Termination
      exit(-1);
    }

    cout << "Your expression evaluates to " << EvaluatePostfix(postfix) << endl; // Evaluate and inform user
  }

  return 0;
}

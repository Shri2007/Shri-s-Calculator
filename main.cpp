#include <iostream>
using namespace std;

int main() {
  char op;
  float num1,num2;

  cout << "Enter which operation, + or - or * or /: ";
  cin >> op;
  cout << "Enter two operations!: ";
  cin >> num1 >>num2;

  switch(op){
    case '+':
    cout << num1 + num2;
    break;
    case '-':
    cout << num1-num2;
    break;
    case '*':
    cout << num1 * num2;
    break;
    case '/':
    cout << num1 / num2;
    break;
    default:
    cout << "Invalid input!";
    break;

  }
  return 0;
}
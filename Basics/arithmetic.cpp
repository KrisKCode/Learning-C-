#include <iostream>
using namespace std;

int main(){

  int a = 8 , b = 4;

  cout << "Addition result: " << (a + b) << endl;
  cout << "Subtraction result: " << (a - b) << endl;
  cout << "Multiple result: " << (a * b) << endl;
  cout << "Devision result: " << (a / b) << endl;
  cout << "Modulus result: " << (a % b) << endl;

  cout << "Postfix increment: " << a++ << endl;
  cout << "Postfix result: " << a << endl;
  cout << "Postfix increment: " << ++b << endl;
  cout << "Postfix result: " << b << endl;

  return 0;
}

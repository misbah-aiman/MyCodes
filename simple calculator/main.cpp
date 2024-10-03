#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char op;
    cout << "Enter first number: " ;
    cin >> a;
    cout << "Enter second number: " ;
    cin >> b;
    cout << "Enter operator: " ;
    cin >> op;
    switch(op)
    {
    case'+':
        cout << "result= " << a+b <<endl;
        break;
    case'-':
        cout << "result= " << a-b <<endl;
        break;
    case'*':
        cout << "result= " << a*b <<endl;
        break;
    case'/':
        cout << "result= " << a/b <<endl;
        break;
    default:
        cout << "invalid input" <<endl;
    }
    return 0;
}

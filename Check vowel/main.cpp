#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter the alphabet in small case letter: " ;
    cin >> alphabet;
    switch(alphabet)
    {
    case 'a':
        cout << "you have entered a vowel letter." <<endl;
        break;
    case 'e':
        cout << "you have entered a vowel letter." <<endl;
        break;
    case 'i':
        cout << "you have entered a vowel letter." <<endl;
        break;
    case 'o':
        cout << "you have entered a vowel letter." <<endl;
        break;
    case 'u':
        cout << "you have entered a vowel letter." <<endl;
        break;
    default:
        cout << "you have entered a consonant." <<endl;
    }
    return 0;
}

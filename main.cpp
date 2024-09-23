#include <iostream>
using namespace std;
int main()
{
	int num1=1, num2=1, n, sum=0;
	cout << "Enter the number: " ;
	cin >> n ;
	while (sum<=n)
	{
		sum = num1+num2;
		cout << num1 << "+" << num2 << "=" << sum <<endl;
		num1=num2 ;
		num2=sum;
	}
	return 0;
}

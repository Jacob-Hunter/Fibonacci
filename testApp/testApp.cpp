#include <iostream>
#include <fib/Fibonacci.h>

using namespace std;

int main()
{
    setKeyLength(26);
    cout << getFibVal(15) << endl;
    cout << "Enter a any character to close the program: ";

    char c;
    cin >> c;
}

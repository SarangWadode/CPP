//code for sum of n natural numbers
#include <iostream>

using namespace std;

int main(void)
{
    int num, sumofNums = 0;
    cout << "Enter number :-" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sumofNums += i;
    }
    cout << "Sum of first n natural numbers = " << sumofNums;
}
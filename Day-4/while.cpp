#include <iostream>
using namespace std;
int main()
{
    //while loop
    int num = 1; //loop control variable
    //to display first 10natural numbers
    while (num <= 10)
    {
        cout << num << endl;
        num++;
    }
    cout << "condition reached and current value of num is " << num;
    return 0;
}
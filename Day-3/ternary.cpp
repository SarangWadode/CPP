#include <iostream>
using namespace std;
int main()
{
    int a, b, max;
    a = 2;
    b = 5;
    //  if (a>b){
    //      max=a;
    //  }
    //  else {
    //      max=b;
    //  }

    //ternary operator
    //<variable to be used>= {condition} ? <true-block>:<false-block>
    max = (a > b) ? a : b;
    cout << max;
    return 0;
}
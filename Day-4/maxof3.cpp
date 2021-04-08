#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    //Not very readable
    //  if (a>b && a>c){
    //      max=a;
    //  }
    // else if (b>c) {
    //     max=b;
    // }
    //  else {
    //      max=c;
    //  }

    //ternary operator
    //<variable to be used>= {condition} ? <true-block>:<false-block>
    max = (a > b && a > c) ? a : ((b > c) ? b : c);
    cout << max;
    return 0;
}
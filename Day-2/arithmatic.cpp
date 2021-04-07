#include <iostream>

using namespace std;

int main(void)
{
    int m = 4, n = 8;

    //adiition
    int sum = m + n;

    //sizeof()
    cout << "size of sum in bytes =" << sizeof(sum) << endl;

    /*
        * int = 4bytes.
        * 1 byte = 8 bits.
        * size in bits = 32-1
        * -2^31 -> 2^31 -1
    */

    unsigned int myInt = 1; // 0 <-> 2^32 -1
    cout << "Size of myInt= " << sizeof(sum) << "B" << endl;
    // cout << "Sum: " << sum << endl; //endl = end line
    // cout << "diff: " << diff << endl; //endl = end line
    // cout << "remainder: " << remainder << endl; //endl = end line
    // cout << "product: " << product << endl; //endl = end line

    unsigned long int myLong = 10;
    cout << "Size of myLong= " << sizeof(myLong) << "B" << endl;
    return 0;
}
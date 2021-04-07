/*
0-woah
1-pirate
2-Oh,simple hoomsn 
3-Alien
4- Out of Syllabus
5-oh please
*/

#include <iostream>

using namespace std;

int main(void)
{

    int eyes;
    cout << "how many eyes do we have?";
    cin >> eyes;

    //escape sequence \b,\v,\t,\a
    // if (eyes == 0)
    // {
    //     cout << "woah!\n\a";
    // }
    // else if (eyes == 1)
    // {
    //     cout << "pirate\n";
    // }
    // else
    // {
    //     cout << "Bye";
    // }

    switch (eyes)
    {
    case 0:
        cout << "woah" << endl;
        break;
    case 1:
        cout << "pirate" << endl;
        break;
    default:
        cout << "out of syllabus";
    }

    return 0;
}
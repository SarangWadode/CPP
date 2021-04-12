#include <bits/stdc++.h>

using namespace std;

//define a function to make animal talk
void plistalk(string lang[], string animals[], int index)
{
    cout << animals[index] << " says " << lang[index];
}

int main(void)
{
    string animals[] = {"Dog", "Cat", "Cow"};
    float heights[] = {50.5, 20.3, 230.3};
    string lang[] = {"bhow", "Meow", "Moooooo"};

    //make cow talk
    plistalk(lang, animals, 2);
}
#include <bits/stdc++.h>

using namespace std;

//class define
class animal //user defined datatype
{
public:
    //define attributes
    string name;
    float height;
    string lang;

    animal() //default constructor
    {
        name = "human";
        height = 5000;
        lang = "marathi";
        cout << "Animal is born" << endl;
    }

    animal(string name, float height, string lang) //parametrised contructor
    {
        this->name = name;
        this->height = height;
        this->lang = lang;
    }

    void plstalk()
    {
        cout << "I speak " << this->lang << endl;
    }
};

int main(void)
{
    animal a;
    animal b("Cat", 30.4, "Meow");

    cout << "hello from " << a.name << " I can speak " << a.lang << endl;
    cout << "hello from " << b.name << " I can speak " << b.lang << endl;

    b.plstalk(); // b.lang
    return 0;
}
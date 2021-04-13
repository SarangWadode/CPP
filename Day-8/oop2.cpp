#include <bits/stdc++.h>

using namespace std;

//class define
class animal //user defined datatype
{
private:
    string dream;

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
        dream = "coder";
        cout << "Animal is born" << endl;
    }

    animal(string name, float height, string lang, string dream) //parametrised contructor
    {
        this->name = name;
        this->height = height;
        this->lang = lang;
        this->dream = dream;
    }

    void plstalk()
    {
        cout << "I speak " << this->lang << endl;
    }
};

int main(void)
{
    animal a;
    animal b("Cat", 30.4, "Meow", "fish");

    cout << "hello from " << a.name << " I can speak " << a.lang << endl;
    cout << "hello from " << b.name << " I can speak " << b.lang << endl;
    //you can't access the private content so dream will not be displayed
    cout << "hello from " << b.name << " I can speak " << b.lang << " dream is " << b.dream << endl;

    b.plstalk(); // b.lang
    return 0;
}
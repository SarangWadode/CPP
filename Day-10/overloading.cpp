#include <bits/stdc++.h>

using namespace std;

class Phone
{
public:
    virtual void call() //with the help of virtual call() will not be restricted in smartphone
    {
        cout << "Phone can call " << endl;
    }
    void message()
    {
        cout << "Phone can message" << endl;
    }
};

class SmartPhone : public Phone
{
public:
    void call()
    {
        cout << "SmartPhone can call " << endl;
    }
    void camera()
    {
        cout << "Can click photos" << endl;
    }
    void slmedia()
    {
        cout << "Can use social media" << endl;
    }
};

int main(void)
{
    Phone nokia;
    nokia.call();
    nokia.message();

    SmartPhone samsung;
    samsung.call();
    samsung.slmedia();

    //to restrict smartphone from using methods of it's own class
    Phone *phone_ptr; //pointer on base class
    phone_ptr = new SmartPhone();
    phone_ptr->call();
    phone_ptr->message();
    return 0;
}
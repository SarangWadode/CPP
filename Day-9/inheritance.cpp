#include <bits/stdc++.h>

using namespace std;

//Getter and setter

//parent class
class NetflixCore
{
    //access specifiers
private:
    string pvtContent;

protected:
    string prtContent; //main function can not acces this but child class acces the content

public:
    string location;
    static string content;
    float policies;

    NetflixCore()
    { //default
        // this->content = "No content";
        this->location = "Global";
        this->policies = 140.6;
    }

    NetflixCore(string content, string location, float policies)
    {
        // this->content = content;
        this->location = location;
        this->policies = policies;
    }

    void stream()
    {
        cout << "I am streaming " << this->content << endl;
    }

    string get_pvtContent() //getter
    {
        return this->pvtContent;
    }

    void set_pvtContent(string newValue) //setter
    {
        this->pvtContent = newValue;
    }
};

//inherited(child) class
class NetflixIndia : public NetflixCore
{
public:
    int code;

    NetflixIndia(string content, string location, float policies, int code) : NetflixCore(content, location, policies)
    {
        this->code = code;
    }
    void acsprt()
    {
        this->prtContent = "This is a protected content.";
        cout << this->prtContent << endl;
    }

    // function overloading
    void stream()
    {
        cout << "I am from " << this->location << endl;
    }
};

//initilization
string NetflixCore::content = " ";

int main(void)
{
    NetflixCore sa("Money Heist", "India", 232.5);
    sa.stream();
    sa.set_pvtContent("Ben 10");
    cout << sa.get_pvtContent() << endl;
    sa.content = "Falcon and the Winter Soldier";
    cout << sa.content << endl;

    NetflixIndia ni("scam 1993", "India", 121.4, 1);
    //polymorphism
    ni.stream();
    ni.acsprt();
    cout << ni.content << endl;
    return 0;
}
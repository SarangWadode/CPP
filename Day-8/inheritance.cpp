#include <bits/stdc++.h>

using namespace std;

class ape
{
public:
    string name;
    float height;
    bool havetail;

    ape(string name, float height, bool havetail = true)
    {
        this->name = name;
        this->height = height;
    }

    //defiening a function outside the classs
    void snacks(){};
};

void ape::snacks()
{
    cout << "I had a banana in snacks taday" << endl;
}

class human : public ape
{
public:
    int IQ;
    human(int IQ, string name, float height, bool havetail = false) : ape(name, height)
    {
        this->IQ;
    }
};

int main()
{
    return 0;
}
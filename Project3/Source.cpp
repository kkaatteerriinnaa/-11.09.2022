#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
};

class Car
{
    char* name;
    int patroll;
public:
    Car()
    {
        name = nullptr;
        patroll = 0;
    }
    ~Car()
    {
        delete[]name;
    }
    void Print()
    {
        cout << "Name: " << name << "\nPatroll: " << patroll << endl;
    }
    void Init()
    {
        char buff[20];
        cout << "Enter name - > ";
        cin >> buff;
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(buff) + 1];
        strcpy_s(name, strlen(buff) + 1, buff);
        cout << "Enter patroll -> ";
        cin >> patroll;
    }
};

int main()
{

}
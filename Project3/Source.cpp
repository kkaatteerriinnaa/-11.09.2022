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
};

int main()
{

}
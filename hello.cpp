#include <iostream>
#include <vector>
#include <string>
#include "hello.h"

using namespace std;



int main()
{
    Box box1;
    Box box2;
    Box box3;

    box1.height = 10;
    box1.breadth = 2;
    box1.length = 1.1;

    box2.height = 10;
    box2.breadth = 1;
    box2.length = 2.1;

    cout << box1.getVolume() << endl;
    cout << box2.getVolume() << endl;
    cout << box1.compare(box2) << endl;
}

double Box::getVolume(){
    return length * breadth * height;
}
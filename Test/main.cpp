//
//  main.cpp
//  Test
//
//  Created by Kevyn Bele-Binda on 15-12-27.
//  Copyright © 2015 Kevyn Bele-Binda. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;

class MITStudent {
public:
    char *name;
    int studentID;
};
class Point {
public:
    double x;
    double y;
};
class Vector {
public:
    Point start, end;
};
void printVector(Vector v)
{
    cout << "(" << v.start.x << "," << v.start.y << ") -> (" << v.end.x <<
    "," << v.end.y << ")" << endl;
}
void offsetVector(Vector &v, double offsetX, double offsetY) {
    v.start.x += offsetX;
    v.end.x += offsetX;
    v.start.y += offsetY;
    v.end.y += offsetY;
}
double xStart = 1.2;
double xEnd = 2.0;
double yStart = 0.4;
double yEnd = 1.6;

int main() {
    Vector vec1;
    vec1.start.x = 3.0;
    vec1.start.y = 4.0;
    vec1.end.x = 5.0;
    vec1.end.y = 6.0;
    Vector vec2;
    vec2.start = vec1.start;
    vec2.end = vec1.end;
    
    MITStudent student1;
    MITStudent student2;
    student1.name = "Geza";
    student1.studentID = 123456789;
    student2.name = "Jesse";
    student2.studentID = 987654321;
    cout << "First student name is " << student1.name << endl;
    cout << "First student id is " << "[" << student1.studentID << "]" << endl;
    cout << "Second student name is " << student2.name << endl;
    cout << "Second id is " << "[" << student2.studentID << "]" << endl;
    char messyString[] = "t6H0I9s6.iS.999a9.STRING";
    char current = messyString[0];
    for(int i = 0; current != '\0'; current = messyString[++i]) {
        if(isalpha(current))
            cout << (char)(isupper(current) ? tolower(current) : current);
        else if(ispunct(current))
            cout << ' ';
    }
    if ( current == '\0')
        cout << "\n" ;
    offsetVector(vec1, 1.0, 1.5);
    printVector(vec1);
    
    cout << endl;
    return 0;
}

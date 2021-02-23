/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include<stdio.h>
#include<sstream>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string stringLength;
    string stringWidth;
    float length = 0;
    float width = 0;  

    cout << "Enter the length of room" << endl;
    getline(cin, stringLength);
    stringstream(stringLength) >> length;
    cout << "Enter the width of room" << endl;
    getline(cin, stringWidth);
    stringstream(stringWidth) >> width;
    float area = length * width;
    cout << "Area of the room is :- " << area << endl;

    return 0;
}
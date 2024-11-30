/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <sstream>

using namespace std;
int main() {
    cout << "We will calculate the area of your room\n";
    float length = 0, width;
    string sLength = "", sWidth;
    
    cout << "Please enter the length of your room:\n";
    getline(cin, sLength);
    stringstream(sLength) >> length;
    cout << "Please enter the width of your room:\n";
    getline(cin, sWidth);
    stringstream(sWidth) >> width;
    float area = width*length;
    cout << "The area of your room is : " << area << endl;
    
    return 0;
}

/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


vector<string> split(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main() {
    vector<string> commaSeperatedUserInut;
    cout << "Please enter the following using the same format name,address,and phoneNumber.";
    for (int i = 0; i < 2; i++) {
        string inputValue;
        getline(cin, inputValue);
        commaSeperatedUserInut.push_back(inputValue);
    }
    std::vector<std::vector<std::string> > userInputVectors;
    userInputVectors.push_back(split(commaSeperatedUserInut.front(), ", "));
    userInputVectors.push_back(split(commaSeperatedUserInut.back(), ", "));
    
    for (vector<string> inputVector : userInputVectors) {
        for (int i = 0; i < inputVector.size(); i++) {
            if (i == 0) {
                cout<<inputVector[i]<<"\n";
            } else {
                cout<<"\t"<<"\t"<<inputVector[i]<<"\n";
            }
        }
    }
    
    return 1;
}

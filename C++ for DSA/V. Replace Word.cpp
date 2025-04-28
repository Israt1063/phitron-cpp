#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline(cin, s); 

    // Replace all occurrences of "EGYPT" with " "
    while (s.find("EGYPT") != string::npos) {  //string::npos = not found
        s.replace(s.find("EGYPT"), 5, " ");
    }
    //s = regex_replace(s, regex("EGYPT"), " "); // Replace all "EGYPT" with a space
    cout << s << endl; 

    return 0;
}
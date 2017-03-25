#include <iostream> 
#include <fstream>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
    list<string> lst;
    string line;
    while (getline(cin, line)) {
        if (line == "EOF")
            break;
        lst.push_back(line);
    } 
    string searchLine;
    cout << "Enter a word which you want to search:" << endl;
    getline(cin, searchLine);

    cout << count(lst.begin(), lst.end(), searchLine) << endl;
    return 0;
}
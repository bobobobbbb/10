#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(int argc, char * argv[]) {
    ifstream ifile(argv[1]);
    vector<int> ivec;
    if (!ifile) {
        cerr << "Open file failed" << endl;
        exit(1);
    }
    int temp;
    while (ifile >> temp) {
        ivec.push_back(temp);
    }
    int val;
    cout << "Enter a value you want to count for: " << endl;
    cin >> val;

    cout << "There are: " << count(ivec.begin(), ivec.end(), val) 
         << endl;
    return 0;
}
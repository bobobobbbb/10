#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int main(void) {
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }
    
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;
    return 0;
}
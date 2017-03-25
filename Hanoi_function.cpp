#include <iostream>
using namespace std;

void moveSingleDisk(char start, char end) {
    cout << start << "<-" << end;
}
void MoveTower(int n, char start, char finish, char temp) {
    if (n == 1) {
        moveSingleDisk(start, finish);
    } else {
        MoveTower(n - 1, start, temp, finish);
        moveSingleDisk(start, finish);
        MoveTower(n - 1, temp, finish, start);
    }
}
int main(void) {

}

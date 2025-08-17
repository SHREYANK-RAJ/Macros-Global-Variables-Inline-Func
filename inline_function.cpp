#include <iostream>
using namespace std;
inline int getMax(int &x, int &y) {
    // returns the larger value between x and y
    return (x > y) ? x : y;
}
int main() {
    int a = 1, b = 2;

    int ans = getMax(a, b);
    cout << "Max : " << ans << endl;
    a += 3;  // a becomes 4
    b += 1;  // b becomes 3
    ans = getMax(a, b);
    cout << "Max : " << ans << endl;
    return 0;
}

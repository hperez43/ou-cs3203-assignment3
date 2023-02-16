#include <iostream>
using namespace std;

int product(int num[]) {
    int p = 1;
    for (int i = 0; i < 4; i++) {
        p = p*num[i];
    }
    return p;
}

int main() {
    int sum = 0;
    int num[] = {23, 78,4, 19};

    for (int i = 0; i < 4; i ++) {
        sum = sum+num[i];
    }
    cout << "sum: " << sum << endl;

    int p = product(num);
    cout << "product: " << p << endl;

    return 0;
}

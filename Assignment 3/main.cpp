#include <iostream>
using namespace std;

// Computes sum of array
int addition(int *num) {
    int sum = 0;
    for (int i = 0; i < 4; i ++)
        sum = sum+num[i];
    return sum;

}
int product(int *num) {
    int p = 1;
    for (int i = 0; i < 4; i++)
        p = p*num[i];
    return p;
}

int main() {

    //Set up
    int num[] = {23, 78,4, 19};
    int sum = addition(num);
    int p = product(num);

    //Results
    cout << "sum: " << sum << endl;
    cout << "product: " << p << endl;


    cout << "------------------\n" << endl;
    return 0;
}

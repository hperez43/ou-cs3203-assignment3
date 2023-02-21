#include <iostream>
using namespace std;

// Computes sum of array
int addition(int *num) {
    int sum = 0;
    for (int i = 0; i < 4; i ++)
        sum = sum+num[i];
    return sum;

}
// Computes product of array
int product(int *num) {
    int p = 1;
    for (int i = 0; i < 4; i++)
        p = p*num[i];
    return p;
}

// Reverse array
void reverse(int *num) {
    int *rev = new int[4];
    int i = 0;
    for (int n = 3; n > -1; n--) {
        rev[n] = num[i];
        i++;
    }

    cout << "reversed: {" <<  rev[0];
    for (int i = 1; i < 4; i++)
        cout << ", " << rev[i];
    cout << "}" << endl;
    return;
}

int main() {

    //Set up
    int num[] = {23, 78,4, 19};     //Part 10
    int sum = addition(num);
    int p = product(num);

    //Array
    cout << "array: {" << num[0];
    for (int i = 1; i < 4; i++)
        cout << ", " << num[i];
    cout << "}\n----------------------" << endl;

    //Results
    cout << "sum: " << sum << endl;
    cout << "product: " << p << endl;
    reverse(num);



    return 0;
}

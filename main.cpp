#include <iostream>

int main() {
    int sum = 0;
    int num[] = {23, 78,4, 19};

    for (int i = 0; i < sizeof(num); i ++) {
        sum = sum+i;
    }
    std:: cout << "sum: " << sum << std:: endl;
    return 0;
}

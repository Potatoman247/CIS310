#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << "Adding integers: " << add<int>(64, 13) << endl;
    cout << "Adding doubles: " << add<double>(64, 13) << endl;
    cout << "Multiplying integers: " << multiply{double)(889.520321, 6.21653) << endl;
    cout << "multiplying doubles: " << multiply<double>(889.520321, 6.21653) << endl;
    cout << "multiplying floats: " << multiply<float>(889.520321, 6.21653) << endl;
    cout << "Adding typically unsupported types: " << add<char>(P, '/') << endl;
    cout << "multiplying typically unsupported types: " << multiply<char>('A', '5') << endl;

    return 0;
}

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rdevice{};
    default_random_engine num{ rdevice() };
    uniform_int_distribution<unsigned int> randomRealNum{ 10, 100 };

    for (unsigned int count = 1; count <= 25; count++) {
        cout << randomRealNum(num) << " ";
    }
    cout << endl;
    return 0;
}

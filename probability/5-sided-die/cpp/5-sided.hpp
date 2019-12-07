#include <iostream>
#include <random>

using namespace std;

int rand7()
{
    static random_device rd;
    static mt19937 g(rd());
    static uniform_int_distribution<int> d(1, 7);
    return d(g);
}

int rand5()
{
    // implement rand5() using rand7()
    

    return 0;
}

#include <iostream>
#include <random>

using namespace std;

int rand5()
{
    static random_device rd;
    static mt19937 g(rd());
    static uniform_int_distribution<int> d(1, 5);
    return d(g);
}

int rand7()
{
    // implement rand7() using rand5()
    

    return 0;
}

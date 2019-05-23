// address.cpp -- using the & operator to find addresses

#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups;

    cin.get();
    return 0;
}
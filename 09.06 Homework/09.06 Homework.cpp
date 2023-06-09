#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Task 1
    int a;
    cout << "Type a number: ";
    cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "Sum is equal to: " << sum << "\n";


    //Task 2
    int x, y;
    cout << "Type x number: ";
    cin >> x;

    cout << "Type y number: ";
    cin >> y;

    double result = pow(x, y);
    cout << result << "\n";


    //Task 3
    float summa = 0;
    for (int i = 1; i <= 1000; i++) {
        summa += i;
    }
    double arithmetic_mean = summa / 1000;
    cout << "The arithmetic mean is: " << arithmetic_mean << "\n";


    //Task 4
    int num;
    cout << "Type a number: ";
    cin >> num;

    long long int product = 1;
    for (int i = num; i <= 20; ++i) {
        product *= i;
    }

    cout << "Product is equal to: " << product << "\n";


    //Task 5
    int k;
    cout << "Type a number: ";
    cin >> k;

    for (int i = 1; i <= 10; ++i) {
        int res = k * i;
        cout << k << " * " << i << " = " << res << "\n";
    }

    return 0;
}


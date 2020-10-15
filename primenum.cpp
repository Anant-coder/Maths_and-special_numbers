#include <iostream>

using namespace std;

int prime(int num)
{
    int b = 0;
    for (int i = 1; i <= num; i++)
    {
        b += num % i ? 0 : 1;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    cout << "Number is " << (prime(num) == 2 ? "prime" : "not prime");
    return 0;
}

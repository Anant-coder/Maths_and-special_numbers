#include <iostream>
#include <math.h>

using namespace std;

int armstrong(int num)
{
    int a = num, length = 0, sum = 0;
    // Number digits
    while (a != 0)
    {
        a /= 10;
        length++;
    }
    // Find armstrong
    for (int i = 0; i < length; i++)
    {
        sum += pow(num % 10, length);
        num /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int num2 = armstrong(num);
    cout << "Number is " << (num == num2 ? "armstrong" : "not armstrong");
    return 0;
}

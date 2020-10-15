#include <iostream>
#include <math.h>

// Happy number
/*
Number whose digits when squared and add up again and again result in 1 
*/
using namespace std;

void happycheck(int num);

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number > ";
    cin >> num;
    happycheck(num);
    return 0;
}

void happycheck(int num)
{
    int sum = 0, a = num, length = 0;
    // Digits count
    while (a != 0)
    {
        a /= 10;
        length++;
    }
    // Calculating squared sum  
    for (int i = 0; i < length; i++)
    {
        sum += pow(num % 10, 2);
        num /= 10;
    }

    if (sum != 1 && sum < 10)
        cout << "Number is not happy number :( ";
    else if (sum == 1)
        cout << "Number is a happy number :) ";
    else
        happycheck(sum);
}

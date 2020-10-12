#include <iostream>
// Palindrome
using namespace std;

int palindrome(int num)
{
    int a = num, length = 0, c = 0;
    // Digit count
    while (a != 0)
    {
        a /= 10;
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        c = (c += num % 10)*10;
        num /= 10;
    }
    
    return c / 10;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int num2 = palindrome(num);
    if (num2 == num)
        cout << num2 << " is palindrome";
    else
        cout << num2 << " is not palindrome";
    return 0;
}
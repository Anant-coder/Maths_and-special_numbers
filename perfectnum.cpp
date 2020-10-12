#include <iostream>

using namespace std;

int perfect(int num)
{
    int sum = 0;
    for (int i = 1;i < num;i++)
    {
        sum  += (num % i)?0:i; 
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int num2 = perfect(num);
    if (num2 == num) cout <<num << " is perfect number" ;
    else cout << num << " is not perfect number";
    return 0;
}

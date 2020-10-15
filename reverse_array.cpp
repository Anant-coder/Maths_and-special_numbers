#include <iostream>

using namespace std;

void reverse(int *list,int size)
{
    int temp;
    
    int l = (size % 2)?(size-1)/2:size/2;

    for (int i = 0; i < l; i++)
    {
        temp = *(list+i);
        *(list+i) = *(list+size-i-1);
        *(list+size-i-1) = temp;
    }
}

int main(int argc,char const *argv[])
{
    int list[] = {1,2,3,4,5,5,35};

    int size = sizeof(list)/sizeof(list[0]);

    cout << "Before reversal"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << "-> "<< list[i]<<endl;
    }

    cout << '\n';

    reverse(list,size);

    cout << "After reversal"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << "-> "<< list[i]<<endl; 
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int num;
int power;
int result = 1;

int main()
{
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter a power : ";
    cin>>power;

    for(int i =0; i<power; i++)
    {
        result=result*num;
    }
    cout<<"The exponent is : "<<result<<endl;
    return 0;
}

// Online C++ compiler to run C++ program online

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    
    int m;
    cout<<"Введите номер месяца"<<endl;
    cin>>m;
    if (m>12)
    cout<<"Это не номер месяца"<<endl;
    else if (m<3 or m>11)
    cout<<"Зима"<<endl;
    else if (m<6)
    cout<<"Весна"<<endl;
    else if (m<9)
    cout<<"Лето"<<endl;
    else if (m<12) 
    cout<<"Осень"<<endl;

    return 0;
}

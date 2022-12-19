#include<iostream>
    using namespace std;
int main()
{
    int a;

    cout<<"enter a year"<<endl;
    cin>>a;
    if(a%4==0 || a%400==0){
        cout<<"This year is a leap year";
    }
    else{
        if(a%1==0 || a%100==0){
            cout<<"This year is not a leap year";
        }
    }
    return 0;
}
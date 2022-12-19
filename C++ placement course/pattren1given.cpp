#include<iostream>
    using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter roes and columns number";
    cin>>rows>>columns;
    cout<<endl;
   for(int i = 1;i<=rows;++i){
    for(int j = 1;j<=columns;++j){
         cout<<"*";
    }
    cout<<endl;
   }
    return 0;
}
#include<iostream>
    using namespace std;
int main()
{
    int rows = 5;
    int columns = 4;
    for(int i = 1;i<=rows;++i){
        
        for(int j = 1;j<=columns;++j){
            cout<<"*";
        }
         cout<<endl;
    }
   
    return 0;
}
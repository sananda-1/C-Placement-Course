#include<iostream>
    using namespace std;
int main()
{
    int rows;
    
    cout<<"enter your choice for make a reverse half pyramid";
    cin>>rows;
    cout<<endl;
    for(int i =rows;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        
        }
        cout<<endl;
    }
    return 0;
}

//  THIS PROGRAM OUTPUT WILL BE
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
//REVERSE HALF PYRAMID
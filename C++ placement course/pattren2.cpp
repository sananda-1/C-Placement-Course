#include<iostream>
    using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter your choice for rows and columns";
    cin>>rows>>columns;
    cout<<endl;
    for(int i =1;i<=rows;++i){
        for(int j =1;j<=columns;++j){
            if(i==1 || i==5){
                cout<<"*";
            }
            else if(j==1 || j==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
 
    return 0;
}

//THE OUTPUT    
//* * * *
//*     *
//*     *
//*     *
//* * * *
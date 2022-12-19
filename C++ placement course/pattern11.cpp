#include<iostream>
    using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<i-1;
        }
        cout<<endl;
    }
    
    return 0;
}
//THIS PROGRAM OUT PUT WILL BE THIS
//0
//11
//222
//3333
//44444
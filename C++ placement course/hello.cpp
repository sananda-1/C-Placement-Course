#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    // int savings;
    // cin>>savings;
    // if(savings>5000){
    //     cout<<"Shopping\n";
    //         if(savings>100000){
    //             cout<<"For pujo";

    //         }
    //         else{
    //             cout<<"For college";
    //         }
    // }
    // else if(savings>2000){
    //     cout<<"Fooding";
    // }
    // else
    // {
    //     cout<<"In house\n";
    // }
 

        int a = 2, b = 7, c = 4;
        if(a>b){
            if(a>c){
                cout<<a;
            }
            else{
                cout<<c;
            }
        }
        else{
            if(b>c){
                cout<<b;
            }
            else{
                cout<<c;
            }
        }




    return 0;
}
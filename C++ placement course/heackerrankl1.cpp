// #include<iostream>
//     using namespace std;
// int main()
// {
//     int a=2,b=7,c=1;
//     cout<<a+b+c;
//     return 0;
// }

//PRINT IF N=8 THEN PRINT EIGHT AND SO ON NINE AND IF ITS GREATER THAN 9 LIKE 10,33,44 THEN ITS PRINT GREATER THAN 9

#include<iostream>
    using namespace std;
int main()
{
    int n;
    cin>>n;
   // cin.ingnore(numeric_limits<streamsize>::max(),'\n');
    string arr[9] ={"one","two","three","four","five","six","seven","eight","nine"};
    if(n>=1 && n<=9){
cout<<arr[n-1]<<endl;
    }
    else{
        cout<<"Greater than 9"<<endl;
    }
    
    return 0;
}
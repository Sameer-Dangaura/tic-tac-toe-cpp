#include<iostream>
using namespace std;

int main(){
    int a[3][3], m, n;

    cout<<"enter the index values:\n";
    cin>>m>>n;
    a[m][n] = 1;

    cout<<"enter second index values:\n";
    cin>>m>>n;
    a[m][n] = 1;
    
    cout<<"enter third index values:\n";
    cin>>m>>n;
    a[m][n] = 1;


    if(((a[0][0] == a[0][1])&&(a[0][0] == a[0][2]))|| 
       ((a[0][0] == a[1][0])&&(a[0][0] == a[2][0]))||
       ((a[0][0] == a[1][1])&&(a[0][0] == a[2][2]))||
       ((a[0][1] == a[1][1])&&(a[0][1] == a[2][1]))||
       ((a[0][2] == a[1][2])&&(a[0][2] == a[2][2]))||
       ((a[0][2] == a[1][1])&&(a[0][2] == a[2][0]))||
       ((a[1][0] == a[1][1])&&(a[1][0] == a[1][2]))||
       ((a[2][0] == a[2][1])&&(a[2][0] == a[2][2]))
    )
    {
        cout<<"hey, it's matched. :)\n";
    }
    else 
    {
        cout<<"Sorry, it dosen't match. :(\n";
    }
    return 0;
}
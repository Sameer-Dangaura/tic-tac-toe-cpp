#include<iostream>
using namespace std;

bool isempty(char a[][3]){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j] == ' '){  
                return true;
            }
        }
    }
    return false;
}

void display(char a[][3]){
    cout<<"-------\n";
    for(int i=0; i<3; i++){
        cout<<"|"<<a[i][0]<<"|"<<a[i][1]<<"|"<<a[i][2]<<"|\n";
        cout<<"-------\n";
    }
}

void turnA(char& win, char a[][3]){
    int m, n;
    cout<<"Turn A\n";
    cin>>m>>n;
    
    a[m][n] = 'O';

    display(a);

    if(((a[0][0] == 'O') && (a[0][1] == 'O') && (a[0][2] == 'O'))|| 
       ((a[0][0] == 'O') && (a[1][0] == 'O') && (a[2][0] == 'O'))||
       ((a[0][0] == 'O') && (a[1][1] == 'O') && (a[2][2] == 'O'))||
       ((a[0][1] == 'O') && (a[1][1] == 'O') && (a[2][1] == 'O'))||
       ((a[0][2] == 'O') && (a[1][2] == 'O') && (a[2][2] == 'O'))||
       ((a[0][2] == 'O') && (a[1][1] == 'O') && (a[2][0] == 'O'))||
       ((a[1][0] == 'O') && (a[1][1] == 'O') && (a[1][2] == 'O'))||
       ((a[2][0] == 'O') && (a[2][1] == 'O') && (a[2][2] == 'O'))
    )
    {
        win = 'A';
    }
}

void turnB(char& win, char a[][3]){
    int m, n;
    cout<<"Turn B\n";
    cin>>m>>n;

    a[m][n] = 'X';

    display(a);

    if(((a[0][0] == 'X') && (a[0][1] == 'X') && (a[0][2] == 'X'))|| 
       ((a[0][0] == 'X') && (a[1][0] == 'X') && (a[2][0] == 'X'))||
       ((a[0][0] == 'X') && (a[1][1] == 'X') && (a[2][2] == 'X'))||
       ((a[0][1] == 'X') && (a[1][1] == 'X') && (a[2][1] == 'X'))||
       ((a[0][2] == 'X') && (a[1][2] == 'X') && (a[2][2] == 'X'))||
       ((a[0][2] == 'X') && (a[1][1] == 'X') && (a[2][0] == 'X'))||
       ((a[1][0] == 'X') && (a[1][1] == 'X') && (a[1][2] == 'X'))||
       ((a[2][0] == 'X') && (a[2][1] == 'X') && (a[2][2] == 'X'))
    )
    {
        win = 'B';
    }
}

int main(){
    char a[3][3];   // a 2-D Array.
    char win = ' ';  

    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            a[i][j] = ' ';  //making array empty 
        }
    }
    
    cout<<"Welcome to Tic-Tac-Toe game\n";
    cout<<"Here,\nuser A -> O \nuser B -> X\n";

    display(a);

    while(win != 'A' && win != 'B') 
    {
        if(!isempty(a)){    //goes inside if 2-D array is not empty.
            break;
        }

        turnA(win, a);

        if(win == 'A'){
            break;
        }

        if(!isempty(a)){    //goes inside if 2-D array is not empty.
            break;
        }

        turnB(win, a);

        if(win == 'B'){
            break;
        }
    }

    if(win == 'A'){
        cout<<"A win\n";
    }
    else if(win == 'B'){
        cout<<"B win\n";
    }
    else{
        cout<<"Tie\n";
    }
    return 0;
}

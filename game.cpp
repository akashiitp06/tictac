#include<bits/stdc++.h>
using namespace std;
void TicTacToe_1();
void TicTacToe_2();

void TicTacToe_1(){
    cout<<"Player 1: Fill 'X' at his choosen position"<<endl;
    cout<<"Player 2: Fill 'O' at his choosen position"<<endl;
    char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<5;i++){
        cout<<"-----Player1 Move-----"<<endl;
        char player1;
        cin>>player1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j]==player1){
                    matrix[i][j]='X';
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
       
       int count1=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] && matrix[i][1]=='X'){
                    count1++;
                }
                else if(matrix[0][j]==matrix[1][j] && matrix[1][j]==matrix[2][j] && matrix[1][j]=='X'){
                    count1++;
                }
                else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0] && matrix[1][1]=='X'){
                    count1++;
                }
                else if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2] && matrix[1][1]=='X'){
                    count1++;
                }
            }
        }
        if(count1>0){
            cout<<"player 1: Win the game"<<endl;
            break;
        }
        if(matrix[0][0]!='1' && matrix[0][1]!='2' && matrix[0][2]!='3' && matrix[1][0]!='4' && matrix[1][1]!='5' && matrix[1][2]!='6' && matrix[2][0]!='7' && matrix[2][1]!='8' && matrix[2][2]!='9'){
            cout<<"Match draw"<<endl;
            cout<<endl;
            cout<<"Enter: 0 For play again "<<endl;
            cout<<"Enter: 1 For quit the game"<<endl;
            int num1;
            cin>>num1;
            switch(num1){
                case 0: TicTacToe_2();
                break;
                case 1: break;
            }
            break;
        }

        cout<<"-----Player2 Move-----"<<endl;
        char player2;
        cin>>player2;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j]==player2){
                    matrix[i][j]='O';
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
        int count2=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] && matrix[i][1]=='O'){
                    count2++;
                }
                else if(matrix[0][j]==matrix[1][j] && matrix[1][j]==matrix[2][j] && matrix[1][j]=='O'){
                    count2++;
                }
                else if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2] && matrix[1][1]=='O'){
                    count2++;
                }
                else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0] && matrix[1][1]=='O'){
                    count2++;
                }
            }
        }
        if(count2>0){
            cout<<"player 2: Win the game"<<endl;
            break;
        }
    }
}

void TicTacToe_2(){
    cout<<"Player 1: Fill 'O' at his choosen position"<<endl;
    cout<<"Player 2: Fill 'X' at his choosen position"<<endl;
    char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<5;i++){
        cout<<"-----Player1 Move-----"<<endl;
        char player1;
        cin>>player1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j]==player1){
                    matrix[i][j]='O';
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
       
       int count1=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] && matrix[i][1]=='O'){
                    count1++;
                }
                else if(matrix[0][j]==matrix[1][j] && matrix[1][j]==matrix[2][j] && matrix[1][j]=='O'){
                    count1++;
                }
                else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0] && matrix[1][1]=='O'){
                    count1++;
                }
                else if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2] && matrix[1][1]=='O'){
                    count1++;
                }
            }
        }
        if(count1>0){
            cout<<"player 1: Win the game"<<endl;
            break;
        }
        if(matrix[0][0]!='1' && matrix[0][1]!='2' && matrix[0][2]!='3' && matrix[1][0]!='4' && matrix[1][1]!='5' && matrix[1][2]!='6' && matrix[2][0]!='7' && matrix[2][1]!='8' && matrix[2][2]!='9'){
            cout<<"Match draw"<<endl;
            cout<<endl;
            cout<<"Enter: 0 For play again "<<endl;
            cout<<"Enter: 1 For quit the game"<<endl;
            int num2;
            cin>>num2;
            switch(num2){
                case 0: TicTacToe_1();
                break;
                case 1: break;
            }
            break;
        }

        cout<<"-----Player2 Move-----"<<endl;
        char player2;
        cin>>player2;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j]==player2){
                    matrix[i][j]='X';
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
        int count2=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] && matrix[i][1]=='X'){
                    count2++;
                }
                else if(matrix[0][j]==matrix[1][j] && matrix[1][j]==matrix[2][j] && matrix[1][j]=='X'){
                    count2++;
                }
                else if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2] && matrix[1][1]=='X'){
                    count2++;
                }
                else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0] && matrix[1][1]=='X'){
                    count2++;
                }
            }
        }
        if(count2>0){
            cout<<"player 2: Win the game"<<endl;
            break;
        }
    }
}

int main(){
    cout<<"----- Two Player Game -----"<<endl;
    cout<<"Enter 1: For Player 1: "<<endl;
    cout<<"Enter 2: For Player 2: "<<endl;
    int num;
    cin>>num;
    switch(num){
        case 1: TicTacToe_1();
        break;
        case 2: TicTacToe_2();
        break;
        default: cout<<"Enter the given digits"<<endl;
        break;
    }
    return 0;
}

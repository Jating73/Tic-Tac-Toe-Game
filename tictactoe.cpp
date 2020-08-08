#include <bits/stdc++.h>
using namespace std;
char ch[10]={'0','1','2','3','4','5','6','7','8','9'};
int i,x,player;
char mark;
void showBoard();
int checkWin();
int main() {
  player=1;
  do{
    showBoard();
    if(player%2==0)
        player=2;
    else
        player=1;
    cout<<"Player "<<player<<endl;
    cout<<"Enter your choice: ";
    cin>>x;
    if(player == 1)
      mark='X';
    else
      mark='O';
    if(x==1 && ch[x]=='1')
      ch[x]=mark;
    else if(x==2 && ch[x]=='2')
      ch[x]=mark;
    else if(x==3 && ch[x]=='3')
      ch[x]=mark;
    else if(x==4 && ch[x]=='4')
      ch[x]=mark;
    else if(x==5 && ch[x]=='5')
      ch[x]=mark;
    else if(x==6 && ch[x]=='6')
      ch[x]=mark;
    else if(x==7 && ch[x]=='7')
      ch[x]=mark;
    else if(x==8 && ch[x]=='8')
      ch[x]=mark;
    else if(x==9 && ch[x]=='9')
      ch[x]=mark;
    else{
      cout<<"Invalid Move!"<<endl;
      player--;
      system("pause");
      cin.ignore();
    }
    i=checkWin();
    player++;
  }while(i==0);
  showBoard();
  if(i==1)
  {
    cout<<"Player: "<<--player<<" Won!"<<endl;
  }
  else{
    cout<<"Draw!"<<endl;
  }
}
int checkWin(){
  if(ch[1]==ch[2] && ch[2]==ch[3])
    return 1;
  else if(ch[4]==ch[5] && ch[5]==ch[6])
    return 1;
  else if(ch[7]==ch[8] && ch[8]==ch[9])
    return 1;
  else if(ch[1]==ch[4] && ch[4]==ch[7])
    return 1;
  else if(ch[2]==ch[5] && ch[5]==ch[8])
    return 1;
  else if(ch[3]==ch[6] && ch[6]==ch[9])
    return 1;
  else if(ch[1]==ch[5] && ch[5]==ch[9])
    return 1;
  else if(ch[3]==ch[5] && ch[5]==ch[7])
    return 1;
  else
    return 0;
}
void showBoard()
{
    system("cls");
    cout<<"Tic-Tac-Toe Game"<<endl;
    cout<<endl;
    cout<<"Player 1: X Player 2: O"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<ch[1]<<"  |"<<"  "<<ch[2]<<"  |"<<"  "<<ch[3]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<ch[4]<<"  |"<<"  "<<ch[5]<<"  |"<<"  "<<ch[6]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<ch[7]<<"  |"<<"  "<<ch[8]<<"  |"<<"  "<<ch[9]<<endl;
    cout<<"     |     |     "<<endl;
}

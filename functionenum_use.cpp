#include <iostream>
#include <string>

using namespace std;

/*  enum should use inside the main funcation to get number as output 

    enum Meal{ breakfast, lunch, dinner};
    //it will concider breakfast=0,lunch=1,dinner=2;
    Meal m1 = lunch;
    cout<<(m1==2);  
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;  

*/

int main(){
    enum player{ROCK, PAPER, SCISSORS};
    string input1, input2;
    player player1, player2;
    
    cout << "Player 1, enter your choice (rock/paper/scissors): ";
    cin >> input1; //in c++ you can directlty put up string 
    cout << "Player 2, enter your choice (rock/paper/scissors): ";
    cin >> input2;
    
    // Convert string input to enum values
    if(input1 == "rock") player1 = ROCK;
    else if(input1 == "paper") player1 = PAPER;
    else if(input1 == "scissors") player1 = SCISSORS;
    else {
        cout << "Invalid choice for Player 1!" << endl;
        return 1;
    }
    
    if(input2 == "rock") player2 = ROCK;
    else if(input2 == "paper") player2 = PAPER;
    else if(input2 == "scissors") player2 = SCISSORS;
    else {
        cout << "Invalid choice for Player 2!" << endl;
        return 1;
    }
    
    if(player1 == player2){
        cout << "Draw" << endl;
    }
    else if(player1 == ROCK && player2 == SCISSORS){
        cout << "Player 1 wins" << endl;
    }
    else if(player1 == PAPER && player2 == ROCK){
        cout << "Player 1 wins" << endl;
    }
    else if(player1 == SCISSORS && player2 == PAPER){
        cout << "Player 1 wins" << endl;
    }
    else if(player2 == ROCK && player1 == SCISSORS){
        cout << "Player 2 wins" << endl;
    }
    else if(player2 == PAPER && player1 == ROCK){
        cout << "Player 2 wins" << endl;
    }
    return 0;
}

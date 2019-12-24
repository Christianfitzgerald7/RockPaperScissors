/*
Christian Fitzgerald
Project 16 - Rock, Paper, Scissors
2/26/2017
Description: Write a program to simulate rock-paper-scissors game.

Each players enters 'R', 'P', 'S' or 1, 2, 3 for Rock, Paper, Scissors.

The program then shows the winner on the basis of:
- Paper covers Rock
- Rock breaks Scissors
- Scissors cut Paper
- Tie
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int user1Num;
    int user2Num;
    cout << "Enter Rock(1), Paper(2), or Scissors(3): \n";
    cin >> user1Num;
    cin >> user2Num;
    cout << "Player 1: " << user1Num << "\n";
    cout << "Player 2: " << user2Num << "\n";
    if (user1Num == user2Num)
        cout << "Tie!";
    else if (user1Num == 1 && user2Num == 2)
        cout << "Player 2 Wins! Paper Covers Rock";
    else if (user1Num == 1 && user2Num == 3)
        cout << "You Win! Rock Breaks Scissors";
    else if (user1Num == 2 && user2Num == 1)
        cout << "You Win! Paper Covers Rock";
    else if (user1Num == 2 && user2Num == 3)
        cout << "Player 2 Wins! Scissors Cut Paper";
    else if (user1Num == 3 && user2Num == 1)
        cout << "Player 2 Wins! Rock Breaks Scissors";
    else if (user1Num == 3 && user2Num == 2)
        cout << "You Win! Scissors Cut Paper";
    return 0;
}

/*
Test Run 1:
Enter Rock(1), Paper(2), or Scissors(3):
1
1
Player 1: 1
Player 2: 1
Tie!
Process returned 0 (0x0)   execution time : 1.399 s
Press any key to continue.

Test Run 2:
Enter Rock(1), Paper(2), or Scissors(3):
1
2
Player 1: 2
Player 2: 1
You Win! Paper Covers Rock
Process returned 0 (0x0)   execution time : 1.668 s
Press any key to continue.

Test Run 3:
Enter Rock(1), Paper(2), or Scissors(3):
1
3
Player 1: 1
Player 2: 3
You Win! Rock Breaks Scissors
Process returned 0 (0x0)   execution time : 4.886 s
Press any key to continue.

Test Run 4:
Enter Rock(1), Paper(2), or Scissors(3):
3
1
Player 1: 3
Player 2: 1
Player 2 Wins! Rock Breaks Scissors
Process returned 0 (0x0)   execution time : 2.451 s
Press any key to continue.
*/

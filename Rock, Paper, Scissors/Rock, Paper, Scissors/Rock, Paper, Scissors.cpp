// Rock, Paper, Scissors.cpp 
//

#include <iostream>
#include <cstdlib>
#include <ctime>

class RockPaperScissors {
private:
    int chP1;
    int chP2;
    int p1Score = 0;
    int p2Score = 0;

    std::string chName(int ch) {
        switch (ch) {
        case 1:
            return "Rock";
            break;
        case 2:
            return "Paper";
            break;
        case 3:
            return "Scissors";
            break;
        }
    }

public:
    void setChoice(int P1, int P2) {
        chP1 = P1;
        chP2 = P2;
        std::cout << "\nYou chose " << chName(chP1) << "\n";
        std::cout << "PC chose " << chName(chP2) << "\n";
    }

    void getResult() {
        if (chP1 == chP2) {
            std::cout << "\nIt's a draw!\n";
        }
        else if (chP1 == 1 && chP2 == 3) {
            std::cout << "\n" << chName(chP1) << " beats " << chName(chP2) << ". You win!\n";
            p1Score = p1Score + 1;
        }
        else if (chP1 == 2 && chP2 == 1) {
            std::cout << "\n" << chName(chP1) << " beats " << chName(chP2) << ". You win!\n";
            p1Score = p1Score + 1;
        }
        else if (chP1 == 3 && chP2 == 2) {
            std::cout << "\n" << chName(chP1) << " beats " << chName(chP2) << ". You win!\n";
            p1Score = p1Score + 1;
        }
        else {
            std::cout << "\n" << chName(chP1) << " is beaten by " << chName(chP2) << ". Computer wins!\n";
            p2Score = p2Score + 1;
        }

        std::cout << "\nScore:" << "\nPlayer: " << p1Score << "\nComputer: " << p2Score << "\n\n";

    }
};

int inputPlayer() {
    int playerChoice;

    std::cout << "\n1. Rock\n" << "2. Paper\n" << "3. Scissors\n" << "Choose number: ";
    std::cin >> playerChoice;

    while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3) {
        std::cout << "\nEnter a valid option!\n";
        std::cout << "\n1. Rock\n" << "2. Paper\n" << "3. Scissors\n" << "Choose number: ";
        std::cin >> playerChoice;
    }

    return playerChoice;
}

int inputPC() {
    int pcChoice = rand() % 3 + 1;
    return pcChoice;
}

int main()
{
    int P1;
    int P2;
    int play;

    srand(time(0)); //generate random numbers

    RockPaperScissors game;

    std::cout << "Welcome to Rock, Paper, Scissors!\n";

    P1 = inputPlayer();
    P2 = inputPC();

    game.setChoice(P1, P2);
    game.getResult();

    while (true) {
        std::cout << "1. Play again\n2. Exit Game\n";
        std::cin >> play;

        if (play == 2) { break; }
        else {
            P1 = inputPlayer();
            P2 = inputPC();

            game.setChoice(P1, P2);
            game.getResult();
        }
    }

    return 0;
}

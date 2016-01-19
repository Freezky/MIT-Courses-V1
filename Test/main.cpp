//
//  main.cpp
//  Test
//
//  Created by Kevyn Bele-Binda on 15-12-27.
//  Copyright © 2015 Kevyn Bele-Binda. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <unistd.h>
#include <term.h>
#include <string.h>
#include <stdio.h>
using namespace std;

// Variables declaration
char symbol1;
char symbol2;
char symbol3;
const char *other_players;
int choice;
char sub_choice;
int number;


// Functions declaration
void ClearScreen() // Function to clear the console
{
    if (!cur_term)
    {
        int result;
        setupterm( NULL, STDOUT_FILENO, &result );
        if (result <= 0) return;
    }
    
    putp( tigetstr( "clear" ) );
}

char AI() // Function to randomly choose the computer's action
{
    number = rand() % 2 + 1;
    switch (number)
    {
        case 1:
            symbol2 = 'X';
        case 2:
            symbol2 = 'O';
            return symbol2;
    }
}
    void print_menu() // Function to display the main menu
    {
        cout << "Welcome to T1CT4CT0E World\n" << "To play the game you must choose if you want to play against someone else or the computer\n" ;
        cout << "Main Menu :\n"; << "What do you want to do ? Enter the number and press start to navigate through the menu\n" << "1. Read the rules\n" "2. Choose against who you want to play\n" << "3. Choose who will start first (Player 1 will start by default)\n"
        cin >> choice;
    }
void game_start() // Function which gives input for the game
    { cout << "It's player 1's turn\n" << "Do you want to put a X or a O ? Use the keyboard to answer and press enter\n";
        cin >> symbol1;
        cout << "It's player 2's turn\n" <<;
        if (other_players == "AI")
        {
            AI();
        cout << "The computer played a " << symbol3;
        }
        else if (other_players == "Human")
        {
            cout << "Do you want to put a X or a O ? Use the keyboard to answer and press enter\n";
            cin >> symbol2;
            cout << "The player 2 played a " << symbol2;
        }
    }
    
    //Objects (for POO)
    class Matrix {
        
    };
// Core program
int main()
    {
    // Menus
        print_menu();
        switch(choice)
        {
            case 1 :
                cout << "Tic-tac-toe (also known as Noughts and crosses or Xs and Os) is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.\n" << "Are you ready to play ? Y/N (If not you'll be redirected to the main menu\n";
                cin >> sub_choice;
                if (sub_choice == "N")
                {
                    ClearScreen();
                print_menu();
                }
                else if (sub_choice == "Y")
                {
                    ClearScreen();
                game_start();
                }
            case 2 :
                cout << "Do you want to play against : \n" << "1. A Human\n" << "2. The computer\n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        other_players = "Human";
                        cout << "You'll play against another player.\n" << "Are you ready to play ? Y/N (If not you'll be redirected to the main menu\n";
                        cin >> sub_choice;
                        if (sub_choice == "N")
                        {
                            ClearScreen();
                            print_menu();
                        }
                        else if (sub_choice == "Y")
                        {
                            ClearScreen();
                            game_start();
                        }
                        
                    case 2:
                        other_players = "AI";
                        cout << "You'll play against the computer.\n" << "Are you ready to play ? Y/N (If not you'll be redirected to the main menu\n";
                        cin >> sub_choice;
                        if (sub_choice == "N")
                        {
                            ClearScreen();
                            print_menu();
                        }
                        else if (sub_choice == "Y")
                        {
                            ClearScreen();
                            game_start();
                        }
                }
        }
        
        // Game
    
        
   
    
}



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void displayGameDetails(int maxTries);
string chooseSecretWord();
void displayWord(string word, int length);
void replaceDashes(char guessWord[], int length);
int isGuessTrue(string secretWord, char guessWord[], char letter);
void displayMan(int remainingGuess);

int main()
{
    int maxTries = 5;
    int remainingTries = 5;
    char guessLetter;
    string secretWord;
    int secretWordLength;

    // display game details
    displayGameDetails(maxTries);

    // chose random word for the game
    secretWord = chooseSecretWord();

    // displaying the blank characters
    secretWordLength = secretWord.length();

    char guessWord[secretWordLength];
    replaceDashes(guessWord, secretWordLength);
    cout << "Your guess word is:";
    displayWord(guessWord, secretWordLength);

    // write your game logic loop here
    while (remainingTries != 0)
    {

        cout << "Enter your guess letter:" << endl;
        cin >> guessLetter;

        int guess = isGuessTrue(secretWord, guessWord, guessLetter);

        if (guess == 0)
        {
            remainingTries--;
            cout << "\nOops! that letter is not present in the word" << endl;
            displayMan(remainingTries);
        }
        if (guess == 1)
        {
            cout << "\nYay! You have found the letter" << endl;
        }
        if (guess == 2)
        {
            cout << "\nYou have already guessed this letter. Try something else!" << endl;
        }
        cout << "\n\nYou can have " << remainingTries << " more wrong attempts" << endl;
        cout << "Your guess word is:";
        displayWord(guessWord, secretWordLength);
        cout << endl;

        // write your code here
        if (guessWord == secretWord)
        {
            cout << "YOU WIN!!" << endl;
            return 0;
        }
    }

    // write your code here
    if (secretWord != guessWord)
    {
        cout << "\nToo many Guesses! You have been hanged.";
        cout << "\nThe secret word was: ";
        displayWord(secretWord, secretWordLength);
    }
    // cout<<"GAME OVER! YOU LOOSE!!"<<endl;
    // return 0;

    return 0;
}

void displayMan(int remainingGuess)
{
    // write your code here
    switch (remainingGuess)
    {
    case 4:
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|             \n";
        cout << "|_______________\n";
        break;

    case 3:
        cout << "    ___________ \n";
        cout << "   |  /          \n";
        cout << "   | /            \n";
        cout << "   |/             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |             \n";
        cout << "   |_______________ \n";
        break;

    case 2:
        cout << "    ___________ \n";
        cout << "   |  /     __|__      \n";
        cout << "   | /     | o o |   \n";
        cout << "   |/      |__-__|    \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |_____________    \n";
        break;

    case 1:
        cout << "    ___________ \n";
        cout << "   |  /     __|__      \n";
        cout << "   | /     | o o |   \n";
        cout << "   |/      |__-__|    \n";
        cout << "   |          |       \n";
        cout << "   |          |      \n";
        cout << "   |          |       \n";
        cout << "   |         / \\      \n";
        cout << "   |        /   \\      \n";
        cout << "   |                 \n";
        cout << "   |                 \n";
        cout << "   |_____________    \n";
        break;

    case 0:
        cout << "    ___________ \n";
        cout << "   |  /       |  ____    \n";
        cout << "   | /        |_|  x |      \n";
        cout << "   |/         | |__x_|  \n";
        cout << "   |          |         \n";
        cout << "   |          |         \n";
        cout << "   |         / \\        \n";
        cout << "   |        /   \\       \n";
        cout << "   |                 \n";
        cout << "   |    YOU DIED      \n";
        cout << "   |_____________    \n";
        break;
    }
}

int isGuessTrue(string secretWord, char guessWord[], char letter)
{
    // write your code here
    int flag = 0;
    for (int i = 0; i < secretWord.length(); i++)
    {
        if (secretWord[i] == letter)
        {
            if (guessWord[i] == secretWord[i])
            {
                flag = 2;
            }
            else
            {
                guessWord[i] = secretWord[i];
                flag = 1;
            }
        }
    }
    return flag;
}

void replaceDashes(char guessWord[], int length)
{
    // your code goes here
    for (int i = 0; i < length; i++)
        guessWord[i] = '_';
    guessWord[length] = '\0';
    // for(int i=0;i<length;i++)
    // {
    //     cout<<guessWord[i]<<" ";
    // }
}

void displayWord(string word, int length)
{
    for (int i = 0; i < length; i++)
    {

        cout << word[i];
    }
    cout << endl;
}

string chooseSecretWord()
{
    // write your code here
    string animals[] = {"Lion", "Elephant", "Tiger", "Giraffe", "Zebra", "Monkey", "Kangaroo", "Penguin", "Panda"};
    int size = sizeof(animals) / sizeof(animals[0]);
    srand(time(NULL));
    int randomIndex = rand() % size;
    string randomAnimal = animals[randomIndex];
    return randomAnimal;
}

void displayGameDetails(int maxTries)
{
    cout << "|       |" << endl;
    cout << "|       |" << endl;
    cout << "|       |    _____   _ _____     _____   _ _____._____     _____   _ _____" << endl;
    cout << "|=======|   |     |   |     |   |     |   |     |     |   |     |   |     |" << endl;
    cout << "|       |    _____|   |     |   |     |   |     |     |    _____|   |     |" << endl;
    cout << "|       |   |     |   |     |   |     |   |     |     |   |     |   |     |" << endl;
    cout << "|       |   |_____|   |     |   |_____|   |     |     |   |_____|   |     |" << endl;
    cout << "                                  __  |" << endl;
    cout << "                                 |    | " << endl;
    cout << "                                 |____|" << endl;

    cout << "\nYou are shown a number of blank lines representing a secret word, and you have to reveal the secret word by guessing letters correctly." << endl;
    cout << "You can guess one letter at a time, and the game terminates after 5 incorrect guesses." << endl;
    cout << "If you guess the letter that is present in the secret word, that letter is revealed in place of the blank." << endl;
    cout << "If you guess the wrong letter, you lose one try, and some part of a person is drawn on the gallows." << endl;
    cout << "After 5 incorrect guesses, a person will be hanged on the gallows, and the game is over." << endl;
    cout << "If you guess all the letters in the secret word before the man is hanged completely, you win!!" << endl;
    cout << "Let's Begin!!" << endl;
    cout << "Number of tries remaining : " << maxTries << endl;
}
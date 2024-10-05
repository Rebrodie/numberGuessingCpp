#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

int randomNumber(const int MAX_NUMBER)
{
  int random;
  srand(time(NULL));
  random = rand() % MAX_NUMBER;
  return random;
}

bool play()
{
  char playAgain;

  do
  {
    cout << "Would you like to play again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'n')
    {
      break;
    }
    cout << "Please enter 'y' for yes or 'n' for no.\n";
  } while (true);

  if (playAgain == 'y')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int guess;
  int tries = 10;

  const int MAX_NUMBER = 100;
  int random = randomNumber(MAX_NUMBER);

  cout << "--------------------------------------------------------------------------------------------" << endl;
  cout << "Welcome to my Number Guessing Game!!" << endl;
  cout << "You have 10 tries to guess a random number betweeen 1-100" << endl;

  do
  {
    if (tries == 10)
    {
      cout << "Guess a number(0-100): \n";
      cin >> guess;
    }
    else
    {
      cin >> guess;
    }

    if (tries == 0)
    {
      cout << "Game over!!, The number was: " << random << endl;
      if (play())
      {
        tries = 10;
        random = randomNumber(MAX_NUMBER);
        continue;
      }
      else
      {
        cout << "Better luck next time, Thanks for Playing" << endl;
        return 0;
      }
    }

    if (guess > MAX_NUMBER || guess < 0)
    {
      cout << "Enter a number between the range 0-100" << "(Tries Left: " << tries-- << ")" << endl;
      continue;
    }

    if (guess > random)
    {
      cout << "Lower, try again(Tries Left: " << tries-- << ")" << endl;
      continue;
    }
    else if (guess < random)
    {
      cout << "Higher, try again (Tries Left: " << tries-- << ")" << endl;
      continue;
    }
    if (guess == random)
    {
      cout << "Congratulations!!, you've guessed correctly \n";
      if (play())
      {
        tries = 10;
        random = randomNumber(MAX_NUMBER);
        continue;
      }
      else
      {
        cout << "Hope you enjoyed Thanks for Playing" << endl;
        return 0;
      }
    }

  } while (guess != random);

  return 0;
}

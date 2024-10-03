#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

int randomNumber(){
  int random;
  srand(time(NULL));
  random = rand() % 100;
  return random;
}

int main(){
  int random, guess;
  int tries {10};
  char playAgain;
  random = randomNumber();

  do
  {

    cout << "Guess a number(0-100): \n";
    cin >> guess;

    if (guess > 100 || guess < 0){
      cout << "Enter a number between the range 0-100" << "(Tries Left: " << tries-- << ")" << endl;
      continue;
    }
    if(guess == random){
      cout << "Congratulations!!, you've guessed correctly \n";
    } else if(guess > random) {
      cout << "Lower, try again(Tries Left: " << tries-- << ")" << endl;
      continue;
    } else if(guess < random){
      cout << "Higher, try again (Tries Left: " << tries-- << ")" << endl;
      continue;
    }
    if(tries < 0){
      cout << "Game over, The number was: " << random << endl;
      cout << "Would you like to play again? (y/n)" << endl;
      cin >> playAgain;

      if(playAgain == 'y'){
      }
      else
      {
        return 0;
      }
    }
  } while (guess != random);
  return 0;
}

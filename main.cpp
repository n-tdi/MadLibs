#include <iostream>
#include <string>
using namespace std;


int main() {
  // Defining inputs
  string adjective1;
  string noun1;
  string verbPastTense1;
  string adverb1;
  string adjective2;
  string noun2;
  string noun3;
  string adjective3;
  string verb1;
  string adverb2;
  string verbPastTense2;
  string adjective4;

  // Getting inputs
  cout << "Adjective: ";
  cin >> adjective1;

  cout << "\nNoun: ";
  cin >> noun1;

  cout << "\nPast Tense Verb: ";
  cin >> verbPastTense1;

  cout << "\nAdverb: ";
  cin >> adverb1;

  cout << "\nAdjective: ";
  cin >> adjective2;

  cout << "\nNoun: ";
  cin >> noun2;

  cout << "\nNoun: ";
  cin >> noun3;

  cout << "\nAdjective: ";
  cin >> adjective3;

  cout << "\nVerb: ";
  cin >> verb1;

  cout << "\nAdverb: ";
  cin >> adverb2;

  cout << "\nPast Tense Verb: ";
  cin >> verbPastTense2;

  cout << "\nAdjective: ";
  cin >> adjective4;

  // Creating Story
  cout << "\nToday I went to the zoo. I saw an " << adjective1 << " " << noun1 << " jumping up and down in its tree.";
  cout << "\nHe " << verbPastTense1 << " " << adverb1 << " through the large tunnel that led to its " << adjective2 << " " << noun2 << ".";
  cout << "\nI got some peanutes and passed them through the cage to a gigantic gray " << noun3 << ", towering over my head.";
  cout << "\nFeeding the animal made me hungry.";
  cout << "\nI went to get a " << adjective3 << " scoop of ice cream.";
  cout << "\nAfterwards I had to " << verb1 << " " << adverb2 << " to catch my bus.";
  cout << "\nWhen I got home I " << verbPastTense2 << " my mom for a " << adjective4 << " day at the zoo.";

  // Monkey because why not
  cout << R"(
               ',
            .-`-,\__
              ."`   `,
            .'_.  ._  `;.
        __ / `      `  `.\ .--.
       /--,| 0)   0)     )`_.-,)
      |    ;.-----.__ _-');   /
       '--./         `.`/  `"`
          :   '`      |.      
          | \     /  //         
           \ '---'  /'        
            `------' \  
             _/       `--...
  )" << '\n';
}
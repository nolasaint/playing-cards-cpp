#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

// Function prototypes
void print(Deck &deck);

void print(Deck &deck)
{
    deck.shuffle();
    int hand[] = 
    {
        deck.draw(),
        deck.draw(),
        deck.draw(),
        deck.draw(),
        deck.draw()
        
    };
    
    cout << "Drawing " << sizeof(hand) / sizeof(*hand) << " cards, your hand is:" << endl;
    for (int i = 0; i < sizeof(hand) / sizeof(*hand); i++)
        cout << "   " << Card::to_string(hand[i]) << endl;
    
    cout << endl;
    cout << "Original deck size:\t" << deck.get_deck_size() << endl;
    cout << "Number of decks used:\t" << deck.get_decks() << endl;
    cout << "Cards left in deck:\t" << deck.get_remaining() << endl;
    
}

int main()
{
    Deck deckOne(false, 1);
    Deck deckTwo(true, 1);
    
    print(deckOne);
    cout << "\n" << endl;
    print(deckTwo);
    cout << endl;
    
    // Allow user to see output
    cout << "Press enter to continue...";
    cin.get();
    
    return 0;
    
}

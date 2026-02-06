#include <iostream>
#include <vector>
#include <string>
#include "dealer.h"
#include "player.h"
#include "cards.h"
#include "hands.h"

using namespace std;

// A simple helper to print the board state
void printBoard(const vector<string>& community) {
    cout << "Community Cards: [ ";
    for (const auto& c : community) {
        cout << c << " ";
    }
    cout << "]" << endl;
}

// Placeholder: You will need to write the complex logic to identify pairs/straights later
void evaluateHand(const vector<string>& hand, const vector<string>& community) {
    cout << "--- Final Hand ---" << endl;
    cout << "Your cards: " << hand[0] << " " << hand[1] << endl;
    cout << "Board: ";
    for(auto c : community) cout << c << " ";
    cout << "\nResult: (Hand evaluation logic needs to be implemented)" << endl;
}

int main() {
    // 1. Setup
    Player* p1 = new Player("Player 1");
    Cards* deck = new Cards();
    Dealer* dealer = new Dealer(deck);
    bool playing = true;

    while (playing) {
        // --- NEW ROUND SETUP ---
        cout << "\n=================================\n";
        cout << "       NEW ROUND STARTED       \n";
        cout << "=================================\n";
        
        dealer->resetCards(deck); // Shuffle deck
        p1->clearHand();          // Clear player's previous hand
        vector<string> communityCards;

        // --- PHASE 1: PRE-FLOP ---
        cout << "\n[PHASE 1] Dealing Hole Cards...\n";
        dealer->dealCards(p1);
        p1->showHand(); 
        
        cout << "Place your bet: ";
        int bet;
        cin >> bet;
        p1->bet(bet);
        
        {
            // --- PHASE 2: FLOP (3 Cards) ---
            cout << "\n[PHASE 2] The Flop...\n";
            vector<string> flop = dealer->dealCommunityCards(3);
            // Add to our running list of community cards
            communityCards.insert(communityCards.end(), flop.begin(), flop.end());
            printBoard(communityCards);
        }
        
        p1->showHand(); // Remind player of their cards

        cout << "1. Check/Call  2. Raise  3. Fold\nChoice: ";
        int choice;
        cin >> choice;
        if (choice == 3) { cout << "You Folded.\n"; goto EndRound; }

        {
            // --- PHASE 3: TURN (1 Card) ---
            cout << "\n[PHASE 3] The Turn...\n";
            vector<string> turn = dealer->dealCommunityCards(1);
            communityCards.push_back(turn[0]);
            printBoard(communityCards);
        }
        
        cout << "1. Check/Call  2. Raise  3. Fold\nChoice: ";
        cin >> choice;
        if (choice == 3) { cout << "You Folded.\n"; goto EndRound; }

        {
            // --- PHASE 4: RIVER (1 Card) ---
            cout << "\n[PHASE 4] The River...\n";
            vector<string> river = dealer->dealCommunityCards(1);
            communityCards.push_back(river[0]);
            printBoard(communityCards);
        }

        
        cout << "1. Check/Call  2. Raise  3. Fold\nChoice: ";
        cin >> choice;
        if (choice == 3) { cout << "You Folded.\n"; goto EndRound; }

        {
            // --- PHASE 5: SHOWDOWN ---
            evaluateHand(p1->getHand(), communityCards);
        }
        EndRound:
        cout << "\nPlay again? (1=Yes, 0=No): ";
        cin >> playing;
    }

    delete p1;
    delete deck;
    delete dealer;
    return 0;
}
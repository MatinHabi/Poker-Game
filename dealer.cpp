#include "dealer.h"
#include <iostream>
Dealer::Dealer(Cards* c){
    auto x = c->getShuffledCards();
    if(x.empty()){
        std::cout << "No shuffled deck exists!\n";
        return;
    }
    for(auto i : x){
        dealerCards.push(i);
    }
}

void Dealer::dealCards(Player* p){
   for(int i= 0; i < 2 ; i++){
    p->recieveCard(dealerCards.front());
    dealerCards.pop();
   }
}


std::vector<std::string> Dealer::dealCommunityCards(int numCards){
    std::vector<std::string> community;

    if(dealerCards.empty()){
        std::cout << "Deck is empty! Cannot deal community cards.\n";
        return community;
    }

    // 1. BURN A CARD
    // In Texas Hold'em, the top card is discarded before the Flop, Turn, and River.
    dealerCards.pop(); 

    for(int i = 0; i < numCards; i++){
        if(dealerCards.empty()) break;
        
        std::string card = dealerCards.front();
        community.push_back(card);
        dealerCards.pop();
    }
    
    return community;
}
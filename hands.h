#ifndef HANDS_H
#define HANDS_H
#include <unordered_map>
#include <vector>
#include <unordered_set>

class Hands{
protected:
    std::unordered_map<int, std::string> handRanks = {
        {10, "High Card"},
        {9, "One Pair"},
        {8, "Two Pair"},
        {7, "Three of a Kind"},
        {6, "Straight"},
        {5, "Flush"},
        {4, "Full House"},
        {3, "Four of a Kind"},
        {2, "Straight Flush"},
        {1, "Royal Flush"}
    };
public:
    int evaluateHand(std::vector<std::string> playerHand, std::vector<std::string> communityCards){
        //check player hand + community cards
        return 1; // For now, we just return "High Card" as a default
    }
};

#endif
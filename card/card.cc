#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, k; cin >> m >> k;
    string actions; cin >> actions;
    deque<int> deck = {};
    for (int i=0; i<m; i++) {
        deck.push_back(i);
    } 
    // forms vector of consecutive numbers 1 to m
    for (int i=0; i<int(actions.size()); i++) {
        if (actions[i] == 'A') {
            // A action
            deck.push_back(deck[0]);
            deck.pop_front();
        } else if (actions[i] == 'B') {
            // B action
            int hold = deck[0];
            deck.push_back(deck[1]);
            deck.pop_front();
            deck.pop_front();
            deck.push_front(hold);
        } else {
            break;
        }
    }
    cout << deck[k-1] << " " << deck[k] << " " << deck[k+1] << "\n";    
}
    



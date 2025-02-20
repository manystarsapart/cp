#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int Q; cin >> Q;
    deque<int> type1ticket = {};
    deque<int> type2ticket = {};
    for (int i=0; i<Q; i++) { // each query (queryType )
        int queryType; cin >> queryType;
        if (queryType == 1) {
            // query type 1: add ticket
            int ticketType; cin >> ticketType;
            if (ticketType == 1) {
                // ticket type 1: cry for help
                int id; cin >> id;
                type1ticket.push_back(id);
            } else {
                // ticket type 2: trainer ticket
                int id; cin >> id;
                type2ticket.push_back(id);
            }
        } else {
            // query type 2: resolve ticket
            if (!type2ticket.empty()) {  
                cout << type2ticket[0] << "\n";
                type2ticket.pop_front();
            } else if (!type1ticket.empty()) {
                cout << type1ticket[0] << "\n";
                type1ticket.pop_front();
            } else {
                cout << -1 << "\n";
            }
        }
    }
}




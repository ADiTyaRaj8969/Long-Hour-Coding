#include<bits/stdc++.h>
using namespace std;

vector<int> rank_alice(vector<int> &players, vector<int> &score_of_alice) {
    vector<int> rank_of_alice;
    vector<int> unique_scores;

    // Create a unique list of scores in descending order
    unique_scores.push_back(players[0]);
    for (int i = 1; i < players.size(); i++) {
        if (players[i] != players[i - 1]) {
            unique_scores.push_back(players[i]);
        }
    }

    // Determine Alice's rank for each of her scores
    for (int score : score_of_alice) {
        // Find the rank by comparing Alice's score with unique scores
        while (!unique_scores.empty() && score >= unique_scores.back()) {
            unique_scores.pop_back();
        }
        // The rank is the size of the remaining unique scores + 1
        rank_of_alice.push_back(unique_scores.size() + 1);
    }

    return rank_of_alice;
}

int main() {
    int n;
    cin >> n;
    vector<int> players(n);
    for (int i = 0; i < n; i++) {
        cin >> players[i];
    }
    int m;
    cin >> m;
    vector<int> score_of_alice(m);
    for (int i = 0; i < m; i++) {
        cin >> score_of_alice[i];
    }

    vector<int> rank_of_alice = rank_alice(players, score_of_alice);
    for (int rank : rank_of_alice) {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}
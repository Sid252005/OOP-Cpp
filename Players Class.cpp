#include <iostream>
using namespace std;

class Game {
private:
    string name;
    int maxPlayers;
    double rating;

public:
    Game(string n, int players, double r) {
        name = n;
        maxPlayers = players;
        rating = r;
    }

    void updateRating(double newRating) {
        rating = newRating;
    }

    void display() {
        cout << "Game: " << name << ", Max Players: " << maxPlayers << ", Rating: " << rating << "/10" << endl;
    }
};

int main() {
    Game g1("CyberQuest", 4, 8.5);
    g1.updateRating(9.0);
    g1.display();

    return 0;
}


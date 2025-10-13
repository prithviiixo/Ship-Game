#include<iostream>
using namespace std;

int main() {
    // Here 1 means there is a ship
    bool ships[5][5] = {
        {0, 0, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 0, 1, 0, 1},
        {1, 0, 0, 1, 0},
        {0, 0, 1, 1, 0}
    };

    // Track the number of hits and number of turns played
    int hits = 0, Turns = 0;

    // Use while loop to let the player continue until he hits all ships
    while (hits < 10) {
        int row, column;

        cout << "Select the coordinate\n";
        cout << "Choose the row number between 0 to 4: ";
        cin >> row;
        cout << "Choose the column number between 0 to 4: ";
        cin >> column;

        // Check if the input is within bounds
        if (row < 0 || row > 4 || column < 0 || column > 4) {
            cout << "Invalid coordinates! Please choose between 0 and 4 for both row and column.\n\n";
            continue; // Restart this loop iteration if input is invalid
        }

        // To check if player hits the ship
        if (ships[row][column]) {
            // If the player hits a ship, remove it by setting the value to zero
            ships[row][column] = 0;
            // Increase the hit counter
            hits++;
            cout << "Hit!!! 💣 " << (10 - hits) << " ships left.\n\n";
        } else {
            cout << "Miss! 😢\n\n";
        }

        Turns++;
    }

    cout << "Victory! ✌️\n";
    cout << "You won in " << Turns << " turns.\n";
    return 0;
}

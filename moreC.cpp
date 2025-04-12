#include <iostream>
using namespace std;

// Function for the number 10 pattern
void firstPattern() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int minDist = min(min(i, j), min(n - i - 1, n - j - 1));
            cout << n - minDist << " ";
        }
        cout << endl;
    }
}

// Function for the  Alphabet Palindrome Pyramid Pattern
void secondPattern() {
    int i, j, n;
    cout << "Enter Largest Alphabet Value(e.g C=3): ";
    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 65; j < 64 + (2 * n); j++) {
            if (j >= (64 + n) + i)
                cout << (char)((64 + n) - (j % (64 + n)));
            else if (j <= (64 + n) - i)
                cout << (char)j;
            else
                cout << " ";
        }
        cout << endl;
    }
}

// Function for the (Right Arrow)
void drawRightArrowPattern(int n, char symbol) {
    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i)
                cout << "  "; // 2 spaces for alignment
            else
                cout << symbol;
        }
        cout << endl;
    }

    // Lower half
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i)
                cout << "  ";
            else
                cout << symbol;
        }
        cout << endl;
    }
}

// Function for the (Left Arrow Star Pattern)
void fourthPattern() {
    int n;
    cout << "Enter number of rows (odd only): " << endl;
    cin >> n;

    cout << "Left Arrow Star Pattern: \n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= n - i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i + 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // Call the first pattern
    firstPattern();

    // Call the second pattern
    secondPattern();

    // Call the third pattern (Right Arrow Pattern)
    int size;
    char symbol;
    cout << "Enter Pattern Size: ";
    cin >> size;
    cout << "Enter Symbol: ";
    cin >> symbol;
    drawRightArrowPattern(size, symbol);

    // Call the fourth pattern (Left Arrow Star Pattern)
    fourthPattern();

    return 0;
}

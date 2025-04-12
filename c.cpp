#include <iostream>
using namespace std;

// 1. Right-angled triangle
void rightAngledTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// 2. Inverted right-angled triangle
void invertedRightAngledTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// 3. Number triangle
void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
}  
// 4. Star pyramid
void starPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
}

// 5. Number pyramid

void numberPyramid(int n) {
    
    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++)
            cout << "  ";
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        for(int j = i - 1; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
}

// 6. Character pyramid
void characterPyramid(int n) {
    
    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++)
            cout << "  ";
        for(int j = 0; j < i; j++)
            cout << char('A' + j) << " ";
        for(int j = i - 2; j >= 0; j--)
            cout << char('A' + j) << " ";
        cout << endl;
    }
}

// 7. Inverted star pyramid
void invertedStarPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
}

// 8. Inverted number pyramid
void invertedNumberPyramid(int n) {
    for(int i = n; i >= 1; i--) {
        for(int space = 1; space <= n - i; space++)
            cout << "  ";
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        for(int j = i - 1; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
}

// 9. Hollow star pyramid
void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

// 10. Inverted hollow star pyramid
void invertedHollowPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

// 11. Diamond star pyramid
void diamondStarPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
}

void hollowDiamond(int n) {
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (abs(n - i) + abs(n - j) < n)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int choice, n;

    do {
        cout << "\n--- Pattern Menu ---\n";
        cout << "1. Right-angled Triangle\n";
        cout << "2. Inverted Right-angled Triangle\n";
        cout << "3. Number Triangle\n";
        cout << "4. Star Pyramid\n";
        cout << "5. Number Pyramid\n";
        cout << "6. Character Pyramid\n";
        cout << "7. Inverted Star Pyramid\n";
        cout << "8. Inverted Number Pyramid\n";
        cout << "9. Hollow Star Pyramid\n";
        cout << "10. Inverted Hollow Star Pyramid\n";
        cout << "11. Diamond Star Pyramid\n";
        cout << "12. hollowDiamond\n";
        
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 13) {
            cout << "Enter number of rows: ";
            cin >> n;
        }

        switch (choice) {
            case 1: rightAngledTriangle(n); break;
            case 2: invertedRightAngledTriangle(n); break;
            case 3: numberTriangle(n); break;
            case 4: starPyramid(n); break;
            case 5: numberPyramid(n); break;
            case 6: characterPyramid(n); break;
            case 7: invertedStarPyramid(n); break;
            case 8: invertedNumberPyramid(n); break;
            case 9: hollowPyramid(n); break;
            case 10: invertedHollowPyramid(n); break;
            case 11: diamondStarPyramid(n); break;
            case 12: hollowDiamond(n); break;
            
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}

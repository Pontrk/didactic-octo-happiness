#include <iostream>

using namespace std;

int main() {
    cout << "Gra w kolko i krzyzyk" << endl;
    char tab[9];
    int i, x = 49, gracz = 0, czyremis = 1, czywygrana = 0, wygranygracz;
    for (i = 0; i < 9; i++) {
        tab[i] = x;
        x++;
    }
    for (i = 0; i < 9; i++) {
        cout << tab[i];
        if (i % 3 == 2)
            cout << endl;
    }
    cout << "Aby wybrac pole wybierz numer i zatwierdz enterem" << endl;
    while ((czyremis != 0) || (czywygrana != 1)) {
        czyremis = 0;
        if(gracz%2==0)
            cout<<"Gracz pierwszy"<<endl;
        else cout<<"Gracz drugi"<<endl;
        cin >> x;
        if (gracz % 2 == 0)
            tab[x - 1] = 'X';
        else tab[x - 1] = 'O';
        gracz++;
        for (i = 0; i < 9; i++) {
            cout << tab[i];
            if (i % 3 == 2)
                cout << endl;
        }
        for (i = 0; i < 9; i++) {
            if (tab[i] == i + 1)
                czyremis++;
        }
        if (((tab[0] == 'X') && (tab[1] == 'X') && (tab[2] == 'X')) ||
            ((tab[3] == 'X') && (tab[4] == 'X') && (tab[5] == 'X')) ||
            ((tab[6] == 'X') && (tab[7] == 'X') && (tab[8] == 'X'))) {
            czywygrana = 1;
            wygranygracz = 0;
        }
        if (((tab[0] == 'O') && (tab[1] == 'O') && (tab[2] == 'O')) ||
            ((tab[3] == 'O') && (tab[4] == 'O') && (tab[5] == 'O')) ||
            ((tab[6] == 'O') && (tab[7] == 'O') && (tab[8] == 'O'))) {
            czywygrana = 1;
            wygranygracz = 1;
        }
        if (((tab[0] == 'X') && (tab[3] == 'X') && (tab[6] == 'X')) ||
            ((tab[1] == 'X') && (tab[4] == 'X') && (tab[7] == 'X')) ||
            ((tab[2] == 'X') && (tab[5] == 'X') && (tab[8] == 'X'))) {
            czywygrana = 1;
            wygranygracz = 0;
        }
        if (((tab[0] == 'O') && (tab[3] == 'O') && (tab[6] == 'O')) ||
            ((tab[1] == 'O') && (tab[4] == 'O') && (tab[7] == 'O')) ||
            ((tab[2] == 'O') && (tab[5] == 'O') && (tab[8] == 'O'))) {
            czywygrana = 1;
            wygranygracz = 1;
        }
        if (((tab[0] == 'X') && (tab[4] == 'X') && (tab[8] == 'X')) ||
            ((tab[2] == 'X') && (tab[4] == 'X') && (tab[6] == 'X'))) {
            czywygrana = 1;
            wygranygracz = 0;
        }
        if (((tab[0] == 'X') && (tab[4] == 'X') && (tab[8] == 'X')) ||
            ((tab[2] == 'X') && (tab[4] == 'X') && (tab[6] == 'X'))) {
            czywygrana = 1;
            wygranygracz = 0;
        }
    }
    if(wygranygracz==0)
        cout<<"Wygral gracz pierwszy";
    else cout<<"Wygral gracz drugi";
}


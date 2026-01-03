#include <iostream>
#include "funksionet.h"
#include <string>
using namespace std;

string emrat[100];
int notatMatematike[100];
int total = 0;

using namespace std;

int main() {
    int zgjedhja;
    do {
        menu();
        cout << "Zgjidh nje opsion: ";
        cin >> zgjedhja;

        switch (zgjedhja) {
        case 1:
            shtoStudent();
            break;
        case 2:
            shfaqStudentet();
            break;
        case 3:
            kerkoStudent();
            break;
        case 4:
            fshijStudent();
            break;
        case 5:
            ndryshoNoten();
            break;
        case 6:
            llogaritMesataren();
            break;
        case 7:
            numriStudenteve();
            break;
        case 8:
            numriStudenteveKalues();
            break;
        case 9:
            numriStudenteveDeshtues();
            break;
        case 0:
            cout << "Programi u mbyll me sukses.\n";
            break;
        default:
            cout << "Zgjedhje e gabuar. Provo perseri.\n";
        }

    } while (zgjedhja != 0);

    return 0;
}

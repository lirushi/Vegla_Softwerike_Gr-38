#include <iostream>
#include <string>
#include "funksionet.h"
using namespace std;

extern string emrat[100];
extern int notatMatematike[100];
extern int total;

//Regjistron nje student te ri
void shtoStudent(){
    if (total >= 100) {
        cout << "Nuk mund te shtohen me shume se 100 studente.\n";
        return;
    }
    string emri;
    int nota;

    cout << "Shkruaj emrin e studentit: ";
    cin >> emri;


    for (int i = 0; i < total; i++) {
        if (emrat[i] == emri) {
            cout << "Studenti ekziston tashme.\n";
            return;
        }
    }
//Per studentin e ri regjistron noten e matematikes
    cout << "Shkruaj noten e matematikes (5-10): ";
    cin >> nota;

    if (nota < 5 || nota > 10) {
        cout << "Nota e pavlefshme.\n";
        return;
    }

    emrat[total] = emri;
    notatMatematike[total] = nota;
    total++;

    cout << "Studenti u regjistrua me sukses.\n";
}

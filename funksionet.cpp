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
    do {
    cout << "Shkruaj noten e matematikes (5-10): ";
    cin >> nota;
    if (nota < 5 || nota > 10) {
        cout << "Nota e pavlefshme, provoni perseri.\n";
    }
    } while (nota < 5 || nota > 10);


    emrat[total] = emri;
    notatMatematike[total] = nota;
    total++;

    cout << "Studenti u regjistrua me sukses.\n";
}

void fshijStudent() {
    if (total == 0) {
        cout << "Nuk ka studente per fshirje.\n";
        return;
    }

   
 int index;
    cout << "Shkruaj numrin e studentit per fshirje: ";
    cin >> index;

    if (index < 1 || index > total) {
        cout << "Index i pavlefshem.\n";
        return;
    }

    for (int i = index - 1; i < total - 1; i++) {
        emrat[i] = emrat[i + 1];
        notatMatematike[i] = notatMatematike[i + 1];
    }

    total--;
    cout << "Studenti u fshi me sukses.\n";
}
//Tregon sa student kane kaluar lenden dhe perqindjen e studenteve kalues
void numriStudenteveKalues() {
    if (total == 0) {
        cout << "Nuk ka studente.\n";
        return;
    }

    int kalues = 0;
    for (int i = 0; i < total; i++) {
        if (notatMatematike[i] >= 5)
            kalues++;
    }

    float perqindja = (float)kalues / total * 100;
    cout << "Studente kalues: " << kalues
         << " (" << perqindja << " %" << " e studenteve kane kaluar)\n";
}
void shfaqStudentet() {
if (total == 0) {
cout <<"Nuk ka studente.\n";
return;
}

for (int i = 0; i < total; i++) {
cout << i + 1 << "." << emrat[i]
<< " - Nota: " << notatMatematike[i] << endl;
}
}
void kerkoStudent() {
string emri;
cout <<"Shkruaj emrin e studentit: ";
cin >> emri;

for (int i = 0; i < total; i++) {
if (emrat[i] == emri) {
cout << "Studenti u gjet: "

 << emrat[i] << " - "
 << notatMatematike[i] << endl;
return;
}
}
cout << "Studenti nuk u gjet.\n";
}



void numriStudenteve() {
    cout << "Numri total i studenteve: " << total << endl;
}

void numriiStudenteveDeshtues() {
    int deshtues = 0;
    for (int i = 0; i < total; i++) {
        if (notatMatematike[i] < 5)
            deshtues++;
    }

    cout << "Studente deshtues: " << deshtues << endl;
}
void ndryshoNoten() {
int index, nota;
cout &lt;&lt; &quot;Shkruaj numrin e studentit: &quot;;
cin &gt;&gt; index;

if (index &lt; 1 || index &gt; total) {
cout &lt;&lt; &quot;Index i gabuar.\n&quot;;
return;
}

cout &lt;&lt; &quot;Shkruaj noten e re: &quot;;
cin &gt;&gt; nota;

if (nota &lt; 5 || nota &gt; 10) {
cout &lt;&lt; &quot;Nota e pavlefshme.\n&quot;;
return;
}

notatMatematike[index - 1] = nota;
cout &lt;&lt; &quot;Nota u perditesua.\n&quot;;

}

void llogaritMesataren() {
if (total == 0) {
cout &lt;&lt; &quot;Nuk ka studente.\n&quot;;
return;
}

int shuma = 0;
for (int i = 0; i &lt; total; i++)
shuma += notatMatematike[i];

cout &lt;&lt; &quot;Mesatarja: &quot;
&lt;&lt; (float)shuma / total &lt;&lt; endl;
}

void menu() {
    cout << "\n===== MENAXHIMI I NOTAVE =====\n";
    cout << "1. Regjistro student\n";
    cout << "2. Shfaq studentet\n";
    cout << "3. Kerko student\n";
    cout << "4. Fshij student\n";
    cout << "5. Ndrysho noten\n";
    cout << "6. Llogarit mesataren\n";
    cout << "7. Numri i studenteve\n";
    cout << "8. Studente kalues\n";
    cout << "9. Studente deshtues\n";
    cout << "0. Dil\n";
}


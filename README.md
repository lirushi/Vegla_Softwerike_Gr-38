# Vegla Softwerike Gr.38

Ky projekt është zhvilluar nga grupi 38 për lëndën Vegla Softwerike.

# Menaxhimi i Notave në lëndën e Matematikës

Ky projekt është krijuar për të menaxhuar studentët dhe notat e tyre në lëndën e matematikës në mënyrë të organizuar dhe të thjeshtë. Ai lejon regjistrimin e studentëve të rinj, ndryshimin e notave ekzistuese, fshirjen e studentëve nga lista, si dhe llogaritjen e statistikave të ndryshme mbi notat, si mesatarja dhe numri i kaluesve/dështuesve.  

Qëllimi kryesor i këtij projekti është të ofrojë një mënyrë efikase për të monitoruar performancën e studentëve dhe për të lehtësuar punën e profesorit . Programi përdor struktura të thjeshta të të dhënave dhe funksione, që e bëjnë kodin të lehtë për mirëmbajtje dhe zgjerim të mëtejshëm.  

Ky projekt është i ndarë në disa module, ku secili anëtar i grupit ka punuar në funksionet e tij përkatëse në branch-et personale. Pas përfundimit të punës, branch-et janë bashkuar (merged) në main branch, duke krijuar versionin final të projektit.  

# Funksionet - Liri

## Funksioni shtoStudent()

**Përshkrimi:**  
Ky funksion mundëson: 
- Regjistrimin e një studenti të ri në lëndën e matematikës.  
- Regjistrimin e notës në lëndën e matematikës (5-10).
- Rishikon nëse studenti është i regjistruar.  

**Si përdoret funksioni:**  
- Përdoruesi shkruan emrin e studentit.  
- Përdoruesi shkruan notën (5-10).  
- Funksioni regjistron studentin në listë.

**Shembull Input/Output:** 
- Input: Shkruaj emrin e studentit: Liri
-        Shkruaj noten e matematikes: 10
- Output: Studenti u regjistrua me sukses.

## Funksioni fshijStudent()

**Përshkrimi**
Ky funksion mundëson:
- Fshirje e studentit nga lista sipas numrit rendor që jep përdoruesi.
- Rishikimin nëse studenti që duam ta heqim ekziston.

**Si përdoret funksioni**
- Përdoruesi shkruan numrin e studentit për të fshirë
- Funksioni e heq studentin nga lista.

**Shembull Input/Output:**
- Input: Shkruaj numrin e studentit per fshirje: 1
- Output: Studenti u fshi me sukses.

## Funksioni numriStudenteveKalues()

**Përshkrimi** 
Ky funksion: 
- Tregon sa studentë janë kalues.
- Tregon perqindjen e studenteve kalues ne krahasim me totalin e studenteve te lendes.

**Si përdoret** 
- Funksioni tregon numrin e kaluesve 
- Funksioni llogarit dhe shfaq perqindjen e studenteve qe kane kaluar.

**Shembull Input/Output:**
- Output: Student kalues: 1 (20 % e studenteve kane kaluar)

# Funksionet - Luna

## Funksioni shfaqStudentet();
**Pershkrimi:**
Ky funksion:
-Shfaq të gjithë studentët që ndodhen në listë.
-Tregon ID-n, emrin dhe mbiemrin e secilit student.

**Si perdoret**
-Thirret pa parametra.
-Funksioni lexon listën ekzistuese të studentëve dhe i printon në ekran.

**Shembull Input/Output:**
- Output: 
ID: 1, Emri: Arber, Mbiemri: Krasniqi


## Funksioni kerkoStudent();
**Pershkrimi:**
Ky funksion:
-Kërkon një student të caktuar nga lista sipas ID-së.
-Nëse studenti ekziston, shfaq të dhënat e tij.
-Nëse studenti nuk gjendet, shfaq një mesazh të përshtatshëm.

**Si perdoret:**
-Thirret pa parametra.
-Përdoruesi jep ID-n e studentit që dëshiron të kërkojë.

**Shembull Input/Output:**
- Input: Shkruaj ID-n e studentit: 2

# Funksionet – Ensari

# Funksioni numriStudenteve();

Përshkrimi:
Ky funksion:
	•	Shfaq numrin total të studentëve të regjistruar në sistem.
	•	Përdor variablën globale total për të marrë këtë informacion.

Si përdoret:
	•	Thirret pa parametra.
	•	Funksioni lexon vlerën aktuale të numrit të studentëve dhe e shfaq në ekran.

Shembull Input/Output:
	•	Output:
Numri total i studenteve: 10

⸻

# Funksioni numriStudenteveDeshtues();

Përshkrimi:
Ky funksion:
	•	Llogarit numrin e studentëve që kanë dështuar në lëndën e matematikës.
	•	Konsideron si dështues studentët me notë më të vogël se 5.
	•	Përdor vargun notatMatematike dhe variablën total.

Si përdoret:
	•	Thirret pa parametra.
	•	Funksioni kontrollon notat e të gjithë studentëve dhe numëron ata që kanë dështuar.

Shembull Input/Output:
	•	Output:
Studente deshtues: 3

⸻

# Funksioni menu();

Përshkrimi:
Ky funksion:
	•	Shfaq menunë kryesore të programit për menaxhimin e studentëve dhe notave.
	•	Ofron opsione të ndryshme për regjistrim, shfaqje, kërkim, fshirje dhe analiza të studentëve.

Si përdoret:
	•	Thirret pa parametra.
	•	Shfaq vetëm menunë; zgjedhja e opsioneve bëhet në funksione të tjera (zakonisht në main).

    Shembull Input/Output:
	•	Output:
    ===== MENAXHIMI I NOTAVE =====
1. Regjistro student
2. Shfaq studentet
3. Kerko student
4. Fshij student
5. Ndrysho noten
6. Llogarit mesataren
7. Numri i studenteve
8. Studente kalues
9. Studente deshtues
0. Dil
  
 # Funksionet - Ylli

##Funksioni void ndryshoNoten()

**Përshkrimi:**  
Ky funksion
-mundëson ndryshimin e notës së një studenti ekzistues në sistem.
- Me fjalë të thjeshta:
  lejon korrigjimin ose përditësimin e një note pa e fshirë studentin.
⸻
**Si përdoret funksioni:**  
- Thirret kur përdoruesi dëshiron të modifikojë notën e një studenti.
  -Përdoruesi jep:
  • Numrin e studentit
  • Notën e re
  • Funksioni:
-kontrollon nëse studenti ekziston
-kontrollon nëse nota është valide
-e ruan ndryshimin
⸻
##Funksioni llogaritMesataren()
**Përshkrimi**
-Ky funksion mundëson llogaritjen e mesatares së notave të të gjithë studentëve.
-Me fjalë të thjeshta:
tregon performancën mesatare të grupit.
⸻
**Si përdoret funksioni**
- Thirret kur përdoruesi dëshiron të shohë mesataren.
- Nuk kërkon input nga përdoruesi.
- Punon me të dhënat ekzistuese (notat dhe numrin e studentëve).


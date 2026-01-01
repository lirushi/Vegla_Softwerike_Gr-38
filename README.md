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
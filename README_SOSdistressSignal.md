# 🚨 Projet : SOS Distress Signal

## 👥 Équipe
- freedomguidi
- Pôle ROS - FIERI, Compétition Hebdomadaire Semaine 1

## 📖 Description
Ce projet reproduit le signal de détresse universel **S.O.S** en code Morse 
à l'aide d'un Arduino, d'une LED et d'un buzzer.  
Le signal est généré par une séquence de clignotements courts et longs, 
correspondant aux points et traits du code Morse (S = 3 points, O = 3 traits).  
La LED et le buzzer fonctionnent en parallèle pour un signal à la fois 
visuel et sonore.

Objectifs pédagogiques :
- Comprendre la gestion du temps avec `delay()`.
- Utiliser des boucles `for` pour répéter des instructions.
- Câbler un circuit simple avec LED, buzzer et résistance.
- Organiser le code avec des fonctions pour plus de clarté.

## ⚙️ Matériel utilisé
- Arduino Uno ou équivalent
- 1 LED (couleur au choix)
- 1 Buzzer
- 1 Résistance 220 Ω
- Breadboard
- Câbles de connexion (jumper wires)
- Câble USB A–B

## 🔌 Instructions de câblage
1. Relier la broche numérique **10** de l'Arduino à l'anode (+) de la LED 
   via une résistance de 220 Ω.
2. Connecter la cathode (–) de la LED au rail GND de la breadboard.
3. Relier la broche numérique **9** de l'Arduino à la borne + du buzzer.
4. Connecter la borne – du buzzer au rail GND de la breadboard.
5. Relier le GND de l'Arduino au rail GND de la breadboard.

## 💻 Instructions d'utilisation
1. Cloner le dépôt :
```bash
   git clone https://github.com/freedomguidi/Arduino_SOS.git
```
2. Ouvrir le fichier `sos_distress_signal_buzzer.ino` dans Arduino IDE.
3. Sélectionner la carte **Arduino Uno** et le bon port COM.
4. Téléverser le code et observer le signal S.O.S.

## ✨ Améliorations apportées
- Ajout d'un **buzzer sur le pin 9** fonctionnant en parallèle avec la LED,
  pour un signal à la fois visuel et sonore.
- Création des fonctions `dot(int nb)` et `dash(int nb)` pour éviter de 
  répéter les mêmes lignes de code 3 fois.
- Utilisation de variables (`ledPin`, `buzzer`) pour faciliter la 
  modification des pins sans toucher à tout le code.

## 🧩 Difficultés rencontrées
- **Buzzer et LED en parallèle** : nous avons d'abord essayé de créer des 
  fonctions séparées `dot_buzz()` et `dash_buzz()` pour le buzzer. 
  Le problème était que la LED finissait de clignoter avant que le buzzer 
  ne sonne, car les deux s'exécutaient l'un après l'autre et non en même 
  temps. Nous avons résolu ce problème en contrôlant directement la LED 
  et le buzzer dans les mêmes fonctions `dot()` et `dash()`, avec les 
  deux `digitalWrite()` côte à côte.
# C++ Library Management System

## Project Overview

This project is a **Library Management System** developed in C++. It provides an object-oriented simulation of a library containing different types of books (novels, poetry collections, plays, albums, comics, etc.) and the associated functionalities to manage them. Users (referred to as *Adherents*) can borrow and return books, and the system handles internal data structures for organizing and searching through these items.

The members of this project were : DJERIDI Rania, AMIRI Afek, AMAKRANE Ghada and CARLIN Esteban.
The project was developed as part of a coursework at Ecole Centrale Marseille. The content is mostly in french.

---

## Features

- Fully object-oriented architecture using inheritance and polymorphism
- Representation and management of various literary formats:
  - `Roman` (Novel)
  - `Recueil_Poesie` (Poetry Collection)
  - `Piece_Theatre` (Play)
  - `Album` (Picture Book)
  - `BD` (Comic Book)
- User account management via the `Adherent` class
- Centralized library control through the `Bibliotheque` class
- Book collection management using the `ListeLivres` class (internally structured as a linked list via `Noeud`)
- Book base class: `Livre`, from which all types inherit
- Custom exception handling through `NotFoundException`
- Clearly separated interface and implementation:
  - Header files (`.h`)
  - Source files (`.cpp`)

---
```
C++-Project/
├── src/
│   ├── Adherent.cpp
│   ├── Adherent.h
│   ├── Album.cpp
│   ├── Album.h
│   ├── BD.cpp
│   ├── BD.h
│   ├── Bibliotheque.cpp
│   ├── Bibliotheque.h
│   ├── ListeLivres.cpp
│   ├── ListeLivres.h
│   ├── Livre.cpp
│   ├── Livre.h
│   ├── main.cpp
│   ├── Noeud.cpp
│   ├── Noeud.h
│   ├── NotFoundException.h
│   ├── Piece_Theatre.cpp
│   ├── Piece_Theatre.h
│   ├── Recueil_Poesie.cpp
│   ├── Recueil_Poesie.h
│   ├── Roman.cpp
│   ├── Roman.h
├── .project
├── .cproject
```
---

## Contributors

- **DJERIDI Rania**
- **AMIRI Afek**
- **AMAKRANE Ghada**
- **CARLIN Esteban**

---

## Compilation

To compile the project, ensure you have a C++ compiler (like `g++`) and run:

```bash
g++ src/*.cpp -o bibliotheque_app
```

Then execute:
./bibliotheque_app

## License
This project is released for educational purposes and does not carry any specific license.

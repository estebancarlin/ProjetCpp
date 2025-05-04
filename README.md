# C++ Library Management System

## Project Overview

This project is a **Library Management System** developed in C++. It provides an object-oriented simulation of a library containing different types of books (novels, poetry collections, plays, albums, comics, etc.) and the associated functionalities to manage them. Users (referred to as *Adherents*) can borrow and return books, and the system handles internal data structures for organizing and searching through these items.

The project was developed as part of a coursework at Ecole Centrale Marseille. The content is mostly in french.

---

## Features

- Object-oriented design with inheritance and polymorphism
- Management of various book types:
  - `Roman` (Novel)
  - `Recueil_Poesie` (Poetry Collection)
  - `Piece_Theatre` (Play)
  - `Album` (Picture Book)
  - `BD` (Comic Book)
- User (Adherent) management
- A `Bibliotheque` class to manage the global system
- A `ListeLivres` class to organize books
- Exception handling via `NotFoundException`
- Structured into header (`.h`) and implementation (`.cpp`) files

---

## Project Structure
C++-Project/
├── src/
│ ├── Adherent.cpp
│ ├── Adherent.h
│ ├── Album.cpp
│ ├── Album.h
│ ├── BD.cpp
│ ├── BD.h
│ ├── Bibliotheque.cpp
│ ├── Bibliotheque.h
│ ├── ListeLivres.cpp
│ ├── ListeLivres.h
│ ├── Livre.cpp
│ ├── Livre.h
│ ├── main.cpp
│ ├── Noeud.cpp
│ ├── Noeud.h
│ ├── NotFoundException.h
│ ├── Piece_Theatre.cpp
│ ├── Piece_Theatre.h
│ ├── Recueil_Poesie.cpp
│ ├── Recueil_Poesie.h
│ ├── Roman.cpp
│ ├── Roman.h
├── .project
├── .cproject

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

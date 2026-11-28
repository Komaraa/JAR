# ADR-001 - Gestion des dépendances

Date : 2026-11-25

## Contexte

Le projet Robot Supervisor utilise plusieurs
bibliothèques externes :

- Catch2
- Drogon
- SQLite

Nous souhaitons éviter la gestion manuelle
des dépendances.

## Décision

Utiliser vcpkg comme gestionnaire de paquets.

## Conséquences

Positives :

- intégration simple avec CMake
- installation reproductible
- compatible GitHub Actions

Négatives :

- dépendance supplémentaire dans
  l'environnement développeur

# ADR-001 - Environnement de compilation

## Décision

Le projet est compilé en x64 avec MSVC 2022.

## Justification

- Compatibilité avec vcpkg
- Compatibilité avec Drogon
- Alignement avec les environnements modernes Windows
- Réduction des problèmes de dépendances

## Conséquence

Les commandes CMake doivent être exécutées
dans un environnement Visual Studio x64.

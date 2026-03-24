Arduino

Les pins 0 et 1 sont réservé pour la communication.
il ne faut pas brancher les moteurs pas a pas sur ces 2 outputs.
Ce que je ne savais pas lors de la fabrication des boites.
La premiere version des boites indique 0123 4567 891011
Il faut plutôt utiliser 12 13 2 3 - 4 5 6 7 - 8 9 10 11

Chaque moteur pas a pas consomme 240ma (en arret ou en marche)
Le Arduino peut délivrer 500ma Max (fuse)
On peut donc utiliser 2 moteur avec le 5v du USB.
Si on a 3 moteurs, il faut impérativement brancher l'alimentation externe (7 a 12 volts dc)
Le régulateur de courant (qui fera descendre le voltage a 5v) sur le Arduino est de 1 ampere maximum.

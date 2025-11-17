# Wolf3d

Wolf 3D is a CSFML reproduction of the game **Wolfenstein 3D**, a 3D first-person shooter (FPS) based on the raycating principle.

**Installation**

```
git clone git@github.com:alyciaasli/mayline-kevin-alycia-wolf3d.git

cd mayline-kevin-alycia-wolf3d.git

make
```

**Usage**

```
./wolf3d [map_file]
```
You can find already configured maps in the map/ folder or you can create them yourself.

**Maps**

Example of map:

#width: 10\
#height: 10\
1111111111\
100000P001\
1022200001\
1020020001\
1022200001\
100000E001\
1000333001\
10E0303001\
100000E001\
1111111111

|   Symbol  |     Meaning   |
|-----------|-------------------|
|   `P` |   Player position |
|   `E` |   Enemies position    |
|   `1` |   Map outlines    |
|   `2` |   Define a wall   |

**Contrôles**

|   Commandes   |   Signification   |
|-----------------------|-------------------------------|
|   `Z` or top arrow    |   move forward    |
|   `Q` or left arrow   |   turn left   |
|   `S` or down arrow   |   move backward   |
|   `D` or right arrow  |   turn right  |
|   Left click  |   shoot   |
|   Escape  |   exits the game and returns to the menu  |
|   `L` |   enable/disable the player's flashlight  |
|   `V` |   Update the player's speed (speed up/slow down)  |

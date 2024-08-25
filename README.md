# Snake-Water-Gun Game

This project is a simple console-based Snake-Water-Gun game implemented in C. It simulates a game between a user and the computer, where each player can choose between "snake", "water", or "gun". The game then decides the winner based on standard rules.

## Game Rules

- **Snake vs Water**: Snake drinks the water, Snake wins.
- **Water vs Gun**: Gun sinks in water, Water wins.
- **Gun vs Snake**: Gun shoots the snake, Gun wins.
- **Same choices**: It's a draw.

## How the Game Works

1. The computer randomly selects one of the three options: Snake (`s`), Water (`w`), or Gun (`g`).
2. The user inputs their choice.
3. The program then compares the user's choice with the computer's choice to determine the outcome (win, lose, or draw).

## Technologies Used

- **C**: The programming language used to implement the game logic.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/snake-water-gun-game.git
2. Navigate to the project directory:
   ```bash
   cd snake-water-gun-game
3. Compile the code using a C compiler:
   ```bash
   gcc -o snake_water_gun snake_water_gun.c
4. Run the executable:
   ```bash
   ./snake_water_gun

Usage
1. Run the program.
2. You will be prompted to choose s for Snake, w for Water, or g for Gun.
3. The program will display your choice, the computer's choice, and the result of the game.

File Structure
# snake_water_gun.c: Main C file containing the Snake-Water-Gun game implementation.

# Example Output
```bash
Enter s for snake, w for water, g for gun
s
You chose s and computer chose w : You win!

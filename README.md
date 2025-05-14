# Game-of-Life
Game of Life in C++
# Overview
This C++ project implements Conway's Game of Life, a cellular automaton where cells evolve based on simple rules over a 20x20 grid. The simulation follows these rules: a live cell with 2 or 3 live neighbors survives, a dead cell with exactly 3 live neighbors becomes alive, and all other cells die or stay dead. The program features an interactive menu, customizable initial cell states, and options to reset or display the grid, making it an engaging educational tool.

# Features

- Grid Simulation: 20x20 grid where cells are represented by * (alive) or   (dead).
- Evolution Rules: Implements Conway's rules for next-generation calculations based on neighbor counts.
- Interactive Menu: Offers options to start, display, reset, or exit the game.
- Input Validation: Ensures valid input for cell indices (0-19) and generation counts.
- Visual Output: Clear console display of each generation's state.

# Usage
Interact with the Game of Life through this step-by-step process:

- Compile and Run the Program:

  - Compile the code using a C++ compiler (e.g., g++ Game_of_Life.cpp -o game).
  - Run the executable (e.g., ./game on Linux/Mac or game.exe on Windows).


- Navigate the Menu:

  - Upon starting, select an option by entering a letter (a-d):
    - a: Start a new game with custom initial living cells.
    - b: Display the current grid state.
    - c: Reset the grid to all dead cells.
    - d: Exit the program with a farewell message.




- Start a Game (Option a):

  - Enter the number of initial living cells (must be positive).
  - For each cell, input row and column indices (0-19).
  - Specify the number of generations to simulate (must be positive).
  - Watch the grid evolve, with each generation displayed after the update.


- Additional Actions:

  - Use b to view the current grid anytime.
  - Use c to reset and start fresh.
  - Repeat menu selection until choosing d.



- Example Session:
  ``` bash
  welcome to the game of life!
  the boardgame 20x20
  choose one option from the following:
  a) start the game
  b) display the cells
  c) reset the cells
  d) exit
  a
  enter how many cells to be alive
  3
  enter the index of cell no. 1 to be alive
  1 1
  You entered the cell of index: 1 1
  enter the index of cell no. 2 to be alive
  1 2
  You entered the cell of index: 1 2
  enter the index of cell no. 3 to be alive
  2 1
  You entered the cell of index: 2 1
  please enter the number of generations u want:
  5
  the universe after entering the living cells:
    * *    
  *        
           
  ...
  the generation no. 5
    *      
           
           
  ...
  choose one option from the following:
  a) start the game
  b) display the cells
  c) reset the cells
  d) exit
  d
  Thanks for playing the game of life, I hope u enjoyed it :)
  ```

# Limitations

- Fixed 20x20 grid size, limiting scalability.
- Console-based output with no graphical interface.
- Input errors require manual correction; no advanced error recovery.
- Evolution stops after the specified number of generations; no continuous mode.

# License
This project is licensed under the MIT License. See the LICENSE file for details.

# Authors

- Mariam Hesham - [mariam0905]
- Computer Science Student at Cairo University

# Acknowledgments

- Developed as an educational project for Cairo University, building on skills from prior assignments like InvestEase and machine simulators.
- Inspired by Conway's Game of Life and guided by university instructors.


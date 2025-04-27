# 🧩 Hangman Game

A classic **Hangman Game** where players can guess letters to uncover hidden words across different categories. It is built in **C**, designed for simplicity and entertainment.

---

## 🛠️ **Technologies Used** 💻

This project uses several technologies to provide a seamless and engaging user experience. Below are the key technologies used to build the Hangman game:

- **C Programming Language** 🖥️  
  The game is written in the C programming language for simplicity and efficiency in handling the core logic.

- **Standard C Libraries** 📚  
  - `stdio.h`: Used for input and output operations.
  - `stdlib.h`: Provides functions for memory allocation and process control.
  - `time.h`: Used for random number generation to select random words from files.
  - `string.h`: Functions for manipulating strings, including handling word comparisons.
  - `ctype.h`: Functions for character handling, such as converting characters to lowercase.

- **Windows API** 🖥️  
  `windows.h` is used to clear the screen between game turns to improve the user interface experience by resetting the screen.

---

## 🔧 Features
- **Categories**: Choose from various categories like Animals, Sports, Occupations, Science, and Countries.
- **Word Guessing**: Guess letters to uncover the word.
- **Hangman Drawing**: As you make incorrect guesses, a hangman figure is drawn to show your progress.
- **Multiple Attempts**: You have 6 chances to guess the word correctly.

---

## ⚙️ How to Play
1. **Start the Game**: Upon running, you will be prompted to choose a category.
2. **Guess Letters**: After selecting the category, try to guess the word by entering letters. 
3. **Incorrect Guesses**: Each incorrect guess will result in a part of the hangman being drawn.
4. **Win or Lose**: If you guess all the letters before the hangman is fully drawn, you win. If the hangman is fully drawn, you lose, and the word is revealed.

---

## 📸 **Screenshots** 📷

Here are some screenshots showcasing different stages of the Hangman game:

 - 1. **Category Selection**  
   This screenshot shows the main menu, where players can select a category (Animals, Sports, Occupations, Science, Countries) or choose to exit the game.  
   ![image](https://github.com/user-attachments/assets/6b3fd4ae-1b3b-455e-88ca-7f131307d2c5)

 - 2. **Gameplay**  
   Once a category is selected, the user is shown blanks representing the word to guess. The player begins guessing letters.  
   ![image](https://github.com/user-attachments/assets/e233a276-ea3d-4805-b40e-e8c2baece5ab)

---

## 🚀 How to Run
### Requirements:
- **C Compiler** (e.g., GCC)
  
### Steps:
- 1. **Download the Files**: Ensure you have the source code and the `.txt` files for each category (e.g., `animals.txt`, `sports.txt`, etc.).
- 2. **Compile the Code**:
   ```bash
   gcc hangman.c -o hangman
- 3. **Run the Game**:
   ````bash
   .\hangman
- 4. **Follow the Prompts**: Choose a category, then guess letters to uncover the word.

---

## 🧩 **Future Enhancements** 🔮

The current version of the game includes the core functionality of a text-based Hangman game with categories like Animals, Sports, Occupations, Science, and Countries. In the future, I aim to expand the game with the following exciting features:

- 1. **Dynamic Word Selection** 🔄
   - Allow players to add custom words to a specific category (Animals, Sports, etc.). This would make the game even more interactive and personalized.
   
   **Implementation:** Users can add words via a text input prompt, which will be stored in a respective category file.

- 2. **Difficulty Levels** 🎮
   - Introduce different difficulty levels: Easy, Medium, and Hard. Each level will vary the number of attempts allowed and the length of the word.

   **Implementation:** Difficulty selection at the beginning of the game with distinct settings for word length and guesses.

- 3. **Timer for Guesses** ⏰
   - Add a countdown timer for each player's guess, making the game more challenging. The player will have a limited amount of time (e.g., 30 seconds) to make each guess.

   **Implementation:** Implement a countdown timer that triggers a time limit for each guess. If the player doesn't make a guess in time, they lose that round.

- 4. **Graphical User Interface (GUI)** 💻
   - Transition from a text-based console to a graphical user interface (GUI) for a more immersive experience. The GUI will show the hangman figure, guessed letters, and other elements visually.

   **Implementation:** Integrate a library like SDL, SFML, or GTK for creating a graphical interface that represents the game and player actions visually.

- 5. **Two Player Mode** 👫
   - Introduce a two-player mode where two players can take turns guessing the word. The game will alternate between players and the first one to guess the word wins.

   **Implementation:** Player 1 selects a word, and Player 2 guesses the letters in it. If Player 2 fails, Player 1 wins, and vice versa.

- 6. **High Score Tracking** 🏆
   - Maintain a high score leaderboard to track the best-performing players, showing the number of correct guesses and their success rate across different categories.

   **Implementation:** Track the highest score for each category, save it to a file, and display it when the game finishes.

- 7. **Multiplayer Online Mode** 🌍
   - Allow players to compete with others online. This could include a matchmaking system and leaderboards.

   **Implementation:** This would involve network programming and creating a server-client setup using libraries like sockets for online connectivity.

- 8. **Sound Effects & Music** 🎶
   - Add background music and sound effects for actions like correct and incorrect guesses, game over, and the win/lose outcome.

   **Implementation:** Integrate sound effects with libraries like SDL_mixer or OpenAL for a more engaging experience.

---

## 💬 Feedback

Your feedback is important to us! If you have any suggestions or encounter any issues, please feel free to open an issue in the GitHub repository or reach out to us directly.

Thank you for playing and happy guessing! 🎉


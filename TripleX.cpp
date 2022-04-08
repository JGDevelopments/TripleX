#include <iostream>
#include <ctime> 

void PrintIntroduction (int Difficulty)
{
    // Hi, Thanks for reading the code! 
    // Welcome messages and theme 
    std::cout << "\n\nYou are a Brave and Courageous Night searching for the Princess who is locked in a deep, scary, dungeon.\n" "Enter the correct combination to continue to the level " << Difficulty;  
    std::cout << " Dungeon. ..Only you can save her..\n\n";
}

bool PlayGame (int Difficulty)
{  

    PrintIntroduction (Difficulty);
    // Declare 3 number sequence 
    const int CodeA = rand() % Difficulty + Difficulty; 
    const int CodeB = rand() % Difficulty + Difficulty; 
    const int CodeC = rand() % Difficulty + Difficulty; 

     
    const int CodeSum = CodeA + CodeB + CodeC; 
    const int CodeProduct = CodeA * CodeB * CodeC;  

    //Prints Sum and Product to terminal
        std::cout << std::endl; 
        std::cout << "There are three numbers in the code." <<std::endl;
        std::cout << "The codes add up to: " << CodeSum << std::endl;
        std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    // Stores Player Guess
    int GuessA, GuessB, GuessC;
        std::cin >> GuessA >> GuessB >> GuessC; 
    
     int GuessSum = GuessA + GuessB + GuessC;  
     int GuessProduct = GuessA * GuessB * GuessC; 

    // Check if player's guess Is correct 
     if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
     {
        std::cout << " Congratulations You Completed The Trial! Keep Going !";
        return true;
     }
     else 
     {
         std::cout << " You have failed. Dont Give Up! ";
         return false; 
     }
}


int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1; 
    const int MaxLevel = 5; 

    while (LevelDifficulty <= MaxLevel) //Loop game until all levels will completed 
    {
        
        bool bLevelComplete = PlayGame(LevelDifficulty); 
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards the buffer 
    
        if (bLevelComplete)
        {
            ++LevelDifficulty; 
        }
        


    }
    std::cout << " !! You Have Saved The Princess !! ";
    return 0;
}

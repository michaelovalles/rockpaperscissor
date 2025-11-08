//componets gather here

//ask players to choose 
#include <memory>
#include "character.cxx"
#include "collision.cxx"
#include "bot.cxx"
#include "input.cxx"
#include "menu.cxx"
#include "randomNumGen.cxx"
void playground()
{//error occurs 
//free(): double free detected in tcache 2 Aborted (core dumped)
//after loop doesnt continue.
for (int i = 0; i < 3; i++)
{
std::string input = stringInput();
Character* playerOne = choice(input);

std::string botInput = bot(randGen());
 Character* playerTwo = choice(botInput);

playerOne -> printName();
collision(playerOne, playerTwo);

//delete playerOne;
//delete playerTwo;
//playerOne = nullptr;
//playerTwo = nullptr;
}

}

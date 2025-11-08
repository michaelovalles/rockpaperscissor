
//accepts two pointers 

//takes in objects and checks collision.

/*players chooses objects between (rock, paper, and scissor)
 and checks collision/outcome.or) interacts. results in outcome printed.
*/
//#include "character.cxx"
void collision(Character* playerOne, Character* playerTwo)
{
std::cout << "PLAYER 1: "<< playerOne -> getAction() << " vs. PLAYER 2: ";
std::cout << playerTwo -> getAction() << std::endl;
	if (playerOne -> getAction() == playerTwo -> getAction())
	{
	std::cout << "Tie!\n";
	}

	if (playerOne -> getAction() == "Rock" && playerTwo -> getAction() == "Paper" || playerTwo -> getAction() == "Rock" && playerOne -> getAction() == "Paper")
	{
	std::cout << "Paper Wins!\n";
	}else if (playerOne -> getAction() == "Paper" && playerTwo -> getAction() == "Scissor" || playerTwo -> getAction() == "Paper" && playerOne -> getAction() == "Scissor")
	{
	std::cout << "Scissor Wins!\n";
	}else if (playerOne -> getAction() == "Scissor" && playerTwo -> getAction() == "Rock" || playerTwo -> getAction() == "Scissor" && playerOne -> getAction() == "Rock")
	{
	std::cout << "Rock Wins!\n";
	} else {
	if (playerOne -> getAction() == "Default" || playerTwo -> getAction() == "Default")
	{
	std::cout << "Error Choosing Character\n"; 
	}
	}
	
} 

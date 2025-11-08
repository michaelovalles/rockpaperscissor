//This program choose a number (1,2,3) randomly
#include <chrono>
#include <random>

int randGen()
{
std::mt19937 engine(std::chrono::high_resolution_clock::now().time_since_epoch().count());
std::default_random_engine generator;


std::uniform_int_distribution<int> distribution(1,3);
int dice_roll = distribution(engine);
return dice_roll;
}

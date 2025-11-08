//#include "character.cxx"
//#include <memory>
// will me destorying pointer inside cause an error?

//takes in input and of choice, results in action
//static std::unique_ptr<Character> choice( std::string pick)
 Character* choice(std::string pick)
{
//error with release or sharing object reverts to orginal

//std::unique_ptr<Character> chara;
static Character chara; // = new Character;

//std::unique_ptr<Rock> rock;
static Rock rock; // = new Rock; 

//worked but deleted outside of this function
static Paper paper; // = new Paper;
//Paper* sendPaper = &paper;
//std::unique_ptr<Paper> paper;

static Scissor scissor;// = new Scissor;
//std::unique_ptr<Scissor> scissor;
if (pick == "rock") 
{

 return &rock;

} else if (pick == "paper")
{

return &paper;

} else if (pick == "scissor")
{

return &scissor;

} 

return &chara; 
}

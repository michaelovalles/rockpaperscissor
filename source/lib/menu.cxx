
 Character* choice(std::string pick)
{

static Character chara; 
static Rock rock; 
static Paper paper;
static Scissor scissor;

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

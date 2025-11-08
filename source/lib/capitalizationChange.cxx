//this program take in a string and converst all uppercase to lowercase
//include <iostream>
//#include <string>

std::string toLowercase(std::string editString)
{
std::string lowerWord;
int i = 0;
for (auto lowercase : editString)
{

if (lowercase >= 65 && lowercase <= 90)
{ 
lowercase += 32;
lowerWord.push_back(lowercase);
} else {
lowerWord.push_back(lowercase);
}
}
return lowerWord; 

} 


std::string toUppercase(std::string editString)
{
std::string lowerWord;
int i = 0;
for (auto lowercase : editString)
{

if (lowercase >= 97 && lowercase <= 122)
{ 
lowercase -= 32;
lowerWord.push_back(lowercase);
} else {
lowerWord.push_back(lowercase);
}
}
return lowerWord; 

} 




class Character
{
public:
	virtual
	void printName() const
	{
	std::cout << "Hello World!\n";
	}

	virtual 
	std::string getAction() const
	{
	std::string action = "default";
	return action;
	}

	};

class Rock : public Character 
{
public:
	void printName() const override 	
	{
	std::cout << "I'm Rock!\n";
	
	}
	
	std::string getAction() const override 
	{
	std::string action = "Rock";
	return action;
	}

};

class Paper : public Character
{
public: 

	void printName() const override
	{
	std::cout << "I'm Paper! \n";
	}
	
	
	std::string getAction() const override
	{
	std::string action = "Paper";
	return action;
	}


};
class Scissor : public Character
{
public: 

	void printName() const override
	{
	std::cout << "I'm Scissor! \n";
	}

	
	std::string getAction() const override
	{
	std::string action = "Scissor";
	return action;
	}

};

void callObj(const Character& choice)
{
std::cout << choice.getAction() << std::endl;
}


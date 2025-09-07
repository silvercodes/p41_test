
class User
{
private:
	int id{};
	std::string email;
	int age{18};

public:
	User(const std::string& email, int age):
		email{email},
		age{age}
	{}
};


class User
{
private:
	int id{};
	std::string email;

public:
	User(const std::string& email):
		email{email}
	{}
};

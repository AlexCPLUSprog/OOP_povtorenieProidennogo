#pragma once
#include <string>

static int ID_SUBSCRIBER = 0;

class Subscriber
{
public:
	Subscriber(const std::string& name, const std::string& bookWanted);

	const std::string& getName() const;
	const std::string& getWantedBook() const;
	int getId() const;

private:
	std::string _name;
	std::string _bookWanted;
	int _id;
};


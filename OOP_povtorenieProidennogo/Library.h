#pragma once
#include "ILibrary.h"
#include <string>
#include "Book.h"
#include <map>
#include <queue>

class Library : public ILibrary
{
public:
	Library(const std::string& name);
	void addBook(const Book& book) override;
	void modifyBook(int key, const std::string& newName) override;
	void removeBook(int key) override;

	void pop();

	void registerSubscriber(const Subscriber& sub) override;

private:
	std::string _name;
	std::map<int, Book> _books;
	std::queue<Subscriber> _subs;
	int _idCounterBooks;
};


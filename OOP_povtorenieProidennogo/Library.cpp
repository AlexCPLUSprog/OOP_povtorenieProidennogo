#include "Library.h"

Library::Library(const std::string& name): _name(name), _idCounterBooks(0){}

void Library::addBook(const Book& book) {
	_books.insert({ _idCounterBooks, book });
	_idCounterBooks++;
}

void Library::modifyBook(int key, const std::string& newName) {
	auto it = _books.find(key);
	it->second.setAuthor(newName);
}

void Library::removeBook(int key) {

}

void Library::pop() {
	// queue subs
	// map books
	Subscriber& sub = _subs.front();
	std::string subWantedBook = sub.getWantedBook();
	for (auto it = _books.begin(); it != _books.end(); it++) {
		if (it->second.getTitle() == subWantedBook) {
			_books.erase(it);
			_subs.pop();
			return;
		}
	}
	_subs.pop();
}

void Library::registerSubscriber(const Subscriber& sub) {

}

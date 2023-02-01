#include "Book.h"

Book::Book(int yearIssue, const std::string& author, const std::string& title, const std::string& content): _yearIssue(yearIssue), _author(author), _title(title), _content(content){}

const std::string& Book::getAuthor() const {
	return _author;
}

const std::string& Book::getTitle() const {
	return _title;
}

const std::string& Book::getContent() const {
	return _content;
}

int Book::getYearIssue() {
	return _yearIssue;
}


void Book::setAuthor(const std::string& author) {
	_author = author;
}

void Book::setTitle(const std::string& title) {
	_title = title;
}

void Book::setContent(const std::string& content) {
	_content = content;
}

void Book::setYearIssue(int year) {
	_yearIssue = year;
}

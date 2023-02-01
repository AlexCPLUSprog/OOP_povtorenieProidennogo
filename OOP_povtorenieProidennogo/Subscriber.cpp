#include "Subscriber.h"

Subscriber::Subscriber(const std::string& name, const std::string& bookWanted) : _name(name), _bookWanted(bookWanted) , _id(ID_SUBSCRIBER) {
    ID_SUBSCRIBER++;
}

const std::string& Subscriber::getName() const {
    return _name;
}

const std::string& Subscriber::getWantedBook() const {
    return _bookWanted;
}

int Subscriber::getId() const {
    return _id;
}

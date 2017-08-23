#include "backend.hpp"

BackEnd::BackEnd(QObject* parent): QObject(parent) {

}

QString BackEnd::userName() {
    return _userName;
}

void BackEnd::setUserName(const QString &userName) {
    if(userName == _userName) {
        return;
    }

    _userName = userName;
    emit userNameChanged();
}
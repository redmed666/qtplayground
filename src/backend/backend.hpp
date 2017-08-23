#pragma once

#include <QObject>
#include <QString>
#include <QtQuick>

class BackEnd: public QObject {
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

    public:
        explicit BackEnd(QObject* parent = nullptr);

        QString userName();
        void setUserName(const QString &username);

    signals:
        void userNameChanged();

    private:
        QString _userName;
};

class ApplicationData: public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE QDateTime getCurrentDateTime() const {
        return QDateTime::currentDateTime();
    }
};
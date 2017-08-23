#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "backend/backend.hpp"
#include <iostream>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    ApplicationData data;
    qmlRegisterType<BackEnd>("io.qt.examples.backend", 1, 0, "BackEnd");
    QQmlApplicationEngine* engine = new QQmlApplicationEngine;
    engine->rootContext()->setContextProperty("applicationData", &data);
    engine->load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    return app.exec();
}
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "backend/backend.hpp"
#include <iostream>
int main(int argc, char *argv[])
{
    std::cout << "Heyyy" << std::endl;
    std::string test = "test";
    std::cout << test << std::endl;
    
    QGuiApplication app(argc, argv);
    ApplicationData data;
    qmlRegisterType<BackEnd>("io.qt.examples.backend", 1, 0, "BackEnd");
    QQmlApplicationEngine* engine = new QQmlApplicationEngine;
    engine->rootContext()->setContextProperty("applicationData", &data);
    engine->load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    return app.exec();
    
    /*
    QGuiApplication app(argc, argv);
    QQuickView view;

    ApplicationData data;
    view.rootContext()->setContextProperty("applicationData", &data);

    view.setSource(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    view.show();
    */
}
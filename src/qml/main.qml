import QtQuick 2.6
import QtQuick.Controls 2.0
import io.qt.examples.backend 1.0

ApplicationWindow {
    id: root
    width: 300
    height: 480
    visible: true
    title: qsTr("My app")

    MyButton {
    }

    MyMenuBar {
    }

    BackEnd {
        id: backend
    }

    TextField {
        text: backend.userName
        placeholderText: qsTr("User name")
        anchors.centerIn: parent

        onTextChanged: backend.userName = text
    }

    Rectangle {
        id: rect1
        x:12; y:12

        width: 70; height: 80
        color: "lightsteelblue"
        MouseArea {
            id: area
            width: parent.width
            height: parent.height
            onClicked: rect2.visible = !rect2.visible
        }
    }

    Rectangle {
        id: rect2
        x: 112; y: 12
        width: 70; height: 70
        border.color: "lightsteelblue"
        border.width: 4
        radius: 8
    }
}
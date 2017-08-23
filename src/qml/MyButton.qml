import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Window 2.2

Rectangle {
    id: root
    // export button properties
    property alias text: label.text
    signal clicked

    width: 116; height: 26
    color: "lightsteelblue"
    border.color: "slategrey"
    Text {
        id: label
        anchors.centerIn: parent
        text: "Start"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }
    Button {
        text: qsTr("Hello World")
        onClicked: {
            status.text = "Button clicked!"
        }
    }

    Text {
        id: status
        x: 12; y: 90
        width: 116; height: 26
        text: "waiting..."
    }
}



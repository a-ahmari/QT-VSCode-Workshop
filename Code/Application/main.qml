import QtQuick 2.15
import QtQuick.Window 2.15

import Wrapper.com 1.0

Window {
    visible: true
    width: 350
    height: 80
    title: qsTr("Simple Qt")

    Wrapper{
        id: wrapper
    }

    Rectangle
    {
        anchors.fill: parent
        color: "#446FA0"

        Text {
            id: message
            color: "#FFFFFF"
            anchors.centerIn: parent
            text: wrapper.message
        }

        MouseArea{
            acceptedButtons: Qt.LeftButton | Qt.RightButton
            onClicked: {
                if (mouse.button == Qt.LeftButton)
                    message.text = qsTr("wrapper.message")
            }
        }
    }
}

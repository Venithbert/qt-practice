//4 Made this file with receiver.h > onEvent right click on onEvent and refactor > add definition in receiver.cpp

#include "receiver.h"

Receiver::Receiver(QObject *parent)
    : QObject{parent}
{}

void Receiver::onEvent(QString message)
{
    qInfo() << "Executing slot inside" << this;  //5
    qInfo() << "Message received" << message;



}

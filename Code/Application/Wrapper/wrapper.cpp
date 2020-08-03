#include "wrapper.h"

wrapper::wrapper(QObject *parent)
    : QObject(parent){ }

wrapper::~wrapper() = default;

QString wrapper::message(){
    return "Consuming C++ Objects Including Unit Testing in Qt!";
}

void wrapper::setMessage(const QString &message){
    _message = message;
    emit messageChanged();
}

double wrapper::DoubleTheValue(double &input){
    return input * 2;
}
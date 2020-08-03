#ifndef WRAPPER_H
#define WRAPPER_H

#include <QObject>
//#include "core.h"

class wrapper : public QObject
{
    Q_OBJECT

public:
    explicit wrapper(QObject *parent = nullptr);
    ~wrapper() override;

    QString message();
    double DoubleTheValue(double &input);

    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged);

    void setMessage(const QString &message);

signals:
    void messageChanged();

private:
    QString _message;
};

#endif

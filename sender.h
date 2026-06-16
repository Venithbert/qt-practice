//1 create receiver and sander header file

#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = nullptr);

signals:
    void event(QString message);  //2 create signal

};

#endif // SENDER_H

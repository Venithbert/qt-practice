#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QDebug>

class Receiver : public QObject
{
    Q_OBJECT
public:
    explicit Receiver(QObject *parent = nullptr);

public slots:
        void onEvent(QString message); //3  made our slot and QString has same name with its signal "message"
        void onButtonClicked();
};

#endif // RECEIVER_H

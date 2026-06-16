#include "main.h"
#include "ui_main.h"


#include <QApplication>

//6
#include "sender.h"
#include "receiver.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Main w;
    w.show();

    return a.exec();
}



Main::Main(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Main)
{
    ui->setupUi(this);

    //6 initialize classes > connect them > use emit to trigger it
    Sender *sender = new Sender();
    Receiver *receiver = new Receiver();

    QObject::connect(sender, &Sender::event, receiver, &Receiver::onEvent);

    emit sender->event("hello world");

    //3t
    m_timer = new QTimer();
    QObject::connect(m_timer, &QTimer::timeout, this, &Main::onTimeout); // signal, slot
    m_timer->start(1000);



}

Main::~Main()
{
    delete ui;
}

void Main::onTimeout() //2t refactored onTimeout
{
    //4t
    m_counter++;
    ui->lcdNumber->display(m_counter); //5t for this to work go main.ui and add lcdNumber
}

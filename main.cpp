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

}

Main::~Main()
{
    delete ui;
}

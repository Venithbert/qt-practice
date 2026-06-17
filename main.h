#ifndef MAIN_H
#define MAIN_H

#include <QWidget>
#include <QTimer> //1t


QT_BEGIN_NAMESPACE
namespace Ui {
class Main;
}
QT_END_NAMESPACE

class Main : public QWidget
{
    Q_OBJECT

public:
    explicit Main(QWidget *parent = nullptr);
    ~Main() override;

public slots: //1t
    void onTimeout(); //2t refactor this

private:
    Ui::Main *ui;

    //1t
    QTimer *m_timer;
    int m_counter = 0;
};
#endif // MAIN_H

#ifndef MAIN_H
#define MAIN_H

#include <QWidget>

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

private:
    Ui::Main *ui;
};
#endif // MAIN_H

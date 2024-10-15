#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onButtonNumberClick();

    void on_Button_dot_clicked();

    void on_Button_erase_clicked();

    void calculate();

    void onOperatorClick();

    double doubleOp(double a, double b, QString op);

    double singleOp(double a, QString op);

    virtual void keyPressEvent(QKeyEvent *e);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

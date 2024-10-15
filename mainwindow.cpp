#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include "QKeyEvent"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Button_0, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));
    connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(onButtonNumberClick()));

    connect(ui->Button_plus, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_minus, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_multi, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_divide, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_percent, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_reverse, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_sqrt, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_square, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_plus_minus, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_equal, SIGNAL(clicked()), this, SLOT(onOperatorClick()));

    connect(ui->Button_CE, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
    connect(ui->Button_C, SIGNAL(clicked()), this, SLOT(onOperatorClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonNumberClick()
{
    QString display = ui->display->text();
    QString num = qobject_cast<QPushButton*>(sender())->text();
    ui->display->setText(display + num);
    // ui->statusbar->showMessage(num + " num click");

}

void MainWindow::on_Button_dot_clicked()
{
    QString display = ui->display->text();
    QString num = qobject_cast<QPushButton*>(sender())->text();
    if(!display.contains(".")){
        ui->display->setText(display+num);
    }
}


void MainWindow::on_Button_erase_clicked()
{
    QString display = ui->display->text();
    QString display2;
    int len  = display.length();
    for(int i=0;i<len - 1;i++){
        display2.append(display[i]);
    }
    ui->display->setText(display2);
}

void MainWindow::calculate()
{

}

void MainWindow::onOperatorClick()
{
    static QList<QString> stack = {"0"};
    QString op = qobject_cast<QPushButton*>(sender())->text();
    if(op == "CE"){
        ui->display->setText("");
        //调试
        if(stack.size()==1)
            ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0]);
        else
            ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0] + stack[1]);
        return;
    }
    if(op == "C"){
        ui->display->setText("");
        stack = {"0"};
        //调试
        if(stack.size()==1)
            ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0]);
        else
            ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0] + stack[1]);
        return;
    }

    //调试
    if(stack.size()==1)
        ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0]);
    else
        ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0] + stack[1]);
    QString display = ui->display->text();
    double numerOnDisplay = display.toDouble();
    if(stack.size() == 1){
        if(op == "="){
            return;
        }
        //双目
        if(op == "+" ||op == "-"||op == "x"||op == "÷"){
            stack.append(op);
            stack[0] = QString::number(numerOnDisplay);
            ui->display->setText("");
        }else{
            //单目
            double res = MainWindow::singleOp(numerOnDisplay, op);
            stack[0]  = QString::number(res);
            ui->display->setText(stack[0]);
        }
    }else{
        if(op == "="){
            op = stack[1];
            stack.pop_back();
            if(op == "+" ||op == "-"||op == "x"||op == "÷"){
                double number = stack[0].toDouble();
                double res = MainWindow::doubleOp(number, numerOnDisplay, op);
                stack[0]  = QString::number(res);
            }
            ui->display->setText(stack[0]);
        }else if(op == "+" ||op == "-"||op == "x"||op == "÷"){
            stack.pop_back();
            stack.append(op);
            double number = stack[0].toDouble();
            double res = MainWindow::doubleOp(number, numerOnDisplay, op);
            stack[0]  = QString::number(res);
            ui->display->setText("");
        }
        else{
            //单目
            double res = MainWindow::singleOp(numerOnDisplay, op);
            QString res_str = QString::number(res);
            ui->display->setText(res_str);
        }

    }
    //调试
    if(stack.size()==1)
        ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0]);
    else
        ui->statusbar->showMessage("size:"+ QString::number(stack.size())+ " stack:" + stack[0] + stack[1]);
}

double MainWindow::doubleOp(double a, double b, QString op)
{
    if(op == "+"){
        return a+b;
    }else if(op == "-"){
        return a-b;
    }else if(op == "x"){
        return a*b;
    }else if(op == "÷"){
        return a/b;
    }
    throw std::errc();
    return 0;
}

double MainWindow::singleOp(double a, QString op)
{
    if(op == "1/x"){
        return 1.0/a;
    }else if(op == "x²"){
        return pow(a,2);
    }else if(op == "√"){
        return sqrt(a);
    }else if(op == "%"){
        return a/100.0;
    }else if(op=="±"){
        return 0-a;
    }
    throw std::errc();
    return 0;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    int key = e->key();
    qDebug()<<key;
    if(key == Qt::Key_0){
        ui->Button_0->animateClick();
    }else if(key == Qt::Key_1){
        ui->Button_1->animateClick();
    }else if(key == Qt::Key_2){
        ui->Button_2->animateClick();
    }else if(key == Qt::Key_3){
        ui->Button_3->animateClick();
    }else if(key == Qt::Key_4){
        ui->Button_4->animateClick();
    }else if(key == Qt::Key_5){
        ui->Button_5->animateClick();
    }else if(key == Qt::Key_6){
        ui->Button_6->animateClick();
    }else if(key == Qt::Key_7){
        ui->Button_7->animateClick();
    }else if(key == Qt::Key_8){
        ui->Button_8->animateClick();
    }else if(key == Qt::Key_9){
        ui->Button_9->animateClick();
    }else if(key == Qt::Key_Plus){
        ui->Button_plus->animateClick();
    }else if(key == Qt::Key_Minus){
        ui->Button_minus->animateClick();
    }else if(key == 42){
        ui->Button_multi->animateClick();
    }else if(key == 47){
        ui->Button_divide->animateClick();
    }else if(key == 46){
        ui->Button_dot->animateClick();
    }else if(key == 16777221){
        ui->Button_equal->animateClick();
    }
}


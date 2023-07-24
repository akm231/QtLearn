#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include "student.h"
#include "teacher.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(500,500);
    QPushButton *botton = new QPushButton("下课");
    botton->setParent(this);
    Teacher *tr = new Teacher();
    Student *st = new Student();
//    connect(botton,QPushButton::clicked,tr,Teacher::classOver);
//    connect(tr,Teacher::classOverSig,st,Student::treat);
    connect(botton,QPushButton::clicked,tr,Teacher::classOverSig);
    connect(tr,Teacher::classOverSig,st,Student::treat);
}

Widget::~Widget()
{
    delete ui;
}


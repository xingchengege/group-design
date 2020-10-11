#include "schoolmessage.h"
#include<QDebug>
SchoolMessage::SchoolMessage(QWidget *parent) : QWidget(parent)
{
    this->resize(600,600);
    totall_major = new QScrollArea(this);
    totall_major->setGeometry(0,200,300,400);
    totall_major->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    totall_major->setWidgetResizable(true);
    con=new QWidget();
    name = new QLabel(this);
    t= new QLabel(con);
    label_211= new QLabel(this);
    label_985= new QLabel(this);
    label_double= new QLabel(this);
    label_first= new QLabel(this);
    web= new QLabel(this);
    name->setGeometry(0,0,300,100);
    label_first->setText("本科一批");
    label_first->setGeometry(0,100,100,50);
    label_211->setGeometry(100,100,50,50);
    label_985->setGeometry(150,100,50,50);
    label_double->setGeometry(200,100,50,50);
    web->setGeometry(0,150,300,50);
    t->setText("开设专业：");
    t->setGeometry(0,0,200,50);
    is_d=false;
    totall_major->show();
}
void SchoolMessage::SetMessage(college s){
    del();
    name->setText(QString::fromStdString(s.name()));
    if(s.is_211()){label_211->setText("211");label_211->show();}
    if(s.is_985()){label_985->setText("985");label_985->show();}
    if(s.is_double_first_class()){label_double->setText("双一流");label_double->show();}
    QString text = QString("院校官网：%1").arg(QString::fromStdString(s.web()));
    web->setText(text);
    majors = new QPushButton[s.major_num()];
    if(s.major_num()>=1)is_d=true;
    vector<string> open_major=s.totall_major();
    con->show();
    con->move(0,300);
    con->setMinimumSize(300,open_major.size()*30+40);
    totall_major->setWidget(con);
    for(int i=0;i<s.major_num();i++){
        majors[i].setParent(con);
        majors[i].setText(QString::fromStdString(open_major[i]));
        majors[i].setGeometry(25,40+30*i,250,30);
        majors[i].show();
        connect(majors+i,&QPushButton::clicked,
               [=]()
               {
                emit sigMajorMessage(QString::fromStdString(open_major[i]));
                }
               );
    }
}
void SchoolMessage::del(){
    if(is_d)delete [] majors;
};

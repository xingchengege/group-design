#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
int degree_s(const QString s1,const QString s2) {
    int d = 0;
    if (s1 == "A+")d = 6;
    if (s1 == "A") d = 5;
    if (s1 == "B+")d = 4;
    if (s1 == "B") d = 3;
    if (s1 == "C") d = 2;
    if (s1 == "D") d = 1;
    if (s2 == "A+") d = d * 10 + 6;
    if (s2 == "A") d = d * 10 + 5;
    if (s2 == "B+") d = d * 10 + 4;
    if (s2 == "B") d = d * 10 + 3;
    if (s2 == "C") d = d * 10 + 2;
    if (s2 == "D")d = d * 10 + 1;
    return d;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    producator_name=new QLabel(ui->page_start);
    producator_name->setText("制作者：\n\n刘星辰、孙亦刘");
    producator_name->setGeometry(1000,520,200,200);
    recommand_widget=new SchoolWidget(ui->function_widget);
    recommand_widget->hide();
    search_school_widget=new ProvinceWidget(ui->function_widget);
    search_school_widget->hide();
    search_major_widget=new MajorWidget(ui->function_widget);
    search_major_widget->hide();
    ui->stackedWidget->setCurrentWidget(ui->page_start);
    grade_message=new GetDialog;
    School = new SchoolMessage;
    Major = new MajorMessage;
    connect(grade_message, SIGNAL(sigOK()), this, SLOT(slotOK()));
    connect(grade_message, SIGNAL(sigCancel()), this, SLOT(slotCancel()));
    connect(ui->frame_2,SIGNAL(sigShowS(int)), this, SLOT(slotShowS(int)));
    connect(ui->frame_2,SIGNAL(sigShowP(int)), this, SLOT(slotShowP(int)));
    connect(ui->frame_2,SIGNAL(sigShowM(int)), this, SLOT(slotShowM(int)));
    connect(recommand_widget,SIGNAL(sigSchoolMessage(QString)), this, SLOT(slotSchoolMessage(QString)));
    connect(School,SIGNAL(sigMajorMessage(QString)), this, SLOT(slotShowMajor(QString)));
    connect(Major,SIGNAL(sigSchool(QString)), this, SLOT(slotSchoolMessage(QString)));
    connect(search_major_widget,SIGNAL(sigMajor(QString)), this, SLOT(slotShowMajor(QString)));
    connect(search_school_widget,SIGNAL(sigShowSchool(QString)), this, SLOT(slotSchoolMessage(QString)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_start_clicked()
{
    ui->page_start->hide();
    ui->page_function->show();
}

void Widget::on_pushButton_close_clicked()
{
    this->close();
}

void Widget::on_pushButton_return_clicked()
{
    ui->page_function->hide();
    ui->page_start->show();
}

void Widget::on_pushButton_recommand_clicked()
{
    grade_message->show();

}

void Widget::slotOK(){
   grade=grade_message->Getgrade();
   degree1=grade_message->Getdegree1();
   degree2=grade_message->Getdegree2();
   grade_message->close();
   vector<college>s1,s2,s3;
   int d=degree_s(degree1,degree2);
   user.recommend(d,grade,s1,s2,s3);
   recommand_widget->SetSchool(s1,s2,s3);
   search_major_widget->hide();
   search_school_widget->hide();
   recommand_widget->show();
   ui->frame_2->SetModel(0);
}

void Widget::slotCancel(){
    grade_message->close();
}

void Widget::slotShowS(int num){
    switch(num){
       case 0: recommand_widget->SetRushSchool();break;
       case 1: recommand_widget->SetSafeSchool();break;
       case 2: recommand_widget->SetGuaranteeSchool();break;
    }

}

void Widget::slotShowP(int num){
    vector<string> s;

    user.appoint_province_colleges(num,s);

    search_school_widget->SetMessage(s,num);

}

void Widget::slotShowM(int num){
     vector<string> m;
     user.totall_majors(num,m);
     search_major_widget->setMessage(m);
}

void Widget::slotSchoolMessage(QString name){
    string s=name.toStdString();
    School->SetMessage(user.search_college(s));
    School->show();
}

void Widget::on_pushButton_search_school_clicked()
{
    ui->frame_2->SetModel(1);
    recommand_widget->hide();
    search_major_widget->hide();
    search_school_widget->show();
}

void Widget::slotShowMajor(QString name){
    string s=name.toStdString();
    qDebug()<<name;
    Major->SetMajor(user.search_major(s));
    Major->show();
}

void Widget::on_pushButton_search_major_clicked()
{
    ui->frame_2->SetModel(2);
    recommand_widget->hide();
    search_school_widget->hide();
    search_major_widget->show();
}

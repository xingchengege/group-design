#include "majormessage.h"
#include<QDebug>
MajorMessage::MajorMessage(QWidget *parent) : QWidget(parent)
{
    totall_school = new QScrollArea(this);
    name = new QLabel(this);
    income = new QLabel(this);
    area = new QLabel(this);
    industry = new QLabel(this);
    work = new QLabel(this);
    introducation = new QLabel(this);
    container =new QWidget();
    t=new QLabel(container);
    a1=new QLabel(container);
    a2=new QLabel(container);
    a3=new QLabel(container);
    this->resize(600,600);
    name->setGeometry(0,0,300,100);
    introducation->setGeometry(300,0,300,300);
    income->setGeometry(0,100,150,100);
    area->setGeometry(150,100,150,100);
    industry->setGeometry(0,200,150,100);
    work->setGeometry(150,200,150,100);
    totall_school->setGeometry(0,300,600,300);
    t->setGeometry(0,0,600,50);
    t->setText("开设院校：");
    a1->setText("江苏：");
    a2->setText("浙江：");
    a3->setText("上海：");
    a1->setGeometry(50,50,150,30);
    a2->setGeometry(240,50,150,30);
    a3->setGeometry(430,50,150,30);
    is_d=false;
}
void MajorMessage::SetMajor(major m){
    del();
    vector<string> open_school=m.totall_school();
    name->setText(QString::fromStdString(m.name()));
    QString s=QString("%1\n月平均薪资").arg(m.income());
    income->setText(s);
    s=QString("%1\n最多就业地区").arg(QString::fromStdString(m.city()));
    area->setText(s);
    s=QString("%1\n最多就业岗位").arg(QString::fromStdString(m.work()));
    work->setText(s);
    s=QString("%1\n最多就业行业").arg(QString::fromStdString(m.industry()));
    industry->setText(s);
    s=QString("专业介绍：\n%1").arg(QString::fromStdString(m.introduction()));
    introducation->setWordWrap(true);
    introducation->setText(s);
    school =new QPushButton[open_school.size()];
    if(open_school.size()>=1)is_d==true;
    int i=1;
    int cnt1=0,cnt2=0,cnt3=0;
    totall_school->setWidget(container);
    for(;i<open_school.size();i++){
        if(open_school[i]=="浙江："){i++;break;}
        school[i].setParent(container);
        school[i].setGeometry(55,90+40*(i-1),100,30);
        school[i].setText(QString::fromStdString(open_school[i]));
        school[i].show();
        connect(school+i,&QPushButton::clicked,
                [=]()
                {
                 emit sigSchool(QString::fromStdString(open_school[i]));
                 }
                );
        cnt1++;
    }
    int c1=i;
    for(;i<open_school.size();i++){
        if(open_school[i]=="上海："){i++;break;}
        school[i].setParent(container);
        school[i].setGeometry(245,90+40*(i-c1),100,30);
        school[i].setText(QString::fromStdString(open_school[i]));
        school[i].show();
        connect(school+i,&QPushButton::clicked,
                [=]()
                {
                 emit sigSchool(QString::fromStdString(open_school[i]));
                 }
                );
        cnt2++;
    }
    int cnt=std::max(cnt1,cnt2);
    c1=i;
    for(;i<open_school.size();i++){
        school[i].setParent(container);
        school[i].setGeometry(435,90+40*(i-c1),100,30);
        school[i].setText(QString::fromStdString(open_school[i]));
        school[i].show();
        connect(school+i,&QPushButton::clicked,
                [=]()
                {
                 emit sigSchool(QString::fromStdString(open_school[i]));
                 }
                );
          cnt3++;
    }
    cnt=std::max(cnt,cnt3);

    container->setMinimumSize(600,cnt*40+90);

}
void MajorMessage::del(){
    if(is_d)delete [] school;
}


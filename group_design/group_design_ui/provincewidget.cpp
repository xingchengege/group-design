#include "provincewidget.h"
#include<QDebug>
ProvinceWidget::ProvinceWidget(QWidget *parent) : QWidget(parent)
{
          container = new QWidget();
          scroll = new QScrollArea(this);
          scroll->setGeometry(0,0,892,700);
          province=new QLabel(container);
          province->setGeometry(0,0,200,30);
          is_d=false;
}
void ProvinceWidget::SetMessage(vector<string>&school,int&num){
    del();
    switch(num){
       case 0: province->setText("江苏的大学：");break;
       case 1: province->setText("上海的大学：");break;
       case 2: province->setText("浙江的大学：");
    }
    province->show();
    school_ =new QPushButton [school.size()];
    container->setMinimumSize(900,(school.size()/4)*90+60);
    scroll->setWidget(container);
    if(school.size()>=1)is_d=true;
    for(int i=0;i<school.size();){
        for(int j=0;j<4;j++,i++){
        if(i>=school.size())break;
        school_[i].setParent(container);
        school_[i].setText(QString::fromStdString(school[i]));
        school_[i].setGeometry(10+225*j,60+(i/4)*90,200,60);
        school_[i].show();
        connect(school_+i,&QPushButton::clicked,
                [=]()
                {
                 emit sigShowSchool(QString::fromStdString(school[i]));
                }
                );
        }
    }

}
void ProvinceWidget::del(){
    if(is_d==true)delete[]school_;
}

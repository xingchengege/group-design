#include "majorwidget.h"
#include<QDebug>
MajorWidget::MajorWidget(QWidget *parent) : QWidget(parent)
{
     container = new QWidget();
     scroll=new QScrollArea(this);
     scroll->setGeometry(0,0,892,700);
     is_d==false;
}
void MajorWidget::setMessage(vector<string>&major_name){
     majors = new QPushButton [major_name.size()];
     if(major_name.size()>=1)is_d=true;
     container->setMinimumSize(900,100+100*(major_name.size()));
     scroll->setWidget(container);
     for(int i=0;i<major_name.size();){
         for(int j=0;j<4;j++,i++){
             if(i>=major_name.size())break;
             majors[i].setParent(container);
             majors[i].setText(QString::fromStdString(major_name[i]));
             majors[i].setGeometry(10+225*j,50+100*(i/4),200,50);
             majors[i].show();
             connect(majors+i,&QPushButton::pressed,
                     [=]()
                     {
                       emit sigMajor(QString::fromStdString(major_name[i]));
                     }
                     );
         }
     }
}
void MajorWidget::del(){
     if(is_d)delete [] majors;
}

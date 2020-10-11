#include "schoolwidget.h"
#include<QDebug>
SchoolWidget::SchoolWidget(QWidget *parent) : QWidget(parent)
{
      container = new QWidget();
      scroll=new QScrollArea(this);
      scroll->setGeometry(0,0,892,700);
      scroll->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
      scroll->setWidgetResizable(true);
      is_d=false;
      setMouseTracking(true);
}
void SchoolWidget::SetSchool(vector<college>&school1, vector<college>&school2, vector<college>&school3){
    school_1=school1;
    school_2=school2;
    school_3=school3;
}
void SchoolWidget::SetRushSchool(){
   del();
   int num=school_1.size();
   school_ = new SchoolButton[num];
   container->setMinimumSize(900,60*num);
   container->show();
   scroll->setWidget(container);
   if(num>=1)is_d=true;
   for(int i=0;i<num;i++){
       school_[i].setParent(container);
       school_[i].SetMessage(QString::fromStdString(school_1[i].name()),school_1[i].is_211(),school_1[i].is_985(),school_1[i].is_double_first_class(),school_1[i].score_y1(),school_1[i].low_rank_y1());
       school_[i].setGeometry(50,i*60,800,60);
       school_[i].show();
       connect(&school_[i],&SchoolButton::clicked,
                    [=]()
                    {
                    emit sigSchoolMessage(QString::fromStdString(school_1[i].name()));
                    }
                    );

   }

}
void SchoolWidget::SetSafeSchool(){
   del();
    int num=school_2.size();
    school_ = new SchoolButton[num];
    if(num>=1)is_d=true;
    container->setMinimumSize(900,60*num);
    scroll->setWidget(container);
   for(int i=0;i<num;i++){
       school_[i].setParent(container);
       school_[i].SetMessage(QString::fromStdString(school_2[i].name()),school_2[i].is_211(),school_2[i].is_985(),school_2[i].is_double_first_class(),school_2[i].score_y1(),school_2[i].low_rank_y1());
       school_[i].setGeometry(50,i*60,800,60);
       school_[i].show();
       connect(&school_[i],&SchoolButton::clicked,
                    [=]()
                    {
                    emit sigSchoolMessage(QString::fromStdString(school_2[i].name()));
                    }
                    );

   }
}
void SchoolWidget::SetGuaranteeSchool(){
   del();
   int num=school_3.size();
   school_ = new SchoolButton[num];
   if(num>=1)is_d=true;
   container->setMinimumSize(900,60*num);
   scroll->setWidget(container);
   for(int i=0;i<num;i++){
       school_[i].setParent(container);
       school_[i].SetMessage(QString::fromStdString(school_3[i].name()),school_3[i].is_211(),school_3[i].is_985(),school_3[i].is_double_first_class(),school_3[i].score_y1(),school_3[i].low_rank_y1());
       school_[i].setGeometry(50,i*60,800,60);
       school_[i].show();
       connect(&school_[i],&SchoolButton::clicked,
                    [=]()
                    {
                    emit sigSchoolMessage(QString::fromStdString(school_3[i].name()));
                    }
                    );

       }
}
void SchoolWidget::del(){
    if(is_d==true)delete [] school_;
}

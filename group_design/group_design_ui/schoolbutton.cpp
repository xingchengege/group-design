#include "schoolbutton.h"
#include<QDebug>
SchoolButton::SchoolButton(QWidget *parent) : QPushButton(parent)
{
    image_school=new QLabel(this);
    image_211=new QLabel(this);
    image_985=new QLabel(this);
    image_double=new QLabel(this);
    image_score=new QLabel(this);
    image_first=new QLabel(this);
    image_rank=new QLabel(this);
    setMouseTracking(true);

}
SchoolButton::SchoolButton(const SchoolButton&s){
    name_=s.name_;
    grade_=s.grade_;
     rank_=s.rank_;
    is_211_=s.is_211_;
    is_985_=s.is_985_;
    is_double_=s.is_double_;
    image_school->setParent(this);
    image_211->setParent(this);
    image_985->setParent(this);
    image_double->setParent(this);
    image_score->setParent(this);
    image_first->setParent(this);
    image_rank->setParent(this);
    image_school->setText(name_);
    image_school->setGeometry(0,0,400,40);
    image_school->show();
    image_first->setGeometry(0,40,100,20);
    image_first->setText("本科一批");
    image_211->setGeometry(100,40,100,20);
    image_211->setText("211");
    image_985->setGeometry(200,40,100,20);
    image_985->setText("985");
    image_double->setGeometry(300,40,100,20);
    image_double->setText("双一流");
    if(is_211_)image_211->show();
    if(is_985_)image_985->show();
    if(is_double_)image_double->show();
    image_score->setGeometry(400,0,200,60);
    QString grade=QString("%1\n去年最低录取分数").arg(grade_);
    image_score->setText(grade);
    image_rank->setGeometry(600,0,200,60);
    QString rank=QString("%1\n去年最低录取排名").arg(rank_);
    image_score->setText(rank);
    image_score->show();
    image_rank->show();

}
void SchoolButton::SetMessage(const QString name,const bool is_211,const bool is_985,const bool is_double,const int grade,const int rank){
    qDebug()<<1;
    name_=name;
    is_211_=is_211;
    is_985_=is_985;
    is_double_=is_double;
    grade_=grade;
    rank_=rank;
    image_school->setGeometry(0,0,400,40);
    image_school->setText(name_);
    image_school->show();
    image_first->setGeometry(0,40,100,20);
    image_first->setText("本科一批");
    image_211->setGeometry(100,40,100,20);
    image_211->setText("211");
    image_985->setGeometry(200,40,100,20);
    image_985->setText("985");
    image_double->setGeometry(300,40,100,20);
    image_double->setText("双一流");
    if(is_211_)image_211->show();
    else image_211->hide();
    if(is_985_)image_985->show();
    else image_985->hide();
    if(is_double_)image_double->show();
    else image_double->hide();
    image_score->setGeometry(400,0,200,60);
    QString grade1=QString("%1\n\n去年最低录取分数").arg(grade_);
    qDebug()<<grade1;
    image_score->setText(grade1);
    image_score->show();
    image_rank->setGeometry(600,0,200,60);
    QString rank1=QString("%1\n\n去年最低录取排名").arg(rank_);
    image_rank->setText(rank1);
    image_rank->show();

}


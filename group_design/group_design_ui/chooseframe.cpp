#include "chooseframe.h"

Chooseframe::Chooseframe(QWidget *parent) : QFrame(parent)
{
     is_d==false;
}
void Chooseframe::SetModel(int m){
    del();
    if(m==0){
        is_d=true;
        choose_=new QPushButton[3];
        for(int i=0;i<3;i++){
            choose_[i].setParent(this);
            choose_[i].setGeometry(10,40+70*i,80,30);
            choose_[i].show();
            connect(choose_+i,&QPushButton::clicked,
                    [=]()
                    {
                      emit sigShowS(i);
                     }
                    );
        }
        choose_[0].setText("可冲击");
        choose_[1].setText("较稳妥");
        choose_[2].setText("可保底");
    }
    if(m==1){
        is_d=true;
        choose_=new QPushButton[3];
        for(int i=0;i<3;i++){
            choose_[i].setParent(this);
            choose_[i].setGeometry(10,40+70*i,80,30);
            choose_[i].show();
            connect(choose_+i,&QPushButton::clicked,
                    [=]()
                    {
                      emit sigShowP(i);
                     }
                    );
        }
        choose_[0].setText("江苏");
        choose_[1].setText("上海");
        choose_[2].setText("浙江");
    }
    if(m==2){
        is_d=true;
        choose_=new QPushButton[11];
        for(int i=0;i<11;i++){
            choose_[i].setParent(this);
            choose_[i].setGeometry(10,20+60*i,70,30);
            choose_[i].show();
            connect(choose_+i,&QPushButton::clicked,
                    [=]()
                    {
                      emit sigShowM(i);
                     }
                    );
        }
        choose_[0].setText("哲学");
        choose_[1].setText("经济学");
        choose_[2].setText("历史学");
        choose_[3].setText("教育学");
        choose_[4].setText("文学");
        choose_[5].setText("法学");
        choose_[6].setText("理学");
        choose_[7].setText("工学");
        choose_[8].setText("医学");
        choose_[9].setText("管理学");
        choose_[10].setText("农学");


    }
}
void Chooseframe::del(){
    if(is_d)delete [] choose_;
}

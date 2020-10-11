#include "getdialog.h"

GetDialog::GetDialog(QWidget *parent) : QDialog(parent)
{
     this->resize(300,300);
     degree1=new QComboBox(this);
     degree2=new QComboBox(this);
     grade=new QSpinBox(this);
     subject1=new QLabel(this);
     subject2=new QLabel(this);
     subject3=new QLabel(this);
     OK=new QPushButton(this);
     Cancel=new QPushButton(this);
     subject1->setText("物理的评级：");
     subject2->setText("另外一科的评级：");
     subject3->setText("分数：");
     subject1->setGeometry(30,30,130,40);
     degree1->setGeometry(160,30,110,40);
     subject2->setGeometry(30,90,130,40);
     degree2->setGeometry(160,90,110,40);
     subject3->setGeometry(30,150,130,40);
     grade->setGeometry(160,150,110,40);
     QStringList list;
     list<<"A+"<<"A"<<"B+"<<"B"<<"C"<<"D";
     degree1->addItems(list);
     degree2->addItems(list);
     grade->setRange(0,460);
     grade->setSingleStep(1);
     OK->setText("确定");
     Cancel->setText("取消");
     OK->setGeometry(30,240,90,40);
     Cancel->setGeometry(180,240,90,40);
     connect(OK,&QPushButton::clicked,
             [=]()
     {
        emit sigOK();
     }
     );
     connect(Cancel,&QPushButton::clicked ,
             [=]()
     {
        emit sigCancel();
     }
     );
}
QString GetDialog::Getdegree1(){
    return degree1->currentText();
};
QString GetDialog::Getdegree2(){
    return degree2->currentText();
};
int GetDialog::Getgrade(){
    return grade->value();
};

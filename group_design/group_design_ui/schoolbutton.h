#ifndef SCHOOLBUTTON_H
#define SCHOOLBUTTON_H

#include <QPushButton>
#include<QString>
#include<QLabel>
#include<QEnterEvent>
#include<QMouseEvent>
class SchoolButton : public QPushButton
{
    Q_OBJECT
public:
    explicit SchoolButton(QWidget *parent = nullptr);
    SchoolButton(const SchoolButton&s);
    void SetMessage(const QString name, const bool is_211,const bool is_985,const bool is_double,const int grade,const int rank);

signals:
    void sigclick(int d,int n);

private:
    QString name_;
    int grade_,rank_;

    bool is_211_,is_985_,is_double_;
    QLabel*image_school;
    QLabel*image_211;
    QLabel*image_985;
    QLabel*image_double;
    QLabel*image_score;
    QLabel*image_rank;
    QLabel*image_first;


};

#endif // SCHOOLBUTTON_H

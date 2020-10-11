#ifndef MAJORMESSAGE_H
#define MAJORMESSAGE_H

#include <QWidget>
#include<QString>
#include<vector>
#include<QLabel>
#include"major.h"
#include"schoolbutton.h"
#include<string>
#include<QScrollArea>
#include<QPushButton>
#include<algorithm>
using std::string;
using std::vector;

class MajorMessage : public QWidget
{
    Q_OBJECT
public:
    explicit MajorMessage(QWidget *parent = nullptr);
    void SetMajor(major m);
signals:
    void sigSchool(QString name);

private:
    QPushButton *school;
    QScrollArea *totall_school;
    QWidget *container;
    QLabel *name,*income,*area,*industry,*work,*t,*a1,*a2,*a3,*introducation;
    bool is_d;
    void del();
};

#endif // MAJORMESSAGE_H

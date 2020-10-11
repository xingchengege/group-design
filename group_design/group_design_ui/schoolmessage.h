#ifndef SCHOOLMESSAGE_H
#define SCHOOLMESSAGE_H

#include <QWidget>
#include<QLabel>
#include<QtCharts/QChart>
#include"majormessage.h"
#include<QPushButton>
#include"college.h"
#include<vector>
#include<string>
#include<QScrollArea>
using std::string;
using std::vector;
class SchoolMessage : public QWidget
{
    Q_OBJECT
public:
    explicit SchoolMessage(QWidget *parent = nullptr);
    void SetMessage(college s);
signals:
    void sigMajorMessage(QString name);
private:
     QPushButton *majors,*as;
     QScrollArea *totall_major;
     QWidget *con;
     QLabel *name,*t,*label_211,*label_985,*label_double,*label_first,*web;
     bool is_d;
     void del();
};

#endif // SCHOOLMESSAGE_H

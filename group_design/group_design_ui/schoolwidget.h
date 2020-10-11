#ifndef SCHOOLWIDGET_H
#define SCHOOLWIDGET_H

#include <QWidget>
#include <vector>
#include <QString>
#include "schoolbutton.h"
#include"college.h"
#include <QFrame>
#include<QScrollArea>
using  std::vector;
class SchoolWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SchoolWidget(QWidget *parent = nullptr);
    void SetSchool(vector<college>&school1, vector<college>&school2, vector<college>&school3);
  void SetRushSchool();
  void SetSafeSchool();
  void SetGuaranteeSchool();

signals:
  void sigSchoolMessage(QString name);
private slots:

private:
    SchoolButton *school_;
    QScrollArea *scroll;
    QWidget *container;
    bool is_d;
    vector<college> school_1,school_2,school_3;
    void del();
};

#endif // SCHOOLWIDGET_H

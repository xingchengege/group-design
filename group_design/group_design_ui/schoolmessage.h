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
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

using std::string;
using std::vector;
using namespace QtCharts;
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
     QWidget *con,*paintScore,*paintRank;
     QLabel *name,*t,*label_211,*label_985,*label_double,*label_first,*web;
     bool is_d;
     QBarSet *set0,*set1;
     QBarSeries *seriesScore,*seriesRank;
     QChart *chartScore,*chartRank;
     QBarCategoryAxis *axisScore,*axisRank;
     QChartView *chartViewScore,*chartViewRank;
     void paintChart(college&s);
     void del();
};

#endif // SCHOOLMESSAGE_H

#ifndef PROVINCEWIDGET_H
#define PROVINCEWIDGET_H

#include <QWidget>
#include<vector>
#include<QFrame>
#include<QScrollArea>
#include"schoolbutton.h"
#include"college.h"
using std::vector;
class ProvinceWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ProvinceWidget(QWidget *parent = nullptr);
    void SetMessage(vector<string>&school,int&num);

signals:
    void sigShowSchool(QString name);
private:
    QPushButton *school_;
    QWidget *container;
    QScrollArea *scroll;
    QLabel *province;
    bool is_d;
    void del();

};

#endif // PROVINCEWIDGET_H

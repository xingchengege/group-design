#ifndef MAJORWIDGET_H
#define MAJORWIDGET_H

#include <QWidget>
#include<QPushButton>
#include<vector>
#include<string>
#include<QScrollArea>
using std::string;
using std::vector;

class MajorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MajorWidget(QWidget *parent = nullptr);
    void setMessage(vector<string>&major_name);
signals:
    void sigMajor(QString name);
private:
    QPushButton *majors,*q;
    QScrollArea *scroll;
    QWidget *container;
    bool is_d;
    void del();
};

#endif // MAJORWIDGET_H

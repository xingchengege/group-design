#ifndef CHOOSEFRAME_H
#define CHOOSEFRAME_H

#include <QFrame>
#include<QPushButton>

class Chooseframe : public QFrame
{
    Q_OBJECT
public:
    explicit Chooseframe(QWidget *parent = nullptr);
    void SetModel(int m);
signals:
    void sigShowS(int num);
    void sigShowP(int num);
    void sigShowM(int num);
private:
    QPushButton *choose_;
    bool is_d;
    void del();
};

#endif // CHOOSEFRAME_H

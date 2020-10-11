#ifndef GETDIALOG_H
#define GETDIALOG_H

#include <QWidget>

#include <QDialog>
#include<QComboBox>
#include<QSpinBox>
#include<QStringList>
#include<QLabel>
#include<QPushButton>
#include<QString>
class GetDialog : public QDialog
{
    Q_OBJECT
private:
    QComboBox *degree1;
    QComboBox *degree2;
    QSpinBox *grade;
    QLabel *subject1;
    QLabel *subject2;
    QLabel *subject3;
    QPushButton *OK;
    QPushButton *Cancel;
public:
    explicit GetDialog(QWidget *parent = nullptr);
    QString Getdegree1();
    QString Getdegree2();
    int Getgrade();
signals:
    void sigOK();
    void sigCancel();
};


#endif // GETDIALOG_H

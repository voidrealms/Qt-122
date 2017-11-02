#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QtConcurrent>
#include "myjob.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

signals:
    void on_stop();

private slots:
    void on_btnStart_clicked();
    void on_btnStop_clicked();

public slots:
    void newNumber(QString name, int number);

private:
    Ui::Dialog *ui;
    MyJob mJob;
};

#endif // DIALOG_H

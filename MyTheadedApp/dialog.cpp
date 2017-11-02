#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    emit on_stop();
    delete ui;
}

void Dialog::on_btnStart_clicked()
{
    //QT 4+ connect(obj,SIGNAL(), obj2,SLOT());

    //Qt 5
    connect(&mJob,&MyJob::on_number,this,&Dialog::newNumber);
    connect(this,&Dialog::on_stop, &mJob,&MyJob::stop);

    QFuture<void> test = QtConcurrent::run(&this->mJob,&MyJob::start,QString("kitten"));

}

void Dialog::on_btnStop_clicked()
{
    emit on_stop();
}

void Dialog::newNumber(QString name, int number)
{
     qDebug() << "From dialog: " << name << " " << number;
     ui->lineEdit->setText(name + " " + QString::number(number));
}

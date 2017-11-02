#ifndef MYJOB_H
#define MYJOB_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyJob : public QObject
{
    Q_OBJECT
public:
    explicit MyJob(QObject *parent = 0);
    ~MyJob();

    void start(QString name);

signals:

    void on_number(QString name, int number);

public slots:

    void stop();

private:
    bool mStop;
};

#endif // MYJOB_H

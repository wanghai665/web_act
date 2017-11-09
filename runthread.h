#ifndef RUNTHREAD_H
#define RUNTHREAD_H
#include <QThread>


class RunThread : public QThread
{
    Q_OBJECT
public:
    RunThread();
    void run();
signals:
    void message(const QString& info);
    void progress(int present);
};

#endif // RUNTHREAD_H

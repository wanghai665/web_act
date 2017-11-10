#ifndef RUNTHREAD_H
#define RUNTHREAD_H
#include <QThread>
#include <QMutex>


class RunThread : public QThread
{
    Q_OBJECT
public:
    RunThread();
    void run();
private:
    QMutex mloke;
signals:
    void message(const QString& info);
    void progress(int present);
};

#endif // RUNTHREAD_H

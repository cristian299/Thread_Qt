#ifndef THREAD1_H
#define THREAD1_H
#include <QThread>

class Thread1 : public QThread
{
public:
    Thread1();
    void run();
};

#endif // THREAD1_H

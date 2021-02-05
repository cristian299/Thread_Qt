#ifndef THREAD2_H
#define THREAD2_H
#include <QThread>

class Thread2 : public QThread
{
public:
    Thread2();
    void run();
};

#endif // THREAD2_H

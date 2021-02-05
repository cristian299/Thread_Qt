#include "thread1.h"
#include <QDebug>
#include <QTime>

Thread1::Thread1()
{

}

void Thread1::run()
{
    forever{
        qDebug() << "Thread 1, tengo la hora:" << QTime::currentTime();
    }

}

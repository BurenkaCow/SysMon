#ifndef INFO_H
#define INFO_H

#include <QVBoxLayout>
#include <QProgressBar>
#include <QLabel>
#include <QtGui>
#include <QString>
#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
using namespace std;
class Info : public QWidget
{
    Q_OBJECT
public:
    explicit Info(QWidget *parent = 0);
private:
    QLabel       * hostname;
    QLabel       * user;
    QLabel       * uptime;
    QLabel       * proc;
    QLabel       * freq;
    QLabel       * cpuload;
    QLabel       * mem;
    QLabel       * memload;
    QProgressBar * cpubar;
    QProgressBar * membar;
    QVBoxLayout  * layout;
    QHBoxLayout  * hlayout;
    vector<float> readCpuStats();
    int getCpuLoad(double dt);
public slots:
    void update();
};

#endif // INFO_H

#ifndef TEACHER_H
#define TEACHER_H
#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);
    void classOver();
signals:
    void classOverSig();
};

#endif // TEACHER_H

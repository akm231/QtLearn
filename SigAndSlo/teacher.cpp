#include "teacher.h"
#include <QObject>
Teacher::Teacher(QObject *parent) : QObject(parent)
{

}
void Teacher::classOver(){
    emit classOverSig();
}

#ifndef CHEESE_H
#define CHEESE_H
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QPainter>
#include "food.h"
class Cheese:public Food{
public:
   Cheese(QString);
    void print();
};




#endif // CHEESE_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "map.h"
#include "paint.h"

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void                nextStatus();
    void                creater(int, int, int);
    void                validityChecking();
    void                startGame();
    void                gameOver();


private:
    //окно вывода приложения
    Paint*              paint;
    QPushButton*        next;
    QPushButton*        startTimer;
    QPushButton*        stopTimer;
    QTimer*             timer;
    QGridLayout*        mainLayout;


    // окно старта, сюда же будем позвращаемся при перезапуске
    QLabel*             lengthKey;
    QLineEdit*          lengthValue;
    QLabel*             widthKey;
    QLineEdit*          widthValue;
    QLabel*             timeKey;
    QLineEdit*          timeValue;
    QPushButton*        setValue;

    //конец игры - в разработке
    QLabel*             gameEnd;
    //QPushButton*        restart;

    Map*                 map;

};



#endif // MAINWINDOW_H

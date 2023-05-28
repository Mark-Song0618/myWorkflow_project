#pragma once

#include <QMainWindow>

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = nullptr) : QMainWindow(parent) {};
    ~MainWin() {};
};

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "card.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    std::vector<Card> cards;

    // Events:
public slots:
    void shuffle();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_HPP

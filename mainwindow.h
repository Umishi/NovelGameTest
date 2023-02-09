#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_released();

    void on_next_released();

    void on_place_1_released();

    void on_next_2_released();

    void on_place_2_released();

    void on_place_3_released();

    void on_place_4_released();

    void on_place_5_released();

private:
    Ui::MainWindow *ui;
    QGraphicsScene Scene;
    QGraphicsScene Scene_s;
    QGraphicsScene Scene_t;
    QString line;
    int aa =0;
    int ab =0;
    int ac =0;
    int ad =0;
    int ae =0;
    int af =0;
    int ag =0;
    int ah =0;
    int ai =0;
    int aj =0;
    int ak =0;
    int al =0;
    int am =0;
    int an =0;
    int c =0;
    int d =0;
    int e =0;
    int f =0;

};
#endif // MAINWINDOW_H

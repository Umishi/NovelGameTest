#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   QString windowTitle;
    ui->setupUi(this);
    ui->background->hide();
    ui->t_window->hide();
    ui->next->hide();
    ui->next_2->hide();
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    this->setWindowTitle("サーヴェンクロイチェにて");
    QImage image_start("images\\start.png");
    QPixmap pixmap_start=QPixmap::fromImage(image_start);
    Scene_s.addPixmap(pixmap_start);
    ui->startgame->setScene(&Scene_s);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_start_released()
{
    ui->start->hide();
    ui->end->hide();
    ui->startgame->hide();
    ui->background->show();
    ui->t_window->show();
    ui->next->show();
    QImage image("images\\1.png");
    QPixmap pixmap=QPixmap::fromImage(image);
    Scene.addPixmap(pixmap);
    ui->background->setScene(&Scene);

    QImage image_t("images\\t_box.png");
    QPixmap pixmap_t=QPixmap::fromImage(image_t);
    Scene_t.addPixmap(pixmap_t);
    ui->t_window->setScene(&Scene_t);
}


void MainWindow::on_next_released()
{
    if(c==0){
        QFile inputFile("scenario\\1.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<aa+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_2("images\\2.png");
                    QPixmap pixmap_2=QPixmap::fromImage(image_2);
                    Scene.addPixmap(pixmap_2);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            aa++;
            inputFile.close();
        }
    }
    else if(c==1){
        QFile inputFile("scenario\\2.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ab+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_3("images\\3.png");
                    QPixmap pixmap_3=QPixmap::fromImage(image_3);
                    Scene.addPixmap(pixmap_3);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ab++;
            inputFile.close();
        }
    }
    else if(c==2){

        QFile inputFile("scenario\\3.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ac+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_4("images\\4.png");
                    QPixmap pixmap_4=QPixmap::fromImage(image_4);
                    Scene.addPixmap(pixmap_4);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ac++;
            inputFile.close();
        }

    }

    else if(c==3){

        QFile inputFile("scenario\\4.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ad+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_5("images\\5.png");
                    QPixmap pixmap_5=QPixmap::fromImage(image_5);
                    Scene.addPixmap(pixmap_5);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ad++;
            inputFile.close();
        }

    }
    else if(c==4){

        QFile inputFile("scenario\\5.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ae+1){
                line = in.readLine();
                if(line.isNull()){
                    QImage image_6("images\\6.png");
                    QPixmap pixmap_6=QPixmap::fromImage(image_6);
                    Scene.addPixmap(pixmap_6);
                    ui->background->setScene(&Scene);
                    ui->place_1->show();
                    ui->place_2->show();
                    ui->place_3->show();
                    ui->place_4->show();
                    ui->place_5->show();
                    ui->t_window->hide();
                    ui->next->hide();
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ae++;
            inputFile.close();
        }



    }
    else if(c==5){
        QFile inputFile("scenario\\11.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ak+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_13("images\\13.png");
                    QPixmap pixmap_13=QPixmap::fromImage(image_13);
                    Scene.addPixmap(pixmap_13);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ak++;
            inputFile.close();
        }

    }
    else if(c==6){
        QFile inputFile("scenario\\12.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<al+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_12("images\\12.png");
                    QPixmap pixmap_12=QPixmap::fromImage(image_12);
                    Scene.addPixmap(pixmap_12);
                    ui->background->setScene(&Scene);
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            al++;
            inputFile.close();
        }

    }
    else if(c==7&&f==0){
        QImage image_14("images\\14.png");
        QPixmap pixmap_14=QPixmap::fromImage(image_14);
        Scene.addPixmap(pixmap_14);
        ui->background->setScene(&Scene);
        QFile inputFile("scenario\\13.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<am+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_16("images\\16.png");
                    QPixmap pixmap_16=QPixmap::fromImage(image_16);
                    Scene.addPixmap(pixmap_16);
                    ui->background->setScene(&Scene);
                    ui->t_window->hide();
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            am++;
            inputFile.close();
        }
    }
    else if(c==7&&f==1){
        QImage image_15("images\\15.png");
        QPixmap pixmap_15=QPixmap::fromImage(image_15);
        Scene.addPixmap(pixmap_15);
        ui->background->setScene(&Scene);
        QFile inputFile("scenario\\14.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<an+1){
                line = in.readLine();
                if(line.isNull()){
                    c++;
                    QImage image_17("images\\17.png");
                    QPixmap pixmap_17=QPixmap::fromImage(image_17);
                    Scene.addPixmap(pixmap_17);
                    ui->background->setScene(&Scene);
                    ui->t_window->hide();
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            an++;
            inputFile.close();
        }
    }

    else{
        close();


    }
}

void MainWindow::on_next_2_released()
{
    if(d==1){
        QFile inputFile("scenario\\6.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<af+1){
                line = in.readLine();
                if(line.isNull()){
                    if(e>1){
                        QImage image_12("images\\12.png");
                        QPixmap pixmap_12=QPixmap::fromImage(image_12);
                        Scene.addPixmap(pixmap_12);
                        ui->background->setScene(&Scene);
                        ui->next_2->hide();
                        ui->next->show();
                        c++;
                    }
                    else{
                        QImage image_6("images\\6.png");
                        QPixmap pixmap_6=QPixmap::fromImage(image_6);
                        Scene.addPixmap(pixmap_6);
                        ui->background->setScene(&Scene);
                        ui->place_2->show();
                        ui->place_3->show();
                        ui->place_4->show();
                        ui->place_5->show();
                        ui->t_window->hide();
                        ui->next_2->hide();
                        d=d-1;
                        e++;}
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            af++;
            inputFile.close();
        }

    }
    else if(d==2){
        QFile inputFile("scenario\\7.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ag+1){
                line = in.readLine();
                if(line.isNull()){
                    if(e>1){
                        QImage image_12("images\\12.png");
                        QPixmap pixmap_12=QPixmap::fromImage(image_12);
                        Scene.addPixmap(pixmap_12);
                        ui->background->setScene(&Scene);
                        ui->next_2->hide();
                        ui->next->show();
                        c++;
                    }
                    else{
                        QImage image_6("images\\6.png");
                        QPixmap pixmap_6=QPixmap::fromImage(image_6);
                        Scene.addPixmap(pixmap_6);
                        ui->background->setScene(&Scene);
                        ui->place_1->show();
                        ui->place_3->show();
                        ui->place_4->show();
                        ui->place_5->show();
                        ui->t_window->hide();
                        ui->next_2->hide();
                        d=d-2;
                        e++;}
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ag++;
            inputFile.close();
        }

    }
    else if(d==3){
        QFile inputFile("scenario\\8.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ah+1){
                line = in.readLine();
                if(line.isNull()){
                    if(e>1){
                        QImage image_12("images\\12.png");
                        QPixmap pixmap_12=QPixmap::fromImage(image_12);
                        Scene.addPixmap(pixmap_12);
                        ui->background->setScene(&Scene);
                        ui->next_2->hide();
                        ui->next->show();
                        c++;
                    }
                    else{
                        QImage image_6("images\\6.png");
                        QPixmap pixmap_6=QPixmap::fromImage(image_6);
                        Scene.addPixmap(pixmap_6);
                        ui->background->setScene(&Scene);
                        ui->place_1->show();
                        ui->place_2->show();
                        ui->place_4->show();
                        ui->place_5->show();
                        ui->t_window->hide();
                        ui->next_2->hide();
                        d=d-3;
                        e++;}
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            ah++;
            inputFile.close();
        }

    }
    else if(d==4){
        QFile inputFile("scenario\\9.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<ai+1){
                line = in.readLine();
                if(line.isNull()){
                    if(e>1){
                        QImage image_12("images\\12.png");
                        QPixmap pixmap_12=QPixmap::fromImage(image_12);
                        Scene.addPixmap(pixmap_12);
                        ui->background->setScene(&Scene);
                        ui->next_2->hide();
                        ui->next->show();
                        c++;
                    }
                    else{
                        QImage image_6("images\\6.png");
                        QPixmap pixmap_6=QPixmap::fromImage(image_6);
                        Scene.addPixmap(pixmap_6);
                        ui->background->setScene(&Scene);
                        ui->place_1->show();
                        ui->place_2->show();
                        ui->place_3->show();
                        ui->place_5->show();
                        ui->t_window->hide();
                        ui->next_2->hide();
                        d=d-4;
                        e++;}
                    break;

                }
                ui->label->setText(line);
                b++;
            }
            ai++;
            inputFile.close();
        }


    }
    else if(d==5){
        QFile inputFile("scenario\\10.txt");
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            int b=0;
            while(b<aj+1){
                line = in.readLine();
                if(line.isNull()){
                    if(e>1){
                        QImage image_12("images\\12.png");
                        QPixmap pixmap_12=QPixmap::fromImage(image_12);
                        Scene.addPixmap(pixmap_12);
                        ui->background->setScene(&Scene);
                        ui->next_2->hide();
                        ui->next->show();
                        c++;
                    }
                    else{
                        QImage image_6("images\\6.png");
                        QPixmap pixmap_6=QPixmap::fromImage(image_6);
                        Scene.addPixmap(pixmap_6);
                        ui->background->setScene(&Scene);
                        ui->place_1->show();
                        ui->place_2->show();
                        ui->place_3->show();
                        ui->place_4->show();
                        ui->t_window->hide();
                        ui->next_2->hide();
                        d=d-5;
                        e++;}
                    break;
                }
                ui->label->setText(line);
                b++;
            }
            aj++;
            inputFile.close();
        }

    }
}


void MainWindow::on_place_1_released()
{
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    ui->t_window->show();
    ui->next_2->show();
    QImage image_7("images\\7.png");
    QPixmap pixmap_7=QPixmap::fromImage(image_7);
    Scene.addPixmap(pixmap_7);
    ui->background->setScene(&Scene);
    d=d+1;


}


void MainWindow::on_place_2_released()
{
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    ui->t_window->show();
    ui->next_2->show();
    QImage image_8("images\\8.png");
    QPixmap pixmap_8=QPixmap::fromImage(image_8);
    Scene.addPixmap(pixmap_8);
    ui->background->setScene(&Scene);
    d=d+2;

}

void MainWindow::on_place_3_released()
{
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    ui->t_window->show();
    ui->next_2->show();
    QImage image_9("images\\9.png");
    QPixmap pixmap_9=QPixmap::fromImage(image_9);
    Scene.addPixmap(pixmap_9);
    ui->background->setScene(&Scene);
    d=d+3;

}

void MainWindow::on_place_4_released()
{
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    ui->t_window->show();
    ui->next_2->show();
    QImage image_10("images\\10.png");
    QPixmap pixmap_10=QPixmap::fromImage(image_10);
    Scene.addPixmap(pixmap_10);
    ui->background->setScene(&Scene);
    d=d+4;

}

void MainWindow::on_place_5_released()
{
    ui->place_1->hide();
    ui->place_2->hide();
    ui->place_3->hide();
    ui->place_4->hide();
    ui->place_5->hide();
    ui->t_window->show();
    ui->next_2->show();
    QImage image_11("images\\11.png");
    QPixmap pixmap_11=QPixmap::fromImage(image_11);
    Scene.addPixmap(pixmap_11);
    ui->background->setScene(&Scene);
    d=d+5;
    f++;

}

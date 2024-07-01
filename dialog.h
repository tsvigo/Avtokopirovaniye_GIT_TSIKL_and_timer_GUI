#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class Dialog : public QDialog
     {
          Q_OBJECT
          
     public:
          Dialog(QWidget *parent = nullptr);
          ~Dialog();
          //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
private:
QTimer* timer;
private slots:
   
    void do_timer(); 
     };
#endif // DIALOG_H

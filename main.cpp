#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
     {
          QApplication a(argc, argv);
          Dialog w;
       //   w.show(); // СКРОЕМ окно
          return a.exec();
     }

#include "dialog.h"
/////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <QTimer>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <QProcess>
#include <QTextStream>
#include <QFile>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
Dialog::Dialog(QWidget *parent)
     : QDialog(parent)
     {
     timer=new QTimer; 
connect(timer,SIGNAL(timeout()),this,SLOT(do_timer())); 
timer->start(60000); // 50 миллисекунд... 3 часа=10800000 мс; 5 минут = 300000 мс;  60000 мс = минута

       
    
         
     }

Dialog::~Dialog()
     {
     }

void Dialog::do_timer()
{
//
;;
   // ui->pushButton->move(QPoint( ui->pushButton->pos().x()+10, ui->pushButton->pos().y()));
   // собственно код здесь
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        QProcess::execute("/home/viktor/my_scripts_4/imena_katalogov.sh");
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    QFile inputFile("/home/viktor/my_scripts_4/names_directory_list.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
    
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();

          QString  comanda_vsia="cd /home/viktor/my_projects_qt_2/"+line +

" && /usr/bin/git init && /usr/bin/git add --all && /usr/bin/git commit -m \"Описание коммита \" && cd /home/viktor/my_projects_qt_2/"+line
 +" && /home/linuxbrew/.linuxbrew/bin/hub create && cd /home/viktor/my_projects_qt_2/"+line 

 +" && git push origin master && git push --set-upstream origin master && /home/linuxbrew/.linuxbrew/bin/hub push origin";
//#######################################################################################
// /home/linuxbrew/.linuxbrew/bin/hub
// /usr/bin/hub
            system (comanda_vsia.toStdString().c_str() );
    
       }
       inputFile.close();
    }   
}

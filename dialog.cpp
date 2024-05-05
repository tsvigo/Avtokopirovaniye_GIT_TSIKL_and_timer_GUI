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
#include <QDebug>
#include <iostream>
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
   //     QProcess::execute("/home/viktor/my_scripts_4/imena_katalogov.sh");
QProcess process;
process.start("bash", QStringList() << "/home/viktor/my_scripts_4/imena_katalogov.sh");
process.waitForFinished();
QString output = process.readAllStandardOutput();
std::cout << output.toStdString() << std::endl;
//########################################################################################################
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //     QProcess::execute("/home/viktor/my_scripts_4/imena_katalogov.sh");
QProcess process2;
process2.start("bash", QStringList() << "/home/viktor/my_scripts_4/podkluchenie_k_git.sh");
process2.waitForFinished();
QString output2 = process2.readAllStandardOutput();
std::cout << output2.toStdString() << std::endl;
//########################################################################################################
QProcess process3;
process3.start("bash", QStringList() << "/home/viktor/my_scripts_4/auto_git.sh");
process3.waitForFinished(-1);
QString output3 = process3.readAllStandardOutput();
std::cout << output3.toStdString() << std::endl;

int exitCode = process3.exitCode();    
qDebug() << "exitCode = " << exitCode;//. [1](https://intuit.ru/studies/courses/3479/721/lecture/25564?page=3)
//########################################################################################################
  
//  QString proc_stdout = process.readAllStandardOutput();
//QString proc_stderr = process.readAllStandardError();

//std::cout << process.toStdString() << std::endl;
//std::cerr << process.toStdString() << std::endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    QFile inputFile("/home/viktor/my_scripts_4/names_directory_list.txt");
//    if (inputFile.open(QIODevice::ReadOnly))
//    {
    
//       QTextStream in(&inputFile);
//       while (!in.atEnd())
//       {
//          QString line = in.readLine();
//########################################################################################################
//          QString  comanda_vsia="cd /home/viktor/my_projects_qt_2/"+line +

//" && /usr/bin/git init && /usr/bin/git add --all && /usr/bin/git commit -m \"Описание коммита \" && cd /home/viktor/my_projects_qt_2/"+line
// +" && /home/linuxbrew/.linuxbrew/bin/hub create && cd /home/viktor/my_projects_qt_2/"+line 

// +" && git push origin master && git push --set-upstream origin master && /home/linuxbrew/.linuxbrew/bin/hub push origin";
//#######################################################################################
//QString comanda_vsia=
////const char data[]=
//"cd /home/viktor/my_projects_qt_2/Avtokopirovaniye_GIT_TSIKL_and_timer_GUI && /usr/bin/git init && cd /home/viktor/my_projects_qt_2/Avtokopirovaniye_GIT_TSIKL_and_timer_GUI && /usr/bin/git add --all && cd /home/viktor/my_projects_qt_2/Avtokopirovaniye_GIT_TSIKL_and_timer_GUI && /usr/bin/git commit -m \"Описание коммита\" cd /home/viktor/my_projects_qt_2/Avtokopirovaniye_GIT_TSIKL_and_timer_GUI &&  /home/linuxbrew/.linuxbrew/bin/hub create cd /home/viktor/my_projects_qt_2/Avtokopirovaniye_GIT_TSIKL_and_timer_GUI && /home/linuxbrew/.linuxbrew/bin/hub push";

//########################################################################################################

//            system (comanda_vsia.toStdString().c_str() );
    
//       }
//       inputFile.close();
//    }   
}

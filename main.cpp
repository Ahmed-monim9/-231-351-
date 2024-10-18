#include <QCoreApplication>
#include "mytcpserver.h"
#include "database.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //Создается объект, который управляет основным циклом событий для консольного приложения.
    MyTcpServer myserv; //Создается объект TCP-сервера. При его создании запускается сервер, 
    return a.exec();  //Запускается основной цикл обработки событий Qt. 
}

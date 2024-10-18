#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
#include <map>
class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr); //Создает объект сервера QTcpServer.
Настраивает сервер на прослушивание подключений от клиентов.
    ~MyTcpServer();
public slots:
    void slotNewConnection();
    void slotClientDisconnected(); //Удаляет запись о клиенте из карты mClientSockets при его отключении.
    void slotServerRead(); //Читает данные из клиентского сокета.
private:
    QTcpServer * mTcpServer; //Указатель на объект сервера, который прослушивает подключения.
    std::map<int, QTcpSocket*> mClientSockets;
    //int server_status;
};
#endif // MYTCPSERVER_H








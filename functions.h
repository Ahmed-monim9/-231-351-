#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QString>

    QByteArray parsing (QString data_from_client);//Разбирает строку данных, полученную от клиента, и вызывает  функцию для обработки (работа с графом).
    QByteArray auth (QString log, QString pass);
    QByteArray reg (QString log, QString pass, QString mail);//Обрабатывает запрос на авторизацию пользователя.
    QByteArray graph (QStringList array);//связанные с операциями над графом, такими как поиск пути.


#endif // FUNCTIONS_H

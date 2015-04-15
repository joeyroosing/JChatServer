#include <QCoreApplication>
#include "server.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Server *server = new Server();
    bool success = server->listen(QHostAddress::Any, 1500);
    if(!success) {
        qFatal("Could not listen on port 4200.");
    }

    qDebug() << "Ready";

    std::cout << "Working";


    return app.exec();
}

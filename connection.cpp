#include "connection.h"
#include <QsqlError>
#include <QSlDatabase>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");//inserer le nom de la source de données
db.setUserName("Ilef");//inserer nom de l'utilisateur
db.setPassword("esprit24");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

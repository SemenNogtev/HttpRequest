#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
#include <QString>
#include <QObject>
#include <QNetworkAccessManager>
#include <QByteArray>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

class Worker: public QObject
{
    Q_OBJECT

public:
    explicit Worker(QObject *parent = 0);

public slots:
    void postFG(QString location, QString value);

private:
    QNetworkAccessManager *mgr;

};

#endif // WORKER_H

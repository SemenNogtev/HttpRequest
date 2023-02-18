#include "worker.h"

Worker::Worker(QObject *parent):QObject(parent)
{

}

void Worker::postFG(QString location, QString value)
{
    //qInfo() << "Posting to server...";
    mgr = new QNetworkAccessManager(this);
    const QUrl url(location);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject obj;
    obj["value"] = QString(value);
    QJsonDocument doc(obj);
    QByteArray data = doc.toJson();
    mgr->post(request, data);
}



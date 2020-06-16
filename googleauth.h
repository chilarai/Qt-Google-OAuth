#ifndef GOOGLEAUTH_H
#define GOOGLEAUTH_H

#include <QObject>
#include <QOAuth2AuthorizationCodeFlow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QOAuthHttpServerReplyHandler>
#include <QDesktopServices>

class GoogleAuth : public QObject
{
    Q_OBJECT
public:
    explicit GoogleAuth(QObject *parent = nullptr);
    Q_INVOKABLE void click();


private:
    QOAuth2AuthorizationCodeFlow * google;
};

#endif // GOOGLEAUTH_H

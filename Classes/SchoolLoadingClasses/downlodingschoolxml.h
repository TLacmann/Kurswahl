#ifndef DOWNLODINGSCHOOLXML_H
#define DOWNLODINGSCHOOLXML_H

#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class DownlodingSchoolXML : public QObject
{

    Q_OBJECT
    public:
        explicit DownlodingSchoolXML(QUrl fileUrl, QObject *parent = 0);

        virtual ~DownlodingSchoolXML();

        QByteArray downloadedData() const;

    signals:
            void downloaded();

    private slots:

        void fileDownloaded(QNetworkReply* pReply);

private:

    QNetworkAccessManager m_WebCtrl;

    QByteArray m_DownloadedData;


public:
    DownlodingSchoolXML();
};

#endif // DOWNLODINGSCHOOLXML_H


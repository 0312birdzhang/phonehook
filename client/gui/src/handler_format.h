#ifndef HANDLER_FORMAT_H
#define HANDLER_FORMAT_H

#include <QObject>
#include "process_data.h"

class handler_format : public QObject
{
    Q_OBJECT
public:
    explicit handler_format(QObject *parent = 0);

    void format(QString method, QString params, process_data *p);

signals:

public slots:

};

#endif // HANDLER_FORMAT_H

#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <QObject>
#include <QVector>

class TestSuite : public QObject
{
    Q_OBJECT
public:
    static QVector<QObject*> m_suites;

public:
    explicit TestSuite();

};

#endif // TESTSUITE_H


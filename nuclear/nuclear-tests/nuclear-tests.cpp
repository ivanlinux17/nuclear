#include <QString>
#include <QtTest>

class NuclearTest : public QObject
{
   Q_OBJECT

public:
   NuclearTest();

private Q_SLOTS:
   void testCase1();
};

NuclearTest::NuclearTest()
{
}

void NuclearTest::testCase1()
{
   QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(NuclearTest)

#include "nuclear-tests.moc"

#ifndef TESTGPSCOORDS_H
#define TESTGPSCOORDS_H

#include <QtTest>

class TestGpsCoords : public QObject {
Q_OBJECT
private slots:
	void testISO6709DParse();
	void testNegativeISO6709DParse();
	void testSpaceISO6709DParse();
	void testSecondsParse();
	void testSpaceSecondsParse();
	void testNegativeSecondsParse();
	void testMinutesParse();
	void testSpaceMinutesParse();
	void testMinutesInversedParse();
	void testDecimalParse();
	void testSpaceDecimalParse();
	void testDecimalInversedParse();

private:
	static void testParseOK(const QString &txt, double expectedLat,
		double expectedLon);
	static double coord2double(double deg, double min = 0.0, double sec = 0.0);
};

#endif

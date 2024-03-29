///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia, Metrosage, and project contributors
/// https://www.capvidia.com/
/// 
/// This software is provided for free use to the QIF Community under the 
/// following license:
/// 
/// Boost Software License - Version 1.0 - August 17th, 2003
/// https://www.boost.org/LICENSE_1_0.txt
/// 
/// Permission is hereby granted, free of charge, to any person or organization
/// obtaining a copy of the software and accompanying documentation covered by
/// this license (the "Software") to use, reproduce, display, distribute,
/// execute, and transmit the Software, and to prepare derivative works of the
/// Software, and to permit third-parties to whom the Software is furnished to
/// do so, all subject to the following:
/// 
/// The copyright notices in the Software and this entire statement, including
/// the above license grant, this restriction and the following disclaimer,
/// must be included in all copies of the Software, in whole or in part, and
/// all derivative works of the Software, unless such copies or derivative
/// works are solely in the form of machine-executable object code generated by
/// a source language processor.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
/// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
/// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
/// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.

////////////////////////////////////////////////////////////////////////
//
// xs-datetime.h
//
// This file was generated by XMLSpy 2016 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once

#include "AltovaDefs.h"
#include "exception.h"


namespace altova
{

	const __int64 TicksPerSecond = 10000000;
	const __int64 SecondsPerDay = 86400;
	const __int64 TicksPerDay = SecondsPerDay * TicksPerSecond;

	class DateTime
	{
		__int64 m_value;
		short	m_reserved[3];
		short	m_timezone;


		static QIFBASE_EXPORT __int64 Init(int year, unsigned char month, unsigned char day, 
			unsigned char hour, unsigned char minute, double second);

	public:
		static QIFBASE_EXPORT bool IsLeapYear(int year);
		enum {
			NO_TIMEZONE = -32768
		};

		explicit DateTime(__int64 value) : m_value(value), m_timezone(NO_TIMEZONE) {}
		DateTime() : m_value(0), m_timezone(NO_TIMEZONE) {}
		DateTime(__int64 value, short timezone) : m_value(value), m_timezone(timezone) {}
		QIFBASE_EXPORT DateTime(int year, unsigned char month, unsigned char day, 
			unsigned char hour, unsigned char minute, double second);
		QIFBASE_EXPORT DateTime(int year, unsigned char month, unsigned char day, 
			unsigned char hour, unsigned char minute, double second, short timezone);

		QIFBASE_EXPORT int Year() const;
		QIFBASE_EXPORT unsigned char Month() const;
		QIFBASE_EXPORT unsigned char Day() const;
		QIFBASE_EXPORT unsigned char Hour() const;
		QIFBASE_EXPORT unsigned char Minute() const;
		QIFBASE_EXPORT double Second() const;
		QIFBASE_EXPORT short Timezone() const { return m_timezone; }
		QIFBASE_EXPORT void SetTimezone(short tz) { m_timezone = tz; }
		QIFBASE_EXPORT bool HasTimezone() const { return m_timezone != NO_TIMEZONE; }

		/** Returns the day of year. 1-366 */
		QIFBASE_EXPORT int DayOfYear() const;

		/** Returns the week of the month */
		QIFBASE_EXPORT int WeekOfMonth() const;

		/** Returns the weekday, monday is zero (ISO-8601). */
		QIFBASE_EXPORT int Weekday() const { return ( m_value / TicksPerDay ) % 7; }

		/** Returns the week number according to ISO-8601. */
		QIFBASE_EXPORT int Weeknumber() const;


		__int64 Value() const { return m_value; }
		QIFBASE_EXPORT __int64 NormalizedValue() const;

		QIFBASE_EXPORT static void GetDateFromTimeValue(__int64 tvTime, int& rnYear, int& rnMonth, int& rnDay);
	};


	class DayTimeDuration
	{
		__int64 m_value;
	
	public:
		DayTimeDuration() : m_value(0) {}
		QIFBASE_EXPORT DayTimeDuration(int days, int hours, int minutes, double seconds);
		explicit DayTimeDuration(__int64 value) : m_value(value) {}

		QIFBASE_EXPORT int Days() const;
		QIFBASE_EXPORT int Hours() const;
		QIFBASE_EXPORT int Minutes() const;
		QIFBASE_EXPORT double Seconds() const;

		__int64 Value() const { return m_value; }

		bool IsNegative() const { return m_value < 0; }
		bool IsPositive() const { return m_value > 0; }
	};


	class YearMonthDuration
	{
		int m_value;

	public:
		YearMonthDuration() : m_value(0) {}
		QIFBASE_EXPORT YearMonthDuration(int years, int months);
		explicit YearMonthDuration(int value) : m_value(value) {}

		QIFBASE_EXPORT int Years() const;
		QIFBASE_EXPORT int Months() const;

		int Value() const { return m_value; }

		bool IsNegative() const { return m_value < 0; }
		bool IsPositive() const { return m_value > 0; }
	};


	class Duration
	{
		DayTimeDuration dayTime;
		YearMonthDuration yearMonth;

	public:
		enum ParseType { DURATION, YEARMONTH, DAYTIME };

		Duration() {}
		Duration(const DayTimeDuration& dt) : dayTime(dt) {}
		Duration(const YearMonthDuration& ym) : yearMonth(ym) {}
		QIFBASE_EXPORT Duration(const YearMonthDuration& ym, const DayTimeDuration& dt);

		DayTimeDuration DayTime() const { return dayTime; }
		YearMonthDuration YearMonth() const { return yearMonth; }

		int Years() const { return yearMonth.Years(); }
		int Months() const { return yearMonth.Months(); }
		int Days() const { return dayTime.Days(); }
		int Hours() const { return dayTime.Hours(); }
		int Minutes() const { return dayTime.Minutes(); }
		double Seconds() const { return dayTime.Seconds(); }
		
		bool IsNegative() const { return dayTime.IsNegative() || yearMonth.IsNegative(); }
		bool IsPositive() const { return dayTime.IsPositive() || yearMonth.IsPositive(); }
	};


	// dateTime arithmetics
	QIFBASE_EXPORT DayTimeDuration operator- (const DateTime& first, const DateTime& second);
	
	QIFBASE_EXPORT DayTimeDuration operator- (const DayTimeDuration& x);
	QIFBASE_EXPORT DayTimeDuration operator+ (const DayTimeDuration& first, const DayTimeDuration& second);
	QIFBASE_EXPORT DayTimeDuration operator- (const DayTimeDuration& first, const DayTimeDuration& second);

	QIFBASE_EXPORT YearMonthDuration operator- (const YearMonthDuration& x);
	QIFBASE_EXPORT YearMonthDuration operator+ (const YearMonthDuration& first, const YearMonthDuration& second);
	QIFBASE_EXPORT YearMonthDuration operator- (const YearMonthDuration& first, const YearMonthDuration& second);

	QIFBASE_EXPORT DateTime operator+ (const DateTime& first, const DayTimeDuration& second);
	QIFBASE_EXPORT DateTime operator- (const DateTime& first, const DayTimeDuration& second);
	QIFBASE_EXPORT DateTime operator+ (const DateTime& first, const YearMonthDuration& second);
	QIFBASE_EXPORT DateTime operator- (const DateTime& first, const YearMonthDuration& second);

	QIFBASE_EXPORT DateTime operator+ (const DateTime& first, const Duration& second);
	QIFBASE_EXPORT DateTime operator- (const DateTime& first, const Duration& second);

	inline Duration operator-(const Duration& a) { return Duration(-a.YearMonth(), -a.DayTime()); }

	inline Duration operator+(const Duration& a, const Duration& b) 
	{ 
		return Duration(a.YearMonth() + b.YearMonth(), a.DayTime() + b.DayTime() ); 
	}

	inline Duration operator-(const Duration& a, const Duration& b) 
	{ 
		return Duration(a.YearMonth() - b.YearMonth(), a.DayTime() - b.DayTime() ); 
	}

	// these have their complexities... 
	QIFBASE_EXPORT bool operator== (const DateTime& first, const DateTime& second);
	QIFBASE_EXPORT bool operator!= (const DateTime& first, const DateTime& second);
	QIFBASE_EXPORT bool operator< (const DateTime& first, const DateTime& second);
	inline bool operator> (const DateTime& first, const DateTime& second) { return second < first; }
	QIFBASE_EXPORT bool operator<= (const DateTime& first, const DateTime& second);
	inline bool operator>= (const DateTime& first, const DateTime& second) { return second <= first; }

	inline bool operator== (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() == second.Value(); }
	inline bool operator!= (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() != second.Value(); }
	inline bool operator< (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() < second.Value(); }
	inline bool operator> (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() > second.Value(); }
	inline bool operator<= (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() <= second.Value(); }
	inline bool operator>= (const DayTimeDuration& first, const DayTimeDuration& second) { return first.Value() >= second.Value(); }

	inline bool operator== (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() == second.Value(); }
	inline bool operator!= (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() != second.Value(); }
	inline bool operator< (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() < second.Value(); }
	inline bool operator> (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() > second.Value(); }
	inline bool operator<= (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() <= second.Value(); }
	inline bool operator>= (const YearMonthDuration& first, const YearMonthDuration& second) { return first.Value() >= second.Value(); }

	QIFBASE_EXPORT bool operator== (const Duration& first, const Duration& second);
	inline bool operator!= (const Duration& first, const Duration& second) { return !(first == second); }
	QIFBASE_EXPORT bool operator< (const Duration& first, const Duration& second);
	inline bool operator> (const Duration& first, const Duration& second) { return second < first; }
	QIFBASE_EXPORT bool operator<= (const Duration& first, const Duration& second);
	inline bool operator>= (const Duration& first, const Duration& second) { return second <= first; }
}

//#endif // guard


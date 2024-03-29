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
// xs-datetime.cpp
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

#include "StdAfx.h"
#include "xs-datetime.h"
#include <math.h>

namespace altova
{
	static const unsigned monthStart[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	static const unsigned monthStartLeap[13] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };

	bool DateTime::IsLeapYear(int year)
	{
		return ((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0);
	}

	__int64 DateTime::Init(int year, unsigned char month, unsigned char day, unsigned char hour, unsigned char minute, double second)
	{
		if (month < 1 || month > 12)
			throw InvalidArgumentException(_T("month out of range"));

		bool leap = IsLeapYear(year);

		const unsigned* monthTable = leap ? monthStartLeap : monthStart;
		if (day < 1 || day > (monthTable[month] - monthTable[month - 1]))
			throw InvalidArgumentException(_T("day out of range"));		

		if (hour > 24)
			throw InvalidArgumentException(_T("hour out of range"));

		if (minute >= 60 || (hour == 24 && minute != 0))
			throw InvalidArgumentException(_T("minute out of range"));

		if (second < 0 || second >= 60 || (hour == 24 && second != 0))
			throw InvalidArgumentException(_T("second out of range"));		

		// days within year
		int days = monthTable[month - 1] + day - 1;

		// start of year computation
		int yearRed = year - 1;
		int yearRem = yearRed % 400;
		if (yearRem < 0) yearRem += 400;
		days += (yearRed - yearRem) / 400 * 146097;
		days += (yearRem / 100) * 36524;
		yearRem %= 100;
		days += (yearRem / 4) * 1461;
		yearRem %= 4;
		days += yearRem * 365;		

		// time value
		__int64 secondval = (__int64)floor((second * TicksPerSecond)+0.5);
		__int64 val = ((__int64)(days * 24 + hour) * 60 + minute) * TicksPerSecond * 60;

		return val + secondval;
	}

	__int64 DateTime::NormalizedValue() const
	{
		if (HasTimezone())
			return Value() - Timezone() * TicksPerSecond * 60;
		return Value();
	}

	double DateTime::Second() const
	{
		__int64 remainder = m_value % (60 * TicksPerSecond);
		if (remainder < 0)
			remainder += 60 * TicksPerSecond;

		return (double)remainder / TicksPerSecond;
	}

	unsigned char DateTime::Minute() const
	{
		__int64 remainder = m_value % (60 * 60 * TicksPerSecond);
		if ( remainder < 0 )
			remainder += 60 * 60 * TicksPerSecond;
		int value = (int)((remainder / (60 * TicksPerSecond)) % 60);
		return value < 0 ? value + 60 : value;
	}

	unsigned char DateTime::Hour() const
	{
		__int64 remainder = m_value % (24 * 60 * 60 * TicksPerSecond);
		if ( remainder < 0 )
			remainder += 24 * 60 * 60 * TicksPerSecond;
		int value = (int)((remainder / (60 * 60 * TicksPerSecond)) % 24);
		return value < 0 ? value + 24 : value;
	}

	void DateTime::GetDateFromTimeValue(
		__int64 tvTime, int& rnYear, int& rnMonth, int& rnDay)
	{
		__int64 remainder = tvTime % (24 * 60 * 60 * TicksPerSecond);
		if ( remainder < 0 )
			remainder += 24 * 60 * 60 * TicksPerSecond;

		int nDays = (int)((tvTime - remainder) / (24 * 60 * 60 * TicksPerSecond));
		rnYear = 1; 
		rnMonth = 1;
		rnDay = 1;

		int nDayRem = nDays % (303 * 365 + 97 * 366);
		if ( nDayRem < 0 ) nDayRem += (303 * 365 + 97 * 366);
		rnYear += 400 * ( (nDays - nDayRem) / (303 * 365 + 97 * 366) );
		if ( nDayRem == (303 * 365 + 97 * 366) - 1 )
		{
			rnYear += 399; 
			nDayRem = 365;
		}
		else
		{
			rnYear += 100 * ( nDayRem / (76 * 365 + 24 * 366) );
			nDayRem %= (76 * 365 + 24 * 366);
			rnYear += 4 * ( nDayRem / (365 * 3 + 366) );
			nDayRem %= (365 * 3 + 366);
			if ( nDayRem == (365 * 3 + 366) - 1 ) // last day of leap year
			{
				rnYear += 3; 
				nDayRem = 365;
			}
			else
			{
				rnYear += nDayRem / 365;
				nDayRem %= 365;
			}
		}

		const unsigned* pMonthStarts;
		if ( ( rnYear % 4 == 0 ) && ( ( rnYear % 100 != 0 ) || ( rnYear % 400 == 0 ) ) )
			pMonthStarts = monthStartLeap;
		else
			pMonthStarts = monthStart;

		while ( nDayRem >= (int) pMonthStarts[ rnMonth ] )
			++rnMonth;

		rnDay = nDayRem - pMonthStarts[ rnMonth - 1 ] + 1;
	}

	unsigned char DateTime::Day() const
	{
		int year, month, day;
		GetDateFromTimeValue(m_value, year, month, day);
		return day;
	}

	unsigned char DateTime::Month() const
	{
		int year, month, day;
		GetDateFromTimeValue(m_value, year, month, day);
		return month;
	}

	int DateTime::Year() const
	{
		int year, month, day;
		GetDateFromTimeValue(m_value, year, month, day);
		return year;
	}

	int DateTime::DayOfYear() const
	{
		int year, month, day;
		GetDateFromTimeValue( Value(), year, month, day);
		const unsigned* monthTable = IsLeapYear(year) ? monthStartLeap : monthStart;

		return monthTable[ month - 1 ] + day;
	}

	int DateTime::WeekOfMonth() const
	{
		int year, month, day;
		GetDateFromTimeValue( Value(), year, month, day);

		//get the first day of the month and determine its weekday
		//then use this weekday as offset
		DateTime startDate( year, month, 1, 0, 0, 0);
		int nWeekday = startDate.Weekday();
		int arWeek[6];
		arWeek[0] = 0;
		arWeek[1] = 7 - nWeekday;

		//init the week array
		for( int i = 2; i < 6; ++i) arWeek[i] = arWeek[i-1] + 7;

		int week = 5;
		while( day <= arWeek[week] ) week--;
		return week + 1;
	}

	int DateTime::Weeknumber() const
	{
		/* We use ISO-8601: Week 1 is the week containing Jan 4th.
			
			ISO-8601 also has the odd rule that the last few days of a year may be in week 1 of the following year,
			and the first few days of a year may actually belong to the previous year.
		*/
		int year, month, day;
		GetDateFromTimeValue( Value(), year, month, day );

		for ( int offset = 1; offset >= -1; --offset )
		{
			DateTime startOfYear( year + offset, 1, 4, 0, 0, 0.0 );
			int firstweekday = startOfYear.Weekday();

			// now we go back firstweekday days.
			DateTime startOfWeekOne = startOfYear - DayTimeDuration(firstweekday, 0, 0, 0.0);
			if ( startOfWeekOne <= *this )
			{
				// the number of days passed helps us.
				DayTimeDuration days = *this - startOfWeekOne;

				int weeks = days.Days() / 7 + 1;		
				
				return weeks;
			}
		}

		// this cannot happen actually, so we return zero.
		return 0;
	}


	DateTime::DateTime(int year, unsigned char month, unsigned char day, unsigned char hour, unsigned char minute, double second)
		: m_value(Init(year, month, day, hour, minute, second)), m_timezone(NO_TIMEZONE)
	{
	}


	DateTime::DateTime(int year, unsigned char month, unsigned char day, unsigned char hour, unsigned char minute, double second, short timezone)
		: m_value(Init(year, month, day, hour, minute, second)), m_timezone(timezone)
	{
	}


	DayTimeDuration::DayTimeDuration(int days, int hours, int minutes, double seconds)
		: m_value(0)
	{		
		m_value += days;
		m_value *= 24;
		m_value += hours;
		m_value *= 60;
		m_value += minutes;
		m_value *= 60 * TicksPerSecond;
		m_value += (__int64)floor((seconds * TicksPerSecond)+0.5);
	}




	int DayTimeDuration::Days() const
	{
		// round towards zero.
		return (int)(m_value / (24 * 60 * 60 * TicksPerSecond));
	}

	int DayTimeDuration::Hours() const
	{
		// sign depends on sign of value.
		return (int)(m_value / (60 * 60 * TicksPerSecond)) % 24;
	}

	int DayTimeDuration::Minutes() const
	{
		// sign depends on sign of value.
		return (int)(m_value / (60 * TicksPerSecond)) % 60;
	}

	double DayTimeDuration::Seconds() const
	{
		// sign depends on sign of value.
		return ((double)(m_value % (60 * TicksPerSecond))) / TicksPerSecond;
	}


	YearMonthDuration::YearMonthDuration(int years, int months)
		: m_value(years * 12 + months)
	{
	}

	
	int YearMonthDuration::Years() const
	{
		return m_value / 12;
	}


	int YearMonthDuration::Months() const
	{
		return m_value % 12;
	}


	Duration::Duration(const YearMonthDuration& ym, const DayTimeDuration& dt)
		: yearMonth(ym), dayTime(dt)
	{
		if ((yearMonth.IsNegative() && dayTime.IsPositive()) ||
			(yearMonth.IsPositive() && dayTime.IsNegative()))
			throw ValueNotRepresentableException(_T("duration"));
	}



	DayTimeDuration operator- (const DateTime& first, const DateTime& second)
	{
		return DayTimeDuration(first.NormalizedValue() - second.NormalizedValue());
	}

	
	DayTimeDuration operator- (const DayTimeDuration& x)
	{
		return DayTimeDuration(-x.Value());
	}


	DayTimeDuration operator+ (const DayTimeDuration& first, const DayTimeDuration& second)
	{
		return DayTimeDuration(first.Value() + second.Value());
	}


	DayTimeDuration operator- (const DayTimeDuration& first, const DayTimeDuration& second)
	{
		return DayTimeDuration(first.Value() - second.Value());
	}


	YearMonthDuration operator- (const YearMonthDuration& x)
	{
		return YearMonthDuration(-x.Value());
	}


	YearMonthDuration operator+ (const YearMonthDuration& first, const YearMonthDuration& second)
	{
		return YearMonthDuration(first.Value() + second.Value());
	}

	
	YearMonthDuration operator- (const YearMonthDuration& first, const YearMonthDuration& second)
	{
		return YearMonthDuration(first.Value() - second.Value());
	}


	DateTime operator+ (const DateTime& first, const DayTimeDuration& second)
	{
		return DateTime(first.Value() + second.Value(), first.Timezone());	
	}


	DateTime operator- (const DateTime& first, const DayTimeDuration& second)
	{
		return DateTime(first.Value() - second.Value(), first.Timezone());
	}


	DateTime operator+ (const DateTime& first, const YearMonthDuration& second)
	{
		int year = first.Year();
		int month = first.Month() - 1;
		int day = first.Day();

		month += second.Months();
		
		int monthrem = month % 12;
		if (monthrem < 0)
		{ 
			monthrem += 12;
		}
		year += second.Years() + (month - monthrem) / 12;
		month = monthrem;

		if (DateTime::IsLeapYear(year))
		{
			if (day > (int) monthStartLeap[month + 1] - (int) monthStartLeap[month])
				day = (int) monthStartLeap[month + 1] - (int) monthStartLeap[month];
		}
		else
		{
			if (day > (int) monthStart[month + 1] - (int) monthStart[month])
				day = (int) monthStart[month + 1] - (int) monthStart[month];
		}
		
		return DateTime(year, month + 1, day, first.Hour(), first.Minute(), first.Second(), first.Timezone());
	}

	DateTime operator- (const DateTime& first, const YearMonthDuration& second)
	{		
		return first + -second;
	}

	DateTime operator+ (const DateTime& first, const Duration& second)
	{
		// order is important:
		return first + second.YearMonth() + second.DayTime();
	}

	DateTime operator- (const DateTime& first, const Duration& second)
	{
		return first - second.YearMonth() - second.DayTime();
	}


	bool operator== (const DateTime& first, const DateTime& second)
	{
		if (first.HasTimezone() == second.HasTimezone())
			return first.NormalizedValue() == second.NormalizedValue();
		return false;
	}

	bool operator!= (const DateTime& first, const DateTime& second)
	{
		if (first.HasTimezone() == second.HasTimezone())
			return first.NormalizedValue() != second.NormalizedValue();
		return true;
	}
	
	bool operator< (const DateTime& first, const DateTime& second)
	{
		if (first.HasTimezone() == second.HasTimezone())
			return first.NormalizedValue() < second.NormalizedValue();
		else if (first.HasTimezone())
			return first < DateTime(second.Value(), +14 * 60);
		else // (second.HasTimezone())
			return DateTime(first.Value(), -14 * 60) < second;
	}

	bool operator<= (const DateTime& first, const DateTime& second)
	{
		return first == second || first < second;
	}
	

	bool operator== (const Duration& first, const Duration& second)
	{
		return first.YearMonth() == second.YearMonth() && 
			first.DayTime() == second.DayTime();
	}

	bool operator< (const Duration& first, const Duration& second)
	{
		static DateTime ref1(1696, 9, 1, 0, 0, 0, 0);
		static DateTime ref2(1697, 2, 1, 0, 0, 0, 0);
		static DateTime ref3(1903, 3, 1, 0, 0, 0, 0);
		static DateTime ref4(1903, 7, 1, 0, 0, 0, 0);

		// do the odd.
		return (ref1 + first < ref1 + second) && 
			(ref2 + first < ref2 + second) &&
			(ref3 + first < ref3 + second) &&
			(ref4 + first < ref4 + second);
	}

	bool operator<= (const Duration& first, const Duration& second)
	{
		// do the odd.
		static DateTime ref1(1696, 9, 1, 0, 0, 0, 0);
		static DateTime ref2(1697, 2, 1, 0, 0, 0, 0);
		static DateTime ref3(1903, 3, 1, 0, 0, 0, 0);
		static DateTime ref4(1903, 7, 1, 0, 0, 0, 0);

		// do the odd.
		return (ref1 + first <= ref1 + second) && 
			(ref2 + first <= ref2 + second) &&
			(ref3 + first <= ref3 + second) &&
			(ref4 + first <= ref4 + second);
	}
}


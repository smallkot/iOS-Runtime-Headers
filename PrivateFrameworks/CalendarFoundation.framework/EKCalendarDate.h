/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    double  _dateAbs;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    }  _dateGr;
    unsigned int  _flags;
    EKTimeZone * _timeZone;
}

+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;

- (void).cxx_destruct;
- (double)absoluteTime;
- (id)calendarDateByAddingDays:(int)arg1;
- (id)calendarDateByAddingGregorianUnits:(struct { int x1; int x2; int x3; int x4; int x5; double x6; })arg1;
- (id)calendarDateByAddingMonths:(int)arg1;
- (id)calendarDateByAddingWeeks:(int)arg1;
- (id)calendarDateByAddingYears:(int)arg1;
- (id)calendarDateForDay;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(long)arg1;
- (id)calendarDateForMonth;
- (id)calendarDateForWeekWithWeekStart:(long)arg1;
- (id)calendarDateForWeekWithWeekStart:(long)arg1 daysSinceWeekStart:(int*)arg2;
- (id)calendarDateForYear;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateWithDate:(id)arg1;
- (int)compare:(id)arg1;
- (id)components;
- (id)componentsIncludingTime:(BOOL)arg1;
- (id)componentsWithoutTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (unsigned int)day;
- (long)dayOfWeek;
- (unsigned int)dayOfYear;
- (unsigned int)daysInMonth;
- (unsigned int)daysInYear;
- (id)description;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })differenceAsGregorianUnits:(id)arg1 flags:(unsigned long)arg2;
- (int)differenceInDays:(id)arg1;
- (int)differenceInMonths:(id)arg1;
- (int)differenceInYears:(id)arg1;
- (id)earlierDate:(id)arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })gregorianDate;
- (unsigned int)hour;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 internalTimeZone:(id)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)laterDate:(id)arg1;
- (unsigned int)minute;
- (unsigned int)month;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)second;
- (int)secondsFromGMT;
- (id)timeZone;
- (unsigned int)weekOfYear;
- (unsigned int)weeksInYear;
- (unsigned int)year;

@end
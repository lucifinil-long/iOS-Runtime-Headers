/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZone : ICSComponent {
    id _systemTimeZone;
}

@property(retain) NSString *tzid;

+ (id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3;
+ (id)name;
+ (id)timeZoneWithSystemTimeZoneName:(id)arg1;

- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (void)dealloc;
- (id)getNSTimeZone:(id)arg1;
- (id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2;
- (id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(NSInteger)arg3;
- (id)initWithSystemTimeZone:(id)arg1;
- (id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(NSInteger)arg3;
- (BOOL)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2;
- (void)setTzid:(id)arg1;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)tzid;

@end

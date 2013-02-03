/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {
    NSInteger _hour;
    NSInteger _minute;
    NSInteger _second;
}

@property(readonly) NSInteger second; /* unknown property attribute: V_second */
@property(readonly) NSInteger minute; /* unknown property attribute: V_minute */
@property(readonly) NSInteger hour; /* unknown property attribute: V_hour */

- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)components;
- (NSInteger)dateType;
- (void)encodeWithCoder:(id)arg1;
- (NSInteger)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3;
- (NSInteger)minute;
- (NSInteger)second;

@end

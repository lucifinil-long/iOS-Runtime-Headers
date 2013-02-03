/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSCoding> {
    ICSDuration *_duration;
    ICSDateValue *_end;
    ICSDateValue *_start;
}

- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (void)dealloc;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1;
- (BOOL)isDurationBased;
- (id)start;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSUserAddress : ICSProperty {
}

@property(retain) NSString *cn;
@property(retain) NSString *dir;
@property(retain) NSString *x_calendarserver_email;
@property NSInteger cutype;
@property NSInteger partstat;
@property NSInteger role;
@property BOOL rsvp;
@property NSInteger schedulestatus;
@property BOOL x_apple_self_invited;

+ (id)ICSStringFromCalendarUser:(NSInteger)arg1;
+ (id)ICSStringFromParticipationStatus:(NSInteger)arg1;
+ (id)ICSStringFromRole:(NSInteger)arg1;
+ (id)ICSStringFromScheduleStatus:(NSInteger)arg1;
+ (id)URLForNoMail;
+ (NSInteger)calendarUserFromICSString:(id)arg1;
+ (NSInteger)participationStatusFromICSString:(id)arg1;
+ (NSInteger)roleFromICSString:(id)arg1;
+ (NSInteger)scheduleStatusFromICSString:(id)arg1;

- (id)cn;
- (NSInteger)cutype;
- (id)dir;
- (id)displayName;
- (id)emailAddress;
- (void)fixAddress;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEmailAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isHTTPSAddress;
- (NSInteger)partstat;
- (NSInteger)role;
- (BOOL)rsvp;
- (NSInteger)schedulestatus;
- (void)setCn:(id)arg1;
- (void)setCutype:(NSInteger)arg1;
- (void)setDir:(id)arg1;
- (void)setPartstat:(NSInteger)arg1;
- (void)setRole:(NSInteger)arg1;
- (void)setRsvp:(BOOL)arg1;
- (void)setSchedulestatus:(NSInteger)arg1;
- (void)setX_apple_self_invited:(BOOL)arg1;
- (void)setX_calendarserver_email:(id)arg1;
- (BOOL)x_apple_self_invited;
- (id)x_calendarserver_email;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class PBStreamReader, <PBMessageStreamDelegate>;

@interface PBMessageStreamReader : NSObject {
    Class _classOfNextMessage;
    <PBMessageStreamDelegate> *_delegate;
    PBStreamReader *_reader;
}

@property Class classOfNextMessage; /* unknown property attribute: V_classOfNextMessage */
@property(retain) <PBMessageStreamDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) PBStreamReader *reader; /* unknown property attribute: V_reader */

- (Class)classOfNextMessage;
- (void)dealloc;
- (id)delegate;
- (id)initWithStream:(id)arg1;
- (id)nextMessage;
- (id)reader;
- (void)setClassOfNextMessage:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReader:(id)arg1;

@end

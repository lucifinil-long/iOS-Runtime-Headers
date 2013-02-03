/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface NSDataMessageStore : MailMessageStore {
    NSData *_data;
    Class _messageClass;
}

- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (void)dealloc;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)mailboxUid;
- (id)message;
- (void)setMessageClass:(Class)arg1;
- (id)storePath;
- (void)writeUpdatedMessageDataToDisk;

@end

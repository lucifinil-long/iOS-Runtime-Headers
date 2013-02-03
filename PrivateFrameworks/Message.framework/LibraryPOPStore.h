/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class POP3Connection;

@interface LibraryPOPStore : LibraryStore {
    POP3Connection *_connection;
}

- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_handleFlagsChangedForMessages:(id)arg1 oldFlagsByMessage:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3;
- (void)dealloc;
- (NSInteger)fetchNumMessages:(NSUInteger)arg1 preservingUID:(id)arg2 beforeUID:(NSUInteger)arg3 synchronize:(BOOL)arg4 compact:(BOOL)arg5;
- (NSInteger)fetchSynchronously;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)hasMoreMessages:(NSUInteger)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)messageForRemoteID:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)purgeMessages:(id)arg1;
- (NSUInteger)serverMessageCount;
- (NSUInteger)serverUnreadCount;
- (NSUInteger)serverUnreadOnlyOnServerCount;
- (void)setServerMessageCount:(NSUInteger)arg1;
- (void)setServerUnreadCount:(NSUInteger)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface ASFetchAttachmentTask : ASTask {
    NSString *_attachmentName;
    NSString *_messageServerID;
}

- (id)attachmentName;
- (id)command;
- (NSInteger)commandCode;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (id)contentType;
- (void)dealloc;
- (BOOL)expectsWBXML;
- (void)finishWithError:(id)arg1;
- (id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
- (id)messageID;
- (id)parameterData;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (BOOL)shouldLogIncomingData;

@end

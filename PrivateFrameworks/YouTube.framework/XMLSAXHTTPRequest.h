/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableData, NSURLRequest, NSURLConnection;

@interface XMLSAXHTTPRequest : NSObject {
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        NSUInteger initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    NSURLConnection *_connection;
    BOOL _invalidResponse;
    NSMutableData *_rawData;
    NSURLRequest *_request;
    } _saxHandler;
}

+ (BOOL)anyRequestLoading;
+ (id)serviceUnavailableError;
+ (NSUInteger)uniqueQueryID;

- (void)_finishedLoading;
- (void)_startedLoading;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (void)loadStatusChanged;
- (NSInteger)parseData:(id)arg1;
- (BOOL)receivedValidResponse:(id)arg1;
- (id)request;
- (void)willParseData;

@end

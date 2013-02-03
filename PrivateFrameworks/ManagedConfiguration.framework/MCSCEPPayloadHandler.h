/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSDictionary, NSString, NSNumber;

@interface MCSCEPPayloadHandler : MCIdentityCertificatePayloadHandler {
    struct __CFData { } *_certificate;
    struct __CFDictionary { } *_keygen_parameters;
    NSDictionary *_payload_dict;
    NSInteger _phase;
    NSString *_scep_base_url;
    NSString *_scep_challenge;
    BOOL _scep_challenge_skipped;
    NSString *_scep_instance_name;
    NSNumber *_scep_key_usage;
    NSArray *_scep_subject;
    void *_subject;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (BOOL)shouldValidateCommonAttributes;

- (id)certificateData;
- (id)customTitleForCurrentInstallPhase;
- (void)dealloc;
- (id)detailDescription;
- (id)displayName;
- (struct __SecCertificate { }*)getCACert:(id)arg1 instance:(id)arg2;
- (id)initWithPayload:(id)arg1;
- (id)installPayload;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)performInstallStep;
- (id)preparePayload;
- (id)removePayloadWithRoot:(id)arg1;
- (id)rootDisplayName;
- (id)scepURLWithBase:(id)arg1 operation:(id)arg2 instance:(id)arg3;
- (id)scep_details;
- (void)setUserPromptedValues:(id)arg1;
- (id)userPromptValues;
- (id)validateSCEPAttributes:(id)arg1;

@end

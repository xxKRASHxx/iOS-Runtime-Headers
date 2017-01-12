/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo {
    NSArray * _rootRecordDesiredKeys;
    NSArray * _shareURLsToFetch;
    BOOL  _shouldFetchRootRecord;
}

@property (nonatomic, retain) NSArray *rootRecordDesiredKeys;
@property (nonatomic, retain) NSArray *shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rootRecordDesiredKeys;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(BOOL)arg1;
- (id)shareURLsToFetch;
- (BOOL)shouldFetchRootRecord;

@end
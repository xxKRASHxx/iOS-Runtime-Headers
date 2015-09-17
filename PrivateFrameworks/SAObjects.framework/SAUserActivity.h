/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUserActivity : SADomainObject

@property (nonatomic, copy) NSString *internalGUID;
@property (nonatomic) BOOL isEligibleForReminders;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)internalGUID;
- (BOOL)isEligibleForReminders;
- (void)setInternalGUID:(id)arg1;
- (void)setIsEligibleForReminders:(BOOL)arg1;

@end
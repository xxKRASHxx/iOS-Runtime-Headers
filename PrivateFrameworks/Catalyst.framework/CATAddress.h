/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATAddress : NSObject {
    NSString *_address;
    NSData *_data;
}

@property (nonatomic, readonly) NSString *address;
@property (getter=isAny, nonatomic, readonly) BOOL any;
@property (nonatomic, readonly) NSData *data;
@property (getter=isLocalWiFi, nonatomic, readonly) BOOL localWiFi;

+ (id)any;
+ (id)localWiFi;

- (void).cxx_destruct;
- (id)address;
- (id)data;
- (unsigned int)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isAny;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAddress:(id)arg1;
- (BOOL)isLocalWiFi;

@end
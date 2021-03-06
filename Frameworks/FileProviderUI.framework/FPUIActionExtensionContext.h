/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

@interface FPUIActionExtensionContext : NSExtensionContext {
    NSString * _domainIdentifier;
}

@property (copy) NSString *domainIdentifier;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_remoteContext;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequest;
- (id)domainIdentifier;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDomainIdentifier:(id)arg1;

@end

#import <Cordova/CDVPlugin.h>

@interface TouchID :CDVPlugin

- (void) isAvailable:(CDVInvokedUrlCommand*)command;
- (void) authenticate:(CDVInvokedUrlCommand*)command;
- (void) didFingerprintDatabaseChange:(CDVInvokedUrlCommand*)command;

- (void) verifyFingerprint:(CDVInvokedUrlCommand*)command;
- (void) verifyFingerprintWithCustomPasswordFallback:(CDVInvokedUrlCommand*)command;
- (void) verifyFingerprintWithCustomPasswordFallbackAndEnterPasswordLabel:(CDVInvokedUrlCommand*)command;

- (void) askPassword:(CDVInvokedUrlCommand*)command;
- (void) callTouchWithPasswordDialog:(CDVInvokedUrlCommand*)command;

@end

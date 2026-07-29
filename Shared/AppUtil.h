#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <dlfcn.h>

#define APP_ID @"com.yourdomain.dylibtester"
#define APP_NAME @"DylibTester"

extern NSString *getExecutablePath(void);
extern NSString *rootHelperPath(void);
extern int spawnRoot(NSString* path, NSArray* args, NSString** stdOut, NSString** stdErr);
extern void killall(NSString* processName, BOOL softly);
extern void respring(void);

extern void fetchLatestLdidVersion(void (^completionHandler)(NSString* latestVersion));

@interface UIAlertController (Private)
@property (setter=_setAttributedTitle:, getter=_attributedTitle, nonatomic, copy) NSAttributedString* attributedTitle;
@property (setter=_setAttributedMessage:, getter=_attributedMessage, nonatomic, copy) NSAttributedString* attributedMessage;
@property (nonatomic, retain) UIImage* image;
@end

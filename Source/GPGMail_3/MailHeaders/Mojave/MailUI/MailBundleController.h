//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface MailBundleController : NSObject
{
    NSArray *_bundlesDirectories;
}

+ (void)deleteDataVault;
- (void)uninstallBundle:(id)arg1;
- (void)installBundle:(id)arg1;
- (void)loadBundles;
@property(readonly, nonatomic) NSURL *dataVaultURL;
@property(readonly, copy, nonatomic) NSArray *bundles;
- (id)init;

@end

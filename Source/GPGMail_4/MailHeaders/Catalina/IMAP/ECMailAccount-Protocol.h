//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <IMAP/NSCopying-Protocol.h>
//#import <IMAP/NSObject-Protocol.h>

@class ACAccount, NSArray, NSString;

@protocol ECMailAccount <NSObject, NSCopying>
@property(readonly, copy) NSString *identifier;
@property(copy) NSString *password;
@property(copy) NSString *hostname;
@property(readonly, copy) NSArray *emailAddressStrings;
- (ACAccount *)systemAccount;
@end

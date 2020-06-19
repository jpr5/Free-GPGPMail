//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetFolderResponseOperation, NSString;

@interface MFEWSRenameFolderRequestOperation : MFEWSRequestOperation
{
    NSString *_folderIdString;	// 24 = 0x18
    NSString *_folderName;	// 32 = 0x20
    MFEWSGetFolderResponseOperation *_changeKeysResponse;	// 40 = 0x28
}

@property(readonly, nonatomic) MFEWSGetFolderResponseOperation *changeKeysResponse; // @synthesize changeKeysResponse=_changeKeysResponse;
@property(readonly, copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly, copy, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (void).cxx_destruct;	// IMP=0x00000000000b498d
- (id)prepareRequest;	// IMP=0x00000000000b45e3
- (BOOL)isFolderRequest;	// IMP=0x00000000000b45d8
- (id)activityString;	// IMP=0x00000000000b456b
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x00000000000b449c
- (id)initWithEWSFolderIdString:(id)arg1 name:(id)arg2 gateway:(id)arg3;	// IMP=0x00000000000b4162

@end

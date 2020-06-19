//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "TerminationHandler.h"

@class MessageViewer, NSString, NSTimer;

@interface MailTimeMachineController : NSObject <TerminationHandler>
{
    id _tableOfContentsSaveLock;	// 8 = 0x8
    NSTimer *_tableOfContentsSaveTimer;	// 16 = 0x10
    BOOL _savingTOC;	// 24 = 0x18
    MessageViewer *_messageViewer;	// 32 = 0x20
    struct CGRect _originalMailWindowFrame;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00000001000031cd
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001edfe3
+ (id)log;	// IMP=0x00000001001edf84
@property(nonatomic) struct CGRect originalMailWindowFrame; // @synthesize originalMailWindowFrame=_originalMailWindowFrame;
@property(nonatomic) BOOL savingTOC; // @synthesize savingTOC=_savingTOC;
@property(retain, nonatomic) MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
- (void).cxx_destruct;	// IMP=0x00000001001f08e1
- (void)relinquishTimeMachineAccess;	// IMP=0x00000001001f0815
- (void)exitTimeMachine;	// IMP=0x00000001001f04d5
- (void)prepareToExitTimeMachineModeWithDisplayState:(id)arg1;	// IMP=0x00000001001f030a
- (void)enterTimeMachineMode;	// IMP=0x00000001001f026a
- (unsigned char)_launchTimeMachineHelperApp;	// IMP=0x00000001001eec8c
- (id)_mailTimeMachineDescriptionForMessage:(id)arg1 withColumns:(id)arg2 selected:(BOOL)arg3;	// IMP=0x00000001001ee5c2
- (void)_threadedSaveTableOfContentsApprovedQuit:(BOOL)arg1;	// IMP=0x00000001001ee49d
- (BOOL)_timingOutSaveTableOfContents;	// IMP=0x00000001001ee27a
- (void)_threadedSaveTableOfContentsEnded:(id)arg1;	// IMP=0x00000001000a8a3c
- (void)_thread_saveTableOfContents:(id)arg1;	// IMP=0x00000001000a85d5
- (void)_saveTableOfContents;	// IMP=0x00000001000a88c5
- (void)_approvedQuit;	// IMP=0x00000001000ba1e5
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x00000001000ba105
- (void)unregisterTimeMachineHandlers;	// IMP=0x00000001000bb288
- (void)registerTimeMachineHandlers;	// IMP=0x0000000100003335
- (void)disableTableOfContentsSaveTimer:(BOOL)arg1;	// IMP=0x00000001001ee251
- (void)_setTableOfContentsTimer:(id)arg1;	// IMP=0x000000010009d34e
- (void)_setTableOfContentsIsValid:(BOOL)arg1;	// IMP=0x000000010009d217
- (void)forceSaveTableOfContentsNow;	// IMP=0x00000001001ee21d
- (void)_saveTableOfContents:(id)arg1;	// IMP=0x00000001001ee1c8
- (void)_invalidateTableOfContents:(id)arg1;	// IMP=0x000000010009d1d4
- (void)_invalidateTableOfContentsAndBackupManager:(id)arg1;	// IMP=0x000000010009d14e
- (void)registerNotificationHandlers;	// IMP=0x000000010004ee56
- (void)dealloc;	// IMP=0x00000001001ee0ad
- (id)init;	// IMP=0x000000010000328c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

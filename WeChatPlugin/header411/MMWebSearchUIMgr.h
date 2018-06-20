//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt.h"
#import "MMService.h"

@class MMWebSearchWindowController, NSString;

@interface MMWebSearchUIMgr : MMService <AccountServiceExt, MMService>
{
    MMWebSearchWindowController *_webSearchWC;
}

+ (void)LazyRegisterExtension;
@property(retain, nonatomic) MMWebSearchWindowController *webSearchWC; // @synthesize webSearchWC=_webSearchWC;
- (void).cxx_destruct;
- (void)orderFrontWebSearchWindow;
- (void)closeWebSearchWindow;
- (void)openWebSearchWindowWithkeyWord:(id)arg1;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)destroy;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


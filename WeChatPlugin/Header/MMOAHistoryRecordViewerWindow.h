//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewerWindow.h"

#import "AccountServiceExt.h"
#import "MMGetA8KeyLogicDelegate.h"
#import "NSSharingServiceDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class MMGetA8KeyLogic, NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface MMOAHistoryRecordViewerWindow : MMViewerWindow <WKUIDelegate, WKNavigationDelegate, MMGetA8KeyLogicDelegate, AccountServiceExt, NSSharingServiceDelegate>
{
    NSURL *_historyRecordUrl;
    WKWebView *_webView;
    MMGetA8KeyLogic *_getA8KeyLogic;
}

+ (id)defaultOAHistoryRecordViewerWindow;
@property(retain, nonatomic) MMGetA8KeyLogic *getA8KeyLogic; // @synthesize getA8KeyLogic=_getA8KeyLogic;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *historyRecordUrl; // @synthesize historyRecordUrl=_historyRecordUrl;
- (void).cxx_destruct;
- (void)onUserLogout;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)getA8KeyDidFaildWithReason:(int)arg1;
- (void)getA8keyDidFinishedWithReason:(int)arg1 fullURL:(id)arg2;
- (id)contentForSharing;
- (void)nextItem:(id)arg1;
- (void)previousItem:(id)arg1;
- (void)share:(id)arg1;
- (void)sharingServiceAction:(id)arg1;
- (void)menuActionForward:(id)arg1;
- (id)makeContextMenu;
- (void)openInExternalBrowser:(id)arg1;
- (BOOL)showLoadingIndicator;
- (id)supportedActions;
- (void)startGetA8KeyWithURL:(id)arg1;
- (void)dealloc;
- (struct CGSize)sizeForContent;
- (BOOL)toolbarAutohides;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)willStartOpening:(BOOL)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


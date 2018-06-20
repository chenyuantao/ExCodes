//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDraggableWindowController.h"

@class MMTextField, NSImageView, NSTextView, NSView;

__attribute__((visibility("hidden")))
@interface MMAboutWindowController : MMDraggableWindowController
{
    MMTextField *_versionLabel;
    NSTextView *_copyrightLabel;
    NSView *_bgContainer;
    NSImageView *_weChatTitle;
}

@property __weak NSImageView *weChatTitle; // @synthesize weChatTitle=_weChatTitle;
@property(nonatomic) __weak NSView *bgContainer; // @synthesize bgContainer=_bgContainer;
@property(retain, nonatomic) NSTextView *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(nonatomic) __weak MMTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void).cxx_destruct;
- (void)flagsChanged:(id)arg1;
- (void)copyVersionString;
- (void)copy:(id)arg1;
- (void)windowDidLoad;

@end


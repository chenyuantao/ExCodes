//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@class NSImage, NSString;

@interface MMChatPreviewTypePlaceholder : MMView
{
    BOOL _selected;
    NSImage *_icon;
    NSString *_caption;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)_windowDidChangeMain;
- (id)badgeContentsColor;
- (id)badgeBorderColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface MMPreviewDraggableWindow : NSWindow
{
    CDUnknownBlockType _keyDownBlockIsHandled;
    CDUnknownBlockType _mouseMoveBlockIsHandled;
    id <MMPreviewDraggableWindowDelegate> _closeDelegate;
}

@property(nonatomic) __weak id <MMPreviewDraggableWindowDelegate> closeDelegate; // @synthesize closeDelegate=_closeDelegate;
@property(copy, nonatomic) CDUnknownBlockType mouseMoveBlockIsHandled; // @synthesize mouseMoveBlockIsHandled=_mouseMoveBlockIsHandled;
@property(copy, nonatomic) CDUnknownBlockType keyDownBlockIsHandled; // @synthesize keyDownBlockIsHandled=_keyDownBlockIsHandled;
- (void).cxx_destruct;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)keyDown:(id)arg1;

@end


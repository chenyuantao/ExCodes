//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"
#import "NSPasteboardItemDataProvider.h"

@class NSEvent, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface RHDraggableImageView : NSImageView <NSDraggingSource, NSDraggingDestination, NSPasteboardItemDataProvider>
{
    BOOL _allowsDragging;
    BOOL _mouseDown;
    struct CGPoint _mouseDownPoint;
    NSEvent *_mouseDownEvent;
    BOOL _dragInProgress;
    long long _currentDraggingSequenceNumber;
    NSString *_representedFilename;
    NSURL *_representedURL;
    double _maximumDragImageEdgeSize;
}

@property(nonatomic) double maximumDragImageEdgeSize; // @synthesize maximumDragImageEdgeSize=_maximumDragImageEdgeSize;
@property(copy, nonatomic) NSURL *representedURL; // @synthesize representedURL=_representedURL;
@property BOOL allowsDragging; // @synthesize allowsDragging=_allowsDragging;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
@property(copy, nonatomic) NSString *representedFilename; // @synthesize representedFilename=_representedFilename;
- (void)dealloc;
- (void)_rhdiv_sharedInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


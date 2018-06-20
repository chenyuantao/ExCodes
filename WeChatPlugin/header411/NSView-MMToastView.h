//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMToastView;

@interface NSView (MMToastView)
- (void)hideToast;
- (void)showToast;
- (void)setupDidClickOnToastViewBlock;
- (id)makeToastActivityWithText:(id)arg1;
- (id)makeToastWithText:(id)arg1 duration:(double)arg2 position:(struct CGPoint)arg3 image:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)makeToastWithText:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL clickToDismissToast;
@property(retain, nonatomic) MMToastView *toastView;
@end


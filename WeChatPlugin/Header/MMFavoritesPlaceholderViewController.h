//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

@class MMImageView, MMView, NSTextField;

__attribute__((visibility("hidden")))
@interface MMFavoritesPlaceholderViewController : MMViewController
{
    MMView *_containerView;
    MMImageView *_placeHolderImgView;
    NSTextField *_noItemsDescTextField;
    NSTextField *_addItemsTipsTextField;
}

@property(retain) NSTextField *addItemsTipsTextField; // @synthesize addItemsTipsTextField=_addItemsTipsTextField;
@property(retain) NSTextField *noItemsDescTextField; // @synthesize noItemsDescTextField=_noItemsDescTextField;
@property(retain) MMImageView *placeHolderImgView; // @synthesize placeHolderImgView=_placeHolderImgView;
@property(retain) MMView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)adjustContainerView;
- (id)getCollectionView;
- (void)openItems:(id)arg1;
- (void)scrollToItem:(id)arg1;
- (void)searchWithKeyword:(id)arg1;
- (void)clearSearch;
- (void)performSearchAction;
- (void)scrollToLatest:(BOOL)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)reloadData;
- (void)viewDidLoad;

@end


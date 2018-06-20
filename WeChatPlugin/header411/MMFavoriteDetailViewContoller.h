//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt.h"
#import "MMFavoritesDetailCellDelegate.h"
#import "MMFavoritesMgrExt.h"
#import "MMNetExt.h"
#import "MMPreviewPanelUIMgrDelegate.h"
#import "MMViewerWindowDelegate.h"
#import "NSDraggingSource.h"
#import "NSSearchFieldDelegate.h"
#import "NSTextFieldDelegate.h"

@class MMCustomDivider, MMDraggingOverlayView, MMFavoriteCollectionView, MMFavoritesCollectionData, MMFavoritesDetailBaseCell, MMTimer, MMWindowHandleView, NSArray, NSString, NSTextField, NSView;

@interface MMFavoriteDetailViewContoller : MMViewController <MMFavoritesDetailCellDelegate, NSTextFieldDelegate, NSDraggingSource, MMFavoritesMgrExt, AccountServiceExt, MMViewerWindowDelegate, NSSearchFieldDelegate, MMPreviewPanelUIMgrDelegate, MMNetExt>
{
    unsigned long long m_currentLayoutStyle;
    MMFavoriteCollectionView *m_collectionView;
    MMFavoritesCollectionData *m_data;
    NSArray *m_allPreviewItems;
    NSArray *m_cellsBeingDragged;
    MMFavoritesDetailBaseCell *m_cellShowSwipe;
    id <MMFavoriteDetailViewContollerDelegate> _delegate;
    MMWindowHandleView *_headerView;
    NSTextField *_titleTextField;
    MMCustomDivider *_divider;
    MMDraggingOverlayView *_draggingOverlayView;
    id _mouseDraggedEvent;
    MMTimer *_timer;
    unsigned long long _lastCalledSearchTime;
    NSString *_searchingString;
    NSView *_noSearchResultView;
}

@property(nonatomic) __weak NSView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(retain, nonatomic) NSString *searchingString; // @synthesize searchingString=_searchingString;
@property(nonatomic) unsigned long long lastCalledSearchTime; // @synthesize lastCalledSearchTime=_lastCalledSearchTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id mouseDraggedEvent; // @synthesize mouseDraggedEvent=_mouseDraggedEvent;
@property(retain, nonatomic) MMDraggingOverlayView *draggingOverlayView; // @synthesize draggingOverlayView=_draggingOverlayView;
@property(retain, nonatomic) MMCustomDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) MMWindowHandleView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MMFavoriteDetailViewContollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNetStatusChange:(int)arg1;
- (BOOL)cellSwipeDeleteButtonShown;
- (void)cellCleanSwipeEffect:(id)arg1;
- (void)cellShowSwipeEffect:(id)arg1;
- (void)cellSwipeDeleteConfirm:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)onAddLocalNoteItem:(id)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdatedItemWithLocalID:(unsigned int)arg1;
- (void)favoritesMgrDidUpdateTagsWithLocalIDArray:(id)arg1;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)favoritesMgrDidAddItems:(id)arg1 ErrCode:(int)arg2;
- (void)exportFileItems:(id)arg1;
- (void)openItems:(id)arg1;
- (void)_downloadSelectedFiles;
- (void)_shareItemsAtIndexPaths:(id)arg1;
- (void)_actuallyDeleteItems:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)paste:(id)arg1;
- (void)_copyFavoritesItems:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)clearSearch;
- (void)doSearch;
- (void)searchWithKeyword:(id)arg1;
@property(readonly, nonatomic) BOOL isSearching;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)_selectedItems;
- (void)cellDragged:(id)arg1 dragEvent:(id)arg2 originalPosition:(struct CGPoint)arg3;
- (void)_contextMenuShowSourceDebugTool;
- (void)_contextMenuShowXML:(id)arg1;
- (void)_contextMenuDelete:(id)arg1;
- (void)_contextMenuCopy:(id)arg1;
- (void)_contextMenuOpen:(id)arg1;
- (void)_contextMenuExport:(id)arg1;
- (void)_contextMenuShare:(id)arg1;
- (void)closedContextMenuFromCell:(id)arg1;
- (void)openedContextMenuFromCell:(id)arg1 fromButton:(BOOL)arg2;
- (id)contextMenuForCell:(id)arg1 forEvent:(id)arg2;
- (void)keyDown:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)showUploadFailForCapacityTips;
- (BOOL)isAlertItemDataDownloading:(id)arg1;
- (id)getCollectionView;
- (void)scrollToLatest:(BOOL)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollToItem:(id)arg1;
- (void)reloadData;
- (void)setupDraggingOverlayView;
- (void)setupTitleText;
- (void)setupHeaderView;
- (void)handleCellUpdateNotification;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)checkAsyncTask;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)getListRowHeightWithIndexPath:(id)arg1 andWidthConstrain:(double)arg2;
- (double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 mouseUpInItemAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 mouseUpInItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 mouseDownInItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)shouldShowSectionHeader;
- (id)collectionView:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 inSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getCollectionViewCellIdWithIndexPath:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerCollectionViewCell;
- (void)setupCollectionViewLayout;
- (void)setupCollectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


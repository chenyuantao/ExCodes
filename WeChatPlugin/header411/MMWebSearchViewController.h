//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMTableViewDelegate.h"
#import "MMWebSearchSuggestVCDelegate.h"
#import "NSControlTextEditingDelegate.h"
#import "NSSearchFieldDelegate.h"
#import "NSTabViewDelegate.h"
#import "NSTableViewDataSource.h"

@class MMCustomDivider, MMCustomSearchField, MMImageView, MMTableView, MMTextField, MMWebSearchSuggestViewController, NSArray, NSProgressIndicator, NSString;

@interface MMWebSearchViewController : MMViewController <NSTabViewDelegate, NSTableViewDataSource, NSSearchFieldDelegate, MMTableViewDelegate, NSControlTextEditingDelegate, MMWebSearchSuggestVCDelegate>
{
    BOOL _isSearching;
    BOOL _noMoreResults;
    BOOL _isInitialSearch;
    NSString *_keyWord;
    MMImageView *_iconView;
    MMTextField *_titleLabel;
    MMTableView *_tableView;
    MMTextField *_resultTitle;
    MMTextField *_defaultOrder;
    MMTextField *_timeOrder;
    MMCustomDivider *_orderDivider;
    MMCustomDivider *_tableDivider;
    MMCustomSearchField *_searchField;
    MMTextField *_searchStatusHint;
    NSProgressIndicator *_indicator;
    MMImageView *_searchNoResultHint;
    NSArray *_searchResults;
    id _mouseEvent;
    MMWebSearchSuggestViewController *_suggestVC;
}

@property(nonatomic) BOOL isInitialSearch; // @synthesize isInitialSearch=_isInitialSearch;
@property(retain, nonatomic) MMWebSearchSuggestViewController *suggestVC; // @synthesize suggestVC=_suggestVC;
@property(retain, nonatomic) id mouseEvent; // @synthesize mouseEvent=_mouseEvent;
@property(nonatomic) BOOL noMoreResults; // @synthesize noMoreResults=_noMoreResults;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) MMImageView *searchNoResultHint; // @synthesize searchNoResultHint=_searchNoResultHint;
@property(retain, nonatomic) NSProgressIndicator *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) MMTextField *searchStatusHint; // @synthesize searchStatusHint=_searchStatusHint;
@property(retain, nonatomic) MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak MMCustomDivider *tableDivider; // @synthesize tableDivider=_tableDivider;
@property(nonatomic) __weak MMCustomDivider *orderDivider; // @synthesize orderDivider=_orderDivider;
@property(nonatomic) __weak MMTextField *timeOrder; // @synthesize timeOrder=_timeOrder;
@property(nonatomic) __weak MMTextField *defaultOrder; // @synthesize defaultOrder=_defaultOrder;
@property(nonatomic) __weak MMTextField *resultTitle; // @synthesize resultTitle=_resultTitle;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
- (void).cxx_destruct;
- (void)loadMoreResults;
- (BOOL)scrollReachBottom;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doMoreSearchWithKeyword:(id)arg1;
- (void)doInitSearchWithKeyword:(id)arg1;
- (void)didChooseSuggestionKeyword:(id)arg1;
- (void)_updateTableviewSelectionDisplay;
- (void)_selectAndScrollToRow:(long long)arg1;
- (void)selectNextItem;
- (void)selectPrevItem;
- (void)selectUp;
- (void)selectDown;
- (void)cancelSearch;
- (void)confirmSearch;
- (void)focusOnSearchfield;
- (void)showSuggestionView;
- (void)setupSearchField;
- (void)_layoutSearchMoreResultViews;
- (void)_layoutSearchInitialResultViews;
- (void)_layoutSearchResultViews;
- (void)_layoutSearchHomeViews;
- (void)setupOrder:(unsigned long long)arg1;
- (void)showViewWithKeyword:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


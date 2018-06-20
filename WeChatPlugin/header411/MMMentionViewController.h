//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMMentionPopoverBackgrounViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSString, RBLPopover;

@interface MMMentionViewController : MMViewController <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, MMMentionPopoverBackgrounViewDelegate>
{
    id <MMMentionViewControllerDelegate> _delegate;
    NSArray *_contacts;
    NSMutableArray *_filteredData;
    NSString *_groupChatUserName;
    RBLPopover *_popover;
    MMTableView *_tableView;
}

@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) RBLPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSString *groupChatUserName; // @synthesize groupChatUserName=_groupChatUserName;
@property(retain, nonatomic) NSMutableArray *filteredData; // @synthesize filteredData=_filteredData;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) id <MMMentionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)filterWithKeyword:(id)arg1;
- (void)updateMentionDataWithGroupChatContact:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)chooseCurrentContact;
- (void)selectNextItem;
- (void)selectPrevItem;
- (void)hide;
- (void)showInView:(id)arg1 withRelativeRect:(struct CGRect)arg2;
- (BOOL)isValid;
- (BOOL)isDisplaying;
- (struct CGSize)sizeForBackgroundViewWithContentSize:(struct CGSize)arg1 popoverEdge:(unsigned int)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


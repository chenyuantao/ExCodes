//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMSessionListViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMOutlineButton, MMTableView, NSArray, NSString, NSTextField;

@interface MMSessionChoosenView : NSViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, MMSessionListViewDelegate>
{
    id <MMSessionChoosenViewDelegate> _delegate;
    NSTextField *_titleTextField;
    MMTableView *_tableView;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    NSArray *_selectedUsers;
    NSArray *_selectedUserNames;
    CDUnknownBlockType _confirmCompletionHandler;
    CDUnknownBlockType _didClickConfirmButtonBlock;
    CDUnknownBlockType _didClickCancelButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickCancelButtonBlock; // @synthesize didClickCancelButtonBlock=_didClickCancelButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickConfirmButtonBlock; // @synthesize didClickConfirmButtonBlock=_didClickConfirmButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmCompletionHandler; // @synthesize confirmCompletionHandler=_confirmCompletionHandler;
@property(retain, nonatomic) NSArray *selectedUserNames; // @synthesize selectedUserNames=_selectedUserNames;
@property(retain, nonatomic) NSArray *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak id <MMSessionChoosenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)closeChoosenViewWithConfirm:(BOOL)arg1;
- (void)updateSessionChoosenView:(id)arg1;
@property(retain, nonatomic) NSString *cancelButtonText;
@property(retain, nonatomic) NSString *confirmButtonText;
- (void)setupBottomButtons;
- (void)setupTitleTextFiled;
- (void)setupTableView;
- (void)clearAllSelectedUsers;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


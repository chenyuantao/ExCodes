//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatBaseCellView.h"

#import "IMMMessageFileServiceExt.h"

@class MMCircularProgressView, MMDivider, NSImageView, NSString, NSTextField, NSView, TKStateMachine;

@interface MMChatMediaCellView : MMChatBaseCellView <IMMMessageFileServiceExt>
{
    int _fileMessageType;
    NSTextField *_nickNameLabel;
    NSTextField *_timeLabel;
    MMDivider *_divider;
    NSImageView *_thumbImageView;
    NSTextField *_titleLabel;
    NSTextField *_descLabel;
    NSTextField *_sourceLabel;
    TKStateMachine *_stateMachine;
    NSView *_downloadIconContainer;
    NSImageView *_downloadIcon;
    NSView *_progressContainerView;
    MMCircularProgressView *_progressView;
    NSTextField *_downloadStatusLabel;
}

+ (double)cellHeightWithCollectionItem:(id)arg1 andWidthConstrain:(double)arg2;
@property(nonatomic) int fileMessageType; // @synthesize fileMessageType=_fileMessageType;
@property(retain, nonatomic) NSTextField *downloadStatusLabel; // @synthesize downloadStatusLabel=_downloadStatusLabel;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(retain, nonatomic) NSImageView *downloadIcon; // @synthesize downloadIcon=_downloadIcon;
@property(retain, nonatomic) NSView *downloadIconContainer; // @synthesize downloadIconContainer=_downloadIconContainer;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSTextField *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) NSTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSTextField *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void).cxx_destruct;
- (void)_switchToProgressState;
- (void)_switchToNormal;
- (void)messageFileService:(id)arg1 didFailDownloadWithMessage:(id)arg2;
- (void)messageFileService:(id)arg1 didFinishDownloadWithMessage:(id)arg2;
- (void)messageFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 withMessage:(id)arg4;
- (BOOL)isMediaDownloaded;
- (double)changeNickNameLableY;
- (double)changeSrcLableY;
- (double)changeDesLableY;
- (BOOL)allowChoose;
- (BOOL)makeOpenFolderMenuUnavailable;
- (BOOL)makeOpenWithMenuUnavailable;
- (BOOL)makeOpenMenuUnavailable;
- (BOOL)makeMakeMultipleSelectUnavailable;
- (BOOL)makeSaveAsUnavailable;
- (BOOL)makeAddToFavoritesUnavailable;
- (BOOL)makeForwardUnavailable;
- (BOOL)makeCopyMenuUnavailable;
- (void)mouseDown:(id)arg1;
- (BOOL)isFinishUploadOrDownload;
- (void)contextMenuForward;
- (void)contextMenuExport;
- (void)contextMenuOpenWith:(id)arg1;
- (void)contextMenuOpenFoler;
- (void)contextMenuOpen;
- (id)contextMenuCustomItemsForPosition:(unsigned long long)arg1;
- (id)contextMenuCommonItemsForPosition:(unsigned long long)arg1;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowCopy;
- (double)getSenderInfoWidth;
- (id)genNoImageTextAttrs:(id)arg1;
- (id)genSenderInfoDateAttributedString;
- (id)genSenderInfoNickNameAttributedString;
- (void)layoutDownloadStatusLabel;
- (void)layoutDivider;
- (void)layoutSenderInfo;
- (void)layoutSourceLabel;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutDownloadIcon;
- (void)layoutThumbImageView;
- (void)layoutCheckBox;
- (void)layoutMediaContentView;
- (void)prepareForReuse;
- (void)_fireStateEvent:(id)arg1;
- (void)_setupStateMachine;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


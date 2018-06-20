//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface MMBaseSearchLogic : NSObject
{
    NSString *_keyword;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _isSearchShownBlock;
    NSMutableSet *_expandedResultTypes;
}

@property(retain, nonatomic) NSMutableSet *expandedResultTypes; // @synthesize expandedResultTypes=_expandedResultTypes;
@property(copy, nonatomic) CDUnknownBlockType isSearchShownBlock; // @synthesize isSearchShownBlock=_isSearchShownBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (unsigned long long)getMaxPreviewRowCount;
- (void)reloadSearchResultDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearDataWhenSearchEnd;
- (void)doSearchWithKeyword:(id)arg1 searchScene:(unsigned long long)arg2 resultIsShownBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end


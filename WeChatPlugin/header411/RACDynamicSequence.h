//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSequence.h"

@interface RACDynamicSequence : RACSequence
{
    id _head;
    RACSequence *_tail;
    id _dependency;
    BOOL _hasDependency;
    id _headBlock;
    id _tailBlock;
    CDUnknownBlockType _dependencyBlock;
}

+ (id)sequenceWithLazyDependency:(CDUnknownBlockType)arg1 headBlock:(CDUnknownBlockType)arg2 tailBlock:(CDUnknownBlockType)arg3;
+ (id)sequenceWithHeadBlock:(CDUnknownBlockType)arg1 tailBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType dependencyBlock; // @synthesize dependencyBlock=_dependencyBlock;
@property(nonatomic) BOOL hasDependency; // @synthesize hasDependency=_hasDependency;
@property(retain, nonatomic) id tailBlock; // @synthesize tailBlock=_tailBlock;
@property(retain, nonatomic) id headBlock; // @synthesize headBlock=_headBlock;
- (void).cxx_destruct;
- (id)description;
- (id)tail;
- (id)head;
- (void)dealloc;

@end


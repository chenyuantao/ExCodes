//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMCDNTask;

__attribute__((visibility("hidden")))
@interface MMCDNDownloadParaData : NSObject
{
    MMCDNTask *_task;
    struct CDNDownloadPara _para;
}

+ (id)paraDataWithPara:(struct CDNDownloadPara)arg1 task:(id)arg2;
@property(retain, nonatomic) MMCDNTask *task; // @synthesize task=_task;
@property(nonatomic) struct CDNDownloadPara para; // @synthesize para=_para;
- (id).cxx_construct;
- (void).cxx_destruct;

@end


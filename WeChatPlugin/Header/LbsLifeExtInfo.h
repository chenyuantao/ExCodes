//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LbsLifeExtInfo : PBGeneratedMessage
{
    unsigned int hasLimit:1;
    unsigned int hasPage:1;
    unsigned int hasSessiontoken:1;
    unsigned int limit;
    unsigned int page;
    NSString *sessiontoken;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSessiontoken:) NSString *sessiontoken; // @synthesize sessiontoken;
@property(readonly, nonatomic) BOOL hasSessiontoken; // @synthesize hasSessiontoken;
@property(nonatomic, setter=SetPage:) unsigned int page; // @synthesize page;
@property(readonly, nonatomic) BOOL hasPage; // @synthesize hasPage;
@property(nonatomic, setter=SetLimit:) unsigned int limit; // @synthesize limit;
@property(readonly, nonatomic) BOOL hasLimit; // @synthesize hasLimit;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end


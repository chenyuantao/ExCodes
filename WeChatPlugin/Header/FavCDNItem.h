//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FavCDNItem : PBGeneratedMessage
{
    unsigned int hasDataId:1;
    unsigned int hasFullMd5:1;
    unsigned int hasHead256Md5:1;
    unsigned int hasFullSize:1;
    unsigned int hasCdnurl:1;
    unsigned int hasAeskey:1;
    unsigned int hasEncryVer:1;
    unsigned int hasVideoId:1;
    unsigned int hasStatus:1;
    unsigned int hasDataStatus:1;
    unsigned int fullSize;
    int encryVer;
    int status;
    int dataStatus;
    NSString *dataId;
    NSString *fullMd5;
    NSString *head256Md5;
    NSString *cdnurl;
    NSString *aeskey;
    NSString *videoId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDataStatus:) int dataStatus; // @synthesize dataStatus;
@property(readonly, nonatomic) BOOL hasDataStatus; // @synthesize hasDataStatus;
@property(nonatomic, setter=SetStatus:) int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetVideoId:) NSString *videoId; // @synthesize videoId;
@property(readonly, nonatomic) BOOL hasVideoId; // @synthesize hasVideoId;
@property(nonatomic, setter=SetEncryVer:) int encryVer; // @synthesize encryVer;
@property(readonly, nonatomic) BOOL hasEncryVer; // @synthesize hasEncryVer;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(retain, nonatomic, setter=SetCdnurl:) NSString *cdnurl; // @synthesize cdnurl;
@property(readonly, nonatomic) BOOL hasCdnurl; // @synthesize hasCdnurl;
@property(nonatomic, setter=SetFullSize:) unsigned int fullSize; // @synthesize fullSize;
@property(readonly, nonatomic) BOOL hasFullSize; // @synthesize hasFullSize;
@property(retain, nonatomic, setter=SetHead256Md5:) NSString *head256Md5; // @synthesize head256Md5;
@property(readonly, nonatomic) BOOL hasHead256Md5; // @synthesize hasHead256Md5;
@property(retain, nonatomic, setter=SetFullMd5:) NSString *fullMd5; // @synthesize fullMd5;
@property(readonly, nonatomic) BOOL hasFullMd5; // @synthesize hasFullMd5;
@property(retain, nonatomic, setter=SetDataId:) NSString *dataId; // @synthesize dataId;
@property(readonly, nonatomic) BOOL hasDataId; // @synthesize hasDataId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end


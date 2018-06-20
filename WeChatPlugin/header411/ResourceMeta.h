//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString;

@interface ResourceMeta : PBGeneratedMessage
{
    unsigned int hasMd5:1;
    unsigned int hasResVersion:1;
    unsigned int hasUrl:1;
    unsigned int hasFileFlag:1;
    unsigned int hasData:1;
    NSData *data_;
    unsigned int hasOriginalMd5:1;
    unsigned int hasFileSize:1;
    unsigned int resVersion;
    unsigned int fileFlag;
    unsigned int fileSize;
    NSString *md5;
    NSString *url;
    NSMutableArray *mutableEccmd5SignatureListList;
    NSString *originalMd5;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFileSize:) unsigned int fileSize; // @synthesize fileSize;
@property(readonly, nonatomic) BOOL hasFileSize; // @synthesize hasFileSize;
@property(retain, nonatomic, setter=SetOriginalMd5:) NSString *originalMd5; // @synthesize originalMd5;
@property(readonly, nonatomic) BOOL hasOriginalMd5; // @synthesize hasOriginalMd5;
@property(retain, nonatomic, setter=SetData:) NSData *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic) NSMutableArray *mutableEccmd5SignatureListList; // @synthesize mutableEccmd5SignatureListList;
@property(nonatomic, setter=SetFileFlag:) unsigned int fileFlag; // @synthesize fileFlag;
@property(readonly, nonatomic) BOOL hasFileFlag; // @synthesize hasFileFlag;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(nonatomic, setter=SetResVersion:) unsigned int resVersion; // @synthesize resVersion;
@property(readonly, nonatomic) BOOL hasResVersion; // @synthesize hasResVersion;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
- (void).cxx_destruct;
- (void)addEccmd5SignatureList:(id)arg1;
- (void)addEccmd5SignatureListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *eccmd5SignatureList; // @dynamic eccmd5SignatureList;
- (id)eccmd5SignatureListList;
- (id)init;

@end


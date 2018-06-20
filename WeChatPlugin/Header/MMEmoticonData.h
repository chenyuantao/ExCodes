//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMEmoticonData : NSObject <NSCoding>
{
    int _type;
    int _customEmojiType;
    NSString *_representationalString;
    NSString *_caption;
    NSString *_md5;
    NSString *_productId;
    NSString *_cdnUrl;
}

@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(nonatomic) int customEmojiType; // @synthesize customEmojiType=_customEmojiType;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSString *representationalString; // @synthesize representationalString=_representationalString;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isDownloaded;
- (id)filePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


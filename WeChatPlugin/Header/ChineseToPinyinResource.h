//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ChineseToPinyinResource : NSObject
{
    NSString *_directory;
    NSDictionary *_unicodeToHanyuPinyinTable;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getHanyuPinyinRecordFromCharWithChar:(unsigned short)arg1;
- (BOOL)isValidRecordWithNSString:(id)arg1;
- (id)getHanyuPinyinStringArrayWithChar:(unsigned short)arg1;
- (void)cacheObjec:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)initializeResource;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMFileTypeHelper : NSObject
{
}

+ (id)previewFromVideoFileAtPath:(id)arg1 ratio:(double)arg2;
+ (id)firstFrameDataOfGifWithFilePath:(id)arg1;
+ (id)firstFrameImageOfVideoWithFilePath:(id)arg1;
+ (id)standardGenerateFilePathWithFileName:(id)arg1 folderPath:(id)arg2;
+ (id)generateFilePathWithFileName:(id)arg1 folderPath:(id)arg2;
+ (id)generateFilePathWithFilePath:(id)arg1;
+ (id)imageFileExtensionWithData:(id)arg1;
+ (BOOL)isTIFFFileWithData:(id)arg1;
+ (BOOL)isRealGIFFileWithFilePath:(id)arg1;
+ (BOOL)isGIFFileWithFilePath:(id)arg1;
+ (id)imageFileExtensionWithFilePath:(id)arg1;
+ (BOOL)isImageFileWithFilePath:(id)arg1;
+ (BOOL)getContentTypeFromImageData:(id)arg1;
+ (unsigned int)progressWithFinishedBytes:(unsigned int)arg1 totalBytes:(unsigned int)arg2;
+ (id)fileSizeWithBytes:(unsigned int)arg1;
+ (id)sharedInstance;
- (id)iconForDefaultBrowser;
- (id)workspaceIconForFileType:(id)arg1;
- (id)iconForFileType:(id)arg1;
- (BOOL)isFileTypeUnsupportWithFileExtension:(id)arg1;
- (int)fileTypeWithFileExtension:(id)arg1;
- (BOOL)isAudioFileWithFileExtension:(id)arg1;
- (BOOL)isVideoFileWithFileExtension:(id)arg1;
- (BOOL)isImageFileWithFileExtension:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebViewJavascriptBridge;

@interface MMFavoritesJsBridge : NSObject
{
    WebViewJavascriptBridge *_webViewJsBridge;
}

+ (id)bridgeForWebView:(id)arg1;
@property(retain, nonatomic) WebViewJavascriptBridge *webViewJsBridge; // @synthesize webViewJsBridge=_webViewJsBridge;
- (void).cxx_destruct;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end


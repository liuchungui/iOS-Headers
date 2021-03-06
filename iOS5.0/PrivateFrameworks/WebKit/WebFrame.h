/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebFramePrivate;

@interface WebFrame : NSObject
{
    WebFramePrivate *_private;
}

- (id)init;
- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;
- (void)dealloc;
- (void)finalize;
- (id)name;
- (id)frameView;
- (id)webView;
- (id)DOMDocument;
- (id)frameElement;
- (id)provisionalDataSource;
- (id)dataSource;
- (void)loadRequest:(id)arg1;
- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadArchive:(id)arg1;
- (void)stopLoading;
- (void)reload;
- (void)reloadFromOrigin;
- (id)findFrameNamed:(id)arg1;
- (id)parentFrame;
- (id)childFrames;
- (id)windowObject;
- (struct OpaqueJSContext *)globalContext;

@end


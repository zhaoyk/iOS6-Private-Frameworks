/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray *_videos;
    NSURL *_batchURL;
    unsigned int _startIndex;
    unsigned int _videosPerPage;
    unsigned int _totalResults;
    BOOL _invalidatedToken;
}

+ (int)partialFeedType;
- (void)setDelegate:(id)arg1;
- (void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (void)failWithError:(id)arg1;
- (int)parseData:(id)arg1;
- (void)didParseData;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayBizF2FPayOkCgiDelegate;

@interface WCPayBizF2FPayOkCgi : WCPayBaseCgi
{
    id <WCPayBizF2FPayOkCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayBizF2FPayOkCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initF2FPayOkCgiWithDelegate:(id)arg1 request:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCPayPickerViewDelegate-Protocol.h"

@class NSString, RichTextView, UILabel, UISwitch, WCPayEntrustPayInfo, WCPayOrderDetail, WCPayPickerView;
@protocol WCPayAutoDeductSettingViewControllerDelegate;

@interface WCPayAutoDeductSettingViewController : WCPayBaseViewController <ILinkEventExt, WCPayPickerViewDelegate>
{
    id <WCPayAutoDeductSettingViewControllerDelegate> m_delegate;
    UISwitch *_switchButton;
    RichTextView *_richTextView;
    WCPayOrderDetail *_order;
    WCPayEntrustPayInfo *_entrustPayInfo;
    WCPayPickerView *_pickerView;
    UILabel *_cardInfoLabel;
    NSString *_pickerTitle;
    NSString *_autoDeductDesc;
}

@property(copy, nonatomic) NSString *autoDeductDesc; // @synthesize autoDeductDesc=_autoDeductDesc;
@property(copy, nonatomic) NSString *pickerTitle; // @synthesize pickerTitle=_pickerTitle;
@property(retain, nonatomic) UILabel *cardInfoLabel; // @synthesize cardInfoLabel=_cardInfoLabel;
@property(retain, nonatomic) WCPayPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) WCPayEntrustPayInfo *entrustPayInfo; // @synthesize entrustPayInfo=_entrustPayInfo;
@property(retain, nonatomic) WCPayOrderDetail *order; // @synthesize order=_order;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isCNY;
- (id)cardInfoString:(id)arg1;
- (void)selectCardInfo;
- (void)OnFooterButtonClick:(id)arg1;
- (void)changeSwitch:(id)arg1;
- (void)OnCancel;
- (void)requestWording;
- (void)setupData;
- (void)setDelegate:(id)arg1;
- (id)getShowInfoView:(id)arg1;
- (void)makeSelectCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setupBottomTextView;
- (id)footerView;
- (id)selectCardInfoSection;
- (id)infoSection;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


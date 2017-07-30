//
//  ViewController.h
//  CLImageEditorDemo
//
//  Created by sho yakushiji on 2013/11/14.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>
#import "Removeads.h"
@import GoogleMobileAds;

@interface ViewController : UIViewController
<UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITabBarDelegate, UIActionSheetDelegate, UIScrollViewDelegate>
{
    IBOutlet __weak UIScrollView *_scrollView;
    IBOutlet __weak UIImageView *_imageView;
}
@end

//put the name of your view controller in place of MyViewController
@interface ViewController() <SKProductsRequestDelegate, SKPaymentTransactionObserver>
    -(IBAction)restore;
    -(IBAction)tapsRemoveAds;
@end



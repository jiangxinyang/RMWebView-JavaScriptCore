//
//  HighchartsWebViewController.h
//  JavaScriptCore-Demo
//
//  Created by rm on 2017/5/12.
//  Copyright © 2017年 rm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@interface HighchartsWebViewController : UIViewController<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) JSContext *context;
@end

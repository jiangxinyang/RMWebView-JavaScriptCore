//
//  OCCallJSViewController.h
//  JavaScriptCore-Demo
//
//  Created by rm on 2017/5/12.
//  Copyright © 2017年 rm. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@interface OCCallJSViewController : UIViewController
- (IBAction)sendToJS:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *showLable;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) JSContext *context;
@end

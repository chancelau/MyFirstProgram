//
//  ClassPrefixDetailViewController.h
//  MyFirstProgram
//
//  Created by Chance Lau on 13-3-21.
//  Copyright (c) 2013年 Chance Lau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassPrefixDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

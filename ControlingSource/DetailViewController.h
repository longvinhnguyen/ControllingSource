//
//  DetailViewController.h
//  ControlingSource
//
//  Created by Long Vinh Nguyen on 4/19/14.
//  Copyright (c) 2014 Home Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

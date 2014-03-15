//
//  DetailViewController.h
//  NPR
//
//  Created by Arkadiusz Dowejko on 15/03/2014.
//  Copyright (c) 2014 arkmon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

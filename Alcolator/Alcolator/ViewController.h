//
//  ViewController.h
//  Alcolator
//
//  Created by Xoi's iMac on 2015-08-17.
//  Copyright (c) 2015 XoiAHin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;


- (IBAction)buttonPressed:(UIButton *)sender;

@end


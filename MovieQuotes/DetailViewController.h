//
//  DetailViewController.h
//  MovieQuotes
//
//  Created by Carli Weinberg on 3/27/18.
//  Copyright © 2018 Carli Weinberg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovieQuotes+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//
//  LoadingView.h
//  PhotoButler
//
//  Created by Mirant Patel on 03/08/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//


#warning TODO: Duplicate of LoadingView

#import <UIKit/UIKit.h>

@interface PBLoadingView : UIView

@property (nonatomic) IBOutlet UIView *loadingCircleContainer;
@property (nonatomic) IBOutlet NSLayoutConstraint *layoutCircleFromCenterY;
@property (nonatomic) IBOutlet UILabel *lblText;

@end

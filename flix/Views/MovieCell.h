//
//  MovieCell.h
//  flix
//
//  Created by danielavila on 6/27/19.
//  Copyright © 2019 danielavila. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MovieCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;


@end

NS_ASSUME_NONNULL_END

//
//  CollectionViewFlowLayout.h
//  SpringUICollectionView
//
//  Created by Gavin on 2017/6/27.
//  Copyright © 2017年 Gavin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CollectionViewCell.h"

@class CollectionViewFlowLayout;

@protocol CollectionViewFlowLayoutDelegate <NSObject>

- (void)collectionViewFlowLayout:(CollectionViewFlowLayout *)flowLayout moveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;

@end

@interface CollectionViewFlowLayout : UICollectionViewFlowLayout <CollectionViewCellGestureDelegate>

@property(weak, nonatomic) id <CollectionViewFlowLayoutDelegate> delegate;

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

@end

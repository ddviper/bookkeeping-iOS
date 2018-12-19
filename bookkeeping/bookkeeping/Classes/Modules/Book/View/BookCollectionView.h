/**
 * 列表
 * @author 郑业强 2018-12-16 创建文件
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BookCollectionView : UICollectionView

@property (nonatomic, strong) NSIndexPath *selectIndex;

// 初始化
+ (instancetype)initWithFrame:(CGRect)frame;
// 刷新当前选中
- (void)reloadSelectIndex;
// 滚动scroll
- (void)scrollToIndex:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END

/**
 * 记账列表
 * @author 郑业强 2018-12-21 创建文件
 */

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN


@interface BookModel : BaseModel

@property (nonatomic, assign) NSInteger Id;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *icon_n;
@property (nonatomic, strong) NSString *icon_l;
@property (nonatomic, strong) NSString *icon_s;
@property (nonatomic, assign) BOOL is_income;
@property (nonatomic, assign) BOOL is_system;

@end


@interface BookListModel : BaseModel

@property (nonatomic, assign) BOOL is_income;
@property (nonatomic, strong) NSArray<BookModel *> *list;

@end


NS_ASSUME_NONNULL_END

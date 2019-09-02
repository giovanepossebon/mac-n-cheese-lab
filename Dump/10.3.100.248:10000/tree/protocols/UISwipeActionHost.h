/* Generated by RuntimeBrowser.
 */

@protocol UISwipeActionHost <NSObject, UITraitEnvironment>

@required

- (UIView *)gestureRecognizerViewForSwipeActionController:(UISwipeActionController *)arg1;
- (UIScrollView *)itemContainerViewForSwipeActionController:(UISwipeActionController *)arg1;
- (void)swipeActionController:(void *)arg1 animateView:(void *)arg2 actionsView:(void *)arg3 forDestructiveAction:(void *)arg4 atIndexPath:(void *)arg5 withSwipeInfo:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: UISwipeActionController *, UIView *, UIView *, UIContextualAction *, NSIndexPath *, struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSIndexPath *)swipeActionController:(UISwipeActionController *)arg1 indexPathForTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 leadingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 trailingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (UIView *)swipeActionController:(UISwipeActionController *)arg1 viewForItemAtIndexPath:(NSIndexPath *)arg2;

@optional

- (UIColor *)swipeActionController:(UISwipeActionController *)arg1 backgroundColorForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 didCompleteAnimationOfAction:(UIContextualAction *)arg2 canceled:(bool)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)swipeActionController:(UISwipeActionController *)arg1 didEndSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 didPerformAction:(UIContextualAction *)arg2 canceled:(bool)arg3 atIndexPath:(NSIndexPath *)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swipeActionController:(UISwipeActionController *)arg1 extraInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 insertActionsView:(UIView *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (bool)swipeActionController:(UISwipeActionController *)arg1 mayBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 willBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 willPerformAction:(UIContextualAction *)arg2 atIndexPath:(NSIndexPath *)arg3;

@end

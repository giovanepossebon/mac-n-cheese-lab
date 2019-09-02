/* Generated by RuntimeBrowser.
 */

@protocol MNNavigationStateObserver <NSObject>

@optional

- (void)stateManager:(MNNavigationStateManager *)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)stateManager:(MNNavigationStateManager *)arg1 didUpdateIsInVehicle:(bool)arg2;
- (void)stateManager:(MNNavigationStateManager *)arg1 didUpdatePossibleDestinations:(NSArray *)arg2;
- (void)stateManager:(MNNavigationStateManager *)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)stateManagerPredictingDidArrive:(MNNavigationStateManager *)arg1;

@end
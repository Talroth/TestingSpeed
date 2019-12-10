/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <React/RCTComponentViewProtocol.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Default implementation of RCTComponentViewProtocol.
 */
@interface UIView (ComponentViewProtocol) <RCTComponentViewProtocol>

+ (std::vector<facebook::react::ComponentDescriptorProvider>)supplementalComponentDescriptorProviders;

- (void)mountChildComponentView:(UIView<RCTComponentViewProtocol> *)childComponentView index:(NSInteger)index;

- (void)unmountChildComponentView:(UIView<RCTComponentViewProtocol> *)childComponentView index:(NSInteger)index;

- (void)updateProps:(facebook::react::Props::Shared const &)props
           oldProps:(facebook::react::Props::Shared const &)oldProps;

- (void)updateEventEmitter:(facebook::react::EventEmitter::Shared const &)eventEmitter;

- (void)updateLocalData:(facebook::react::SharedLocalData)localData
           oldLocalData:(facebook::react::SharedLocalData)oldLocalData;

- (void)updateState:(facebook::react::State::Shared const &)state
           oldState:(facebook::react::State::Shared const &)oldState;

- (void)updateLayoutMetrics:(facebook::react::LayoutMetrics const &)layoutMetrics
           oldLayoutMetrics:(facebook::react::LayoutMetrics const &)oldLayoutMetrics;

- (void)finalizeUpdates:(RNComponentViewUpdateMask)updateMask;

- (void)prepareForRecycle;

- (facebook::react::SharedProps)props;

@end

NS_ASSUME_NONNULL_END

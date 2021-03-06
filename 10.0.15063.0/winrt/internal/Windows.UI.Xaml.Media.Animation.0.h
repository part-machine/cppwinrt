// C++ for the Windows Runtime v1.0.170406.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media::Animation {

struct KeyTime;
struct RepeatBehavior;

}

namespace Windows::UI::Xaml::Media::Animation {

using KeyTime = ABI::Windows::UI::Xaml::Media::Animation::KeyTime;
using RepeatBehavior = ABI::Windows::UI::Xaml::Media::Animation::RepeatBehavior;

}

namespace ABI::Windows::UI::Xaml::Media::Animation {

struct IAddDeleteThemeTransition;
struct IBackEase;
struct IBackEaseStatics;
struct IBeginStoryboard;
struct IBeginStoryboardStatics;
struct IBounceEase;
struct IBounceEaseStatics;
struct ICircleEase;
struct IColorAnimation;
struct IColorAnimationStatics;
struct IColorAnimationUsingKeyFrames;
struct IColorAnimationUsingKeyFramesStatics;
struct IColorKeyFrame;
struct IColorKeyFrameFactory;
struct IColorKeyFrameStatics;
struct ICommonNavigationTransitionInfo;
struct ICommonNavigationTransitionInfoStatics;
struct IConnectedAnimation;
struct IConnectedAnimation2;
struct IConnectedAnimationService;
struct IConnectedAnimationServiceStatics;
struct IContentThemeTransition;
struct IContentThemeTransitionStatics;
struct IContinuumNavigationTransitionInfo;
struct IContinuumNavigationTransitionInfoStatics;
struct ICubicEase;
struct IDiscreteColorKeyFrame;
struct IDiscreteDoubleKeyFrame;
struct IDiscreteObjectKeyFrame;
struct IDiscretePointKeyFrame;
struct IDoubleAnimation;
struct IDoubleAnimationStatics;
struct IDoubleAnimationUsingKeyFrames;
struct IDoubleAnimationUsingKeyFramesStatics;
struct IDoubleKeyFrame;
struct IDoubleKeyFrameFactory;
struct IDoubleKeyFrameStatics;
struct IDragItemThemeAnimation;
struct IDragItemThemeAnimationStatics;
struct IDragOverThemeAnimation;
struct IDragOverThemeAnimationStatics;
struct IDrillInNavigationTransitionInfo;
struct IDrillInThemeAnimation;
struct IDrillInThemeAnimationStatics;
struct IDrillOutThemeAnimation;
struct IDrillOutThemeAnimationStatics;
struct IDropTargetItemThemeAnimation;
struct IDropTargetItemThemeAnimationStatics;
struct IEasingColorKeyFrame;
struct IEasingColorKeyFrameStatics;
struct IEasingDoubleKeyFrame;
struct IEasingDoubleKeyFrameStatics;
struct IEasingFunctionBase;
struct IEasingFunctionBaseFactory;
struct IEasingFunctionBaseStatics;
struct IEasingPointKeyFrame;
struct IEasingPointKeyFrameStatics;
struct IEdgeUIThemeTransition;
struct IEdgeUIThemeTransitionStatics;
struct IElasticEase;
struct IElasticEaseStatics;
struct IEntranceNavigationTransitionInfo;
struct IEntranceNavigationTransitionInfoStatics;
struct IEntranceThemeTransition;
struct IEntranceThemeTransitionStatics;
struct IExponentialEase;
struct IExponentialEaseStatics;
struct IFadeInThemeAnimation;
struct IFadeInThemeAnimationStatics;
struct IFadeOutThemeAnimation;
struct IFadeOutThemeAnimationStatics;
struct IKeySpline;
struct IKeyTimeHelper;
struct IKeyTimeHelperStatics;
struct ILinearColorKeyFrame;
struct ILinearDoubleKeyFrame;
struct ILinearPointKeyFrame;
struct INavigationThemeTransition;
struct INavigationThemeTransitionStatics;
struct INavigationTransitionInfo;
struct INavigationTransitionInfoFactory;
struct INavigationTransitionInfoOverrides;
struct IObjectAnimationUsingKeyFrames;
struct IObjectAnimationUsingKeyFramesStatics;
struct IObjectKeyFrame;
struct IObjectKeyFrameFactory;
struct IObjectKeyFrameStatics;
struct IPaneThemeTransition;
struct IPaneThemeTransitionStatics;
struct IPointAnimation;
struct IPointAnimationStatics;
struct IPointAnimationUsingKeyFrames;
struct IPointAnimationUsingKeyFramesStatics;
struct IPointKeyFrame;
struct IPointKeyFrameFactory;
struct IPointKeyFrameStatics;
struct IPointerDownThemeAnimation;
struct IPointerDownThemeAnimationStatics;
struct IPointerUpThemeAnimation;
struct IPointerUpThemeAnimationStatics;
struct IPopInThemeAnimation;
struct IPopInThemeAnimationStatics;
struct IPopOutThemeAnimation;
struct IPopOutThemeAnimationStatics;
struct IPopupThemeTransition;
struct IPopupThemeTransitionStatics;
struct IPowerEase;
struct IPowerEaseStatics;
struct IQuadraticEase;
struct IQuarticEase;
struct IQuinticEase;
struct IReorderThemeTransition;
struct IRepeatBehaviorHelper;
struct IRepeatBehaviorHelperStatics;
struct IRepositionThemeAnimation;
struct IRepositionThemeAnimationStatics;
struct IRepositionThemeTransition;
struct IRepositionThemeTransition2;
struct IRepositionThemeTransitionStatics2;
struct ISineEase;
struct ISlideNavigationTransitionInfo;
struct ISplineColorKeyFrame;
struct ISplineColorKeyFrameStatics;
struct ISplineDoubleKeyFrame;
struct ISplineDoubleKeyFrameStatics;
struct ISplinePointKeyFrame;
struct ISplinePointKeyFrameStatics;
struct ISplitCloseThemeAnimation;
struct ISplitCloseThemeAnimationStatics;
struct ISplitOpenThemeAnimation;
struct ISplitOpenThemeAnimationStatics;
struct IStoryboard;
struct IStoryboardStatics;
struct ISuppressNavigationTransitionInfo;
struct ISwipeBackThemeAnimation;
struct ISwipeBackThemeAnimationStatics;
struct ISwipeHintThemeAnimation;
struct ISwipeHintThemeAnimationStatics;
struct ITimeline;
struct ITimelineFactory;
struct ITimelineStatics;
struct ITransition;
struct ITransitionFactory;
struct AddDeleteThemeTransition;
struct BackEase;
struct BeginStoryboard;
struct BounceEase;
struct CircleEase;
struct ColorAnimation;
struct ColorAnimationUsingKeyFrames;
struct ColorKeyFrame;
struct ColorKeyFrameCollection;
struct CommonNavigationTransitionInfo;
struct ConnectedAnimation;
struct ConnectedAnimationService;
struct ContentThemeTransition;
struct ContinuumNavigationTransitionInfo;
struct CubicEase;
struct DiscreteColorKeyFrame;
struct DiscreteDoubleKeyFrame;
struct DiscreteObjectKeyFrame;
struct DiscretePointKeyFrame;
struct DoubleAnimation;
struct DoubleAnimationUsingKeyFrames;
struct DoubleKeyFrame;
struct DoubleKeyFrameCollection;
struct DragItemThemeAnimation;
struct DragOverThemeAnimation;
struct DrillInNavigationTransitionInfo;
struct DrillInThemeAnimation;
struct DrillOutThemeAnimation;
struct DropTargetItemThemeAnimation;
struct EasingColorKeyFrame;
struct EasingDoubleKeyFrame;
struct EasingFunctionBase;
struct EasingPointKeyFrame;
struct EdgeUIThemeTransition;
struct ElasticEase;
struct EntranceNavigationTransitionInfo;
struct EntranceThemeTransition;
struct ExponentialEase;
struct FadeInThemeAnimation;
struct FadeOutThemeAnimation;
struct KeySpline;
struct KeyTimeHelper;
struct LinearColorKeyFrame;
struct LinearDoubleKeyFrame;
struct LinearPointKeyFrame;
struct NavigationThemeTransition;
struct NavigationTransitionInfo;
struct ObjectAnimationUsingKeyFrames;
struct ObjectKeyFrame;
struct ObjectKeyFrameCollection;
struct PaneThemeTransition;
struct PointAnimation;
struct PointAnimationUsingKeyFrames;
struct PointKeyFrame;
struct PointKeyFrameCollection;
struct PointerDownThemeAnimation;
struct PointerUpThemeAnimation;
struct PopInThemeAnimation;
struct PopOutThemeAnimation;
struct PopupThemeTransition;
struct PowerEase;
struct QuadraticEase;
struct QuarticEase;
struct QuinticEase;
struct ReorderThemeTransition;
struct RepeatBehaviorHelper;
struct RepositionThemeAnimation;
struct RepositionThemeTransition;
struct SineEase;
struct SlideNavigationTransitionInfo;
struct SplineColorKeyFrame;
struct SplineDoubleKeyFrame;
struct SplinePointKeyFrame;
struct SplitCloseThemeAnimation;
struct SplitOpenThemeAnimation;
struct Storyboard;
struct SuppressNavigationTransitionInfo;
struct SwipeBackThemeAnimation;
struct SwipeHintThemeAnimation;
struct Timeline;
struct TimelineCollection;
struct Transition;
struct TransitionCollection;

}

namespace Windows::UI::Xaml::Media::Animation {

struct IAddDeleteThemeTransition;
struct IBackEase;
struct IBackEaseStatics;
struct IBeginStoryboard;
struct IBeginStoryboardStatics;
struct IBounceEase;
struct IBounceEaseStatics;
struct ICircleEase;
struct IColorAnimation;
struct IColorAnimationStatics;
struct IColorAnimationUsingKeyFrames;
struct IColorAnimationUsingKeyFramesStatics;
struct IColorKeyFrame;
struct IColorKeyFrameFactory;
struct IColorKeyFrameStatics;
struct ICommonNavigationTransitionInfo;
struct ICommonNavigationTransitionInfoStatics;
struct IConnectedAnimation;
struct IConnectedAnimation2;
struct IConnectedAnimationService;
struct IConnectedAnimationServiceStatics;
struct IContentThemeTransition;
struct IContentThemeTransitionStatics;
struct IContinuumNavigationTransitionInfo;
struct IContinuumNavigationTransitionInfoStatics;
struct ICubicEase;
struct IDiscreteColorKeyFrame;
struct IDiscreteDoubleKeyFrame;
struct IDiscreteObjectKeyFrame;
struct IDiscretePointKeyFrame;
struct IDoubleAnimation;
struct IDoubleAnimationStatics;
struct IDoubleAnimationUsingKeyFrames;
struct IDoubleAnimationUsingKeyFramesStatics;
struct IDoubleKeyFrame;
struct IDoubleKeyFrameFactory;
struct IDoubleKeyFrameStatics;
struct IDragItemThemeAnimation;
struct IDragItemThemeAnimationStatics;
struct IDragOverThemeAnimation;
struct IDragOverThemeAnimationStatics;
struct IDrillInNavigationTransitionInfo;
struct IDrillInThemeAnimation;
struct IDrillInThemeAnimationStatics;
struct IDrillOutThemeAnimation;
struct IDrillOutThemeAnimationStatics;
struct IDropTargetItemThemeAnimation;
struct IDropTargetItemThemeAnimationStatics;
struct IEasingColorKeyFrame;
struct IEasingColorKeyFrameStatics;
struct IEasingDoubleKeyFrame;
struct IEasingDoubleKeyFrameStatics;
struct IEasingFunctionBase;
struct IEasingFunctionBaseFactory;
struct IEasingFunctionBaseStatics;
struct IEasingPointKeyFrame;
struct IEasingPointKeyFrameStatics;
struct IEdgeUIThemeTransition;
struct IEdgeUIThemeTransitionStatics;
struct IElasticEase;
struct IElasticEaseStatics;
struct IEntranceNavigationTransitionInfo;
struct IEntranceNavigationTransitionInfoStatics;
struct IEntranceThemeTransition;
struct IEntranceThemeTransitionStatics;
struct IExponentialEase;
struct IExponentialEaseStatics;
struct IFadeInThemeAnimation;
struct IFadeInThemeAnimationStatics;
struct IFadeOutThemeAnimation;
struct IFadeOutThemeAnimationStatics;
struct IKeySpline;
struct IKeyTimeHelper;
struct IKeyTimeHelperStatics;
struct ILinearColorKeyFrame;
struct ILinearDoubleKeyFrame;
struct ILinearPointKeyFrame;
struct INavigationThemeTransition;
struct INavigationThemeTransitionStatics;
struct INavigationTransitionInfo;
struct INavigationTransitionInfoFactory;
struct INavigationTransitionInfoOverrides;
struct IObjectAnimationUsingKeyFrames;
struct IObjectAnimationUsingKeyFramesStatics;
struct IObjectKeyFrame;
struct IObjectKeyFrameFactory;
struct IObjectKeyFrameStatics;
struct IPaneThemeTransition;
struct IPaneThemeTransitionStatics;
struct IPointAnimation;
struct IPointAnimationStatics;
struct IPointAnimationUsingKeyFrames;
struct IPointAnimationUsingKeyFramesStatics;
struct IPointKeyFrame;
struct IPointKeyFrameFactory;
struct IPointKeyFrameStatics;
struct IPointerDownThemeAnimation;
struct IPointerDownThemeAnimationStatics;
struct IPointerUpThemeAnimation;
struct IPointerUpThemeAnimationStatics;
struct IPopInThemeAnimation;
struct IPopInThemeAnimationStatics;
struct IPopOutThemeAnimation;
struct IPopOutThemeAnimationStatics;
struct IPopupThemeTransition;
struct IPopupThemeTransitionStatics;
struct IPowerEase;
struct IPowerEaseStatics;
struct IQuadraticEase;
struct IQuarticEase;
struct IQuinticEase;
struct IReorderThemeTransition;
struct IRepeatBehaviorHelper;
struct IRepeatBehaviorHelperStatics;
struct IRepositionThemeAnimation;
struct IRepositionThemeAnimationStatics;
struct IRepositionThemeTransition;
struct IRepositionThemeTransition2;
struct IRepositionThemeTransitionStatics2;
struct ISineEase;
struct ISlideNavigationTransitionInfo;
struct ISplineColorKeyFrame;
struct ISplineColorKeyFrameStatics;
struct ISplineDoubleKeyFrame;
struct ISplineDoubleKeyFrameStatics;
struct ISplinePointKeyFrame;
struct ISplinePointKeyFrameStatics;
struct ISplitCloseThemeAnimation;
struct ISplitCloseThemeAnimationStatics;
struct ISplitOpenThemeAnimation;
struct ISplitOpenThemeAnimationStatics;
struct IStoryboard;
struct IStoryboardStatics;
struct ISuppressNavigationTransitionInfo;
struct ISwipeBackThemeAnimation;
struct ISwipeBackThemeAnimationStatics;
struct ISwipeHintThemeAnimation;
struct ISwipeHintThemeAnimationStatics;
struct ITimeline;
struct ITimelineFactory;
struct ITimelineStatics;
struct ITransition;
struct ITransitionFactory;
struct AddDeleteThemeTransition;
struct BackEase;
struct BeginStoryboard;
struct BounceEase;
struct CircleEase;
struct ColorAnimation;
struct ColorAnimationUsingKeyFrames;
struct ColorKeyFrame;
struct ColorKeyFrameCollection;
struct CommonNavigationTransitionInfo;
struct ConnectedAnimation;
struct ConnectedAnimationService;
struct ContentThemeTransition;
struct ContinuumNavigationTransitionInfo;
struct CubicEase;
struct DiscreteColorKeyFrame;
struct DiscreteDoubleKeyFrame;
struct DiscreteObjectKeyFrame;
struct DiscretePointKeyFrame;
struct DoubleAnimation;
struct DoubleAnimationUsingKeyFrames;
struct DoubleKeyFrame;
struct DoubleKeyFrameCollection;
struct DragItemThemeAnimation;
struct DragOverThemeAnimation;
struct DrillInNavigationTransitionInfo;
struct DrillInThemeAnimation;
struct DrillOutThemeAnimation;
struct DropTargetItemThemeAnimation;
struct EasingColorKeyFrame;
struct EasingDoubleKeyFrame;
struct EasingFunctionBase;
struct EasingPointKeyFrame;
struct EdgeUIThemeTransition;
struct ElasticEase;
struct EntranceNavigationTransitionInfo;
struct EntranceThemeTransition;
struct ExponentialEase;
struct FadeInThemeAnimation;
struct FadeOutThemeAnimation;
struct KeySpline;
struct KeyTimeHelper;
struct LinearColorKeyFrame;
struct LinearDoubleKeyFrame;
struct LinearPointKeyFrame;
struct NavigationThemeTransition;
struct NavigationTransitionInfo;
struct ObjectAnimationUsingKeyFrames;
struct ObjectKeyFrame;
struct ObjectKeyFrameCollection;
struct PaneThemeTransition;
struct PointAnimation;
struct PointAnimationUsingKeyFrames;
struct PointKeyFrame;
struct PointKeyFrameCollection;
struct PointerDownThemeAnimation;
struct PointerUpThemeAnimation;
struct PopInThemeAnimation;
struct PopOutThemeAnimation;
struct PopupThemeTransition;
struct PowerEase;
struct QuadraticEase;
struct QuarticEase;
struct QuinticEase;
struct ReorderThemeTransition;
struct RepeatBehaviorHelper;
struct RepositionThemeAnimation;
struct RepositionThemeTransition;
struct SineEase;
struct SlideNavigationTransitionInfo;
struct SplineColorKeyFrame;
struct SplineDoubleKeyFrame;
struct SplinePointKeyFrame;
struct SplitCloseThemeAnimation;
struct SplitOpenThemeAnimation;
struct Storyboard;
struct SuppressNavigationTransitionInfo;
struct SwipeBackThemeAnimation;
struct SwipeHintThemeAnimation;
struct Timeline;
struct TimelineCollection;
struct Transition;
struct TransitionCollection;

}

namespace Windows::UI::Xaml::Media::Animation {

template <typename T> struct impl_IAddDeleteThemeTransition;
template <typename T> struct impl_IBackEase;
template <typename T> struct impl_IBackEaseStatics;
template <typename T> struct impl_IBeginStoryboard;
template <typename T> struct impl_IBeginStoryboardStatics;
template <typename T> struct impl_IBounceEase;
template <typename T> struct impl_IBounceEaseStatics;
template <typename T> struct impl_ICircleEase;
template <typename T> struct impl_IColorAnimation;
template <typename T> struct impl_IColorAnimationStatics;
template <typename T> struct impl_IColorAnimationUsingKeyFrames;
template <typename T> struct impl_IColorAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IColorKeyFrame;
template <typename T> struct impl_IColorKeyFrameFactory;
template <typename T> struct impl_IColorKeyFrameStatics;
template <typename T> struct impl_ICommonNavigationTransitionInfo;
template <typename T> struct impl_ICommonNavigationTransitionInfoStatics;
template <typename T> struct impl_IConnectedAnimation;
template <typename T> struct impl_IConnectedAnimation2;
template <typename T> struct impl_IConnectedAnimationService;
template <typename T> struct impl_IConnectedAnimationServiceStatics;
template <typename T> struct impl_IContentThemeTransition;
template <typename T> struct impl_IContentThemeTransitionStatics;
template <typename T> struct impl_IContinuumNavigationTransitionInfo;
template <typename T> struct impl_IContinuumNavigationTransitionInfoStatics;
template <typename T> struct impl_ICubicEase;
template <typename T> struct impl_IDiscreteColorKeyFrame;
template <typename T> struct impl_IDiscreteDoubleKeyFrame;
template <typename T> struct impl_IDiscreteObjectKeyFrame;
template <typename T> struct impl_IDiscretePointKeyFrame;
template <typename T> struct impl_IDoubleAnimation;
template <typename T> struct impl_IDoubleAnimationStatics;
template <typename T> struct impl_IDoubleAnimationUsingKeyFrames;
template <typename T> struct impl_IDoubleAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IDoubleKeyFrame;
template <typename T> struct impl_IDoubleKeyFrameFactory;
template <typename T> struct impl_IDoubleKeyFrameStatics;
template <typename T> struct impl_IDragItemThemeAnimation;
template <typename T> struct impl_IDragItemThemeAnimationStatics;
template <typename T> struct impl_IDragOverThemeAnimation;
template <typename T> struct impl_IDragOverThemeAnimationStatics;
template <typename T> struct impl_IDrillInNavigationTransitionInfo;
template <typename T> struct impl_IDrillInThemeAnimation;
template <typename T> struct impl_IDrillInThemeAnimationStatics;
template <typename T> struct impl_IDrillOutThemeAnimation;
template <typename T> struct impl_IDrillOutThemeAnimationStatics;
template <typename T> struct impl_IDropTargetItemThemeAnimation;
template <typename T> struct impl_IDropTargetItemThemeAnimationStatics;
template <typename T> struct impl_IEasingColorKeyFrame;
template <typename T> struct impl_IEasingColorKeyFrameStatics;
template <typename T> struct impl_IEasingDoubleKeyFrame;
template <typename T> struct impl_IEasingDoubleKeyFrameStatics;
template <typename T> struct impl_IEasingFunctionBase;
template <typename T> struct impl_IEasingFunctionBaseFactory;
template <typename T> struct impl_IEasingFunctionBaseStatics;
template <typename T> struct impl_IEasingPointKeyFrame;
template <typename T> struct impl_IEasingPointKeyFrameStatics;
template <typename T> struct impl_IEdgeUIThemeTransition;
template <typename T> struct impl_IEdgeUIThemeTransitionStatics;
template <typename T> struct impl_IElasticEase;
template <typename T> struct impl_IElasticEaseStatics;
template <typename T> struct impl_IEntranceNavigationTransitionInfo;
template <typename T> struct impl_IEntranceNavigationTransitionInfoStatics;
template <typename T> struct impl_IEntranceThemeTransition;
template <typename T> struct impl_IEntranceThemeTransitionStatics;
template <typename T> struct impl_IExponentialEase;
template <typename T> struct impl_IExponentialEaseStatics;
template <typename T> struct impl_IFadeInThemeAnimation;
template <typename T> struct impl_IFadeInThemeAnimationStatics;
template <typename T> struct impl_IFadeOutThemeAnimation;
template <typename T> struct impl_IFadeOutThemeAnimationStatics;
template <typename T> struct impl_IKeySpline;
template <typename T> struct impl_IKeyTimeHelper;
template <typename T> struct impl_IKeyTimeHelperStatics;
template <typename T> struct impl_ILinearColorKeyFrame;
template <typename T> struct impl_ILinearDoubleKeyFrame;
template <typename T> struct impl_ILinearPointKeyFrame;
template <typename T> struct impl_INavigationThemeTransition;
template <typename T> struct impl_INavigationThemeTransitionStatics;
template <typename T> struct impl_INavigationTransitionInfo;
template <typename T> struct impl_INavigationTransitionInfoFactory;
template <typename T> struct impl_INavigationTransitionInfoOverrides;
template <typename T> struct impl_IObjectAnimationUsingKeyFrames;
template <typename T> struct impl_IObjectAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IObjectKeyFrame;
template <typename T> struct impl_IObjectKeyFrameFactory;
template <typename T> struct impl_IObjectKeyFrameStatics;
template <typename T> struct impl_IPaneThemeTransition;
template <typename T> struct impl_IPaneThemeTransitionStatics;
template <typename T> struct impl_IPointAnimation;
template <typename T> struct impl_IPointAnimationStatics;
template <typename T> struct impl_IPointAnimationUsingKeyFrames;
template <typename T> struct impl_IPointAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IPointKeyFrame;
template <typename T> struct impl_IPointKeyFrameFactory;
template <typename T> struct impl_IPointKeyFrameStatics;
template <typename T> struct impl_IPointerDownThemeAnimation;
template <typename T> struct impl_IPointerDownThemeAnimationStatics;
template <typename T> struct impl_IPointerUpThemeAnimation;
template <typename T> struct impl_IPointerUpThemeAnimationStatics;
template <typename T> struct impl_IPopInThemeAnimation;
template <typename T> struct impl_IPopInThemeAnimationStatics;
template <typename T> struct impl_IPopOutThemeAnimation;
template <typename T> struct impl_IPopOutThemeAnimationStatics;
template <typename T> struct impl_IPopupThemeTransition;
template <typename T> struct impl_IPopupThemeTransitionStatics;
template <typename T> struct impl_IPowerEase;
template <typename T> struct impl_IPowerEaseStatics;
template <typename T> struct impl_IQuadraticEase;
template <typename T> struct impl_IQuarticEase;
template <typename T> struct impl_IQuinticEase;
template <typename T> struct impl_IReorderThemeTransition;
template <typename T> struct impl_IRepeatBehaviorHelper;
template <typename T> struct impl_IRepeatBehaviorHelperStatics;
template <typename T> struct impl_IRepositionThemeAnimation;
template <typename T> struct impl_IRepositionThemeAnimationStatics;
template <typename T> struct impl_IRepositionThemeTransition;
template <typename T> struct impl_IRepositionThemeTransition2;
template <typename T> struct impl_IRepositionThemeTransitionStatics2;
template <typename T> struct impl_ISineEase;
template <typename T> struct impl_ISlideNavigationTransitionInfo;
template <typename T> struct impl_ISplineColorKeyFrame;
template <typename T> struct impl_ISplineColorKeyFrameStatics;
template <typename T> struct impl_ISplineDoubleKeyFrame;
template <typename T> struct impl_ISplineDoubleKeyFrameStatics;
template <typename T> struct impl_ISplinePointKeyFrame;
template <typename T> struct impl_ISplinePointKeyFrameStatics;
template <typename T> struct impl_ISplitCloseThemeAnimation;
template <typename T> struct impl_ISplitCloseThemeAnimationStatics;
template <typename T> struct impl_ISplitOpenThemeAnimation;
template <typename T> struct impl_ISplitOpenThemeAnimationStatics;
template <typename T> struct impl_IStoryboard;
template <typename T> struct impl_IStoryboardStatics;
template <typename T> struct impl_ISuppressNavigationTransitionInfo;
template <typename T> struct impl_ISwipeBackThemeAnimation;
template <typename T> struct impl_ISwipeBackThemeAnimationStatics;
template <typename T> struct impl_ISwipeHintThemeAnimation;
template <typename T> struct impl_ISwipeHintThemeAnimationStatics;
template <typename T> struct impl_ITimeline;
template <typename T> struct impl_ITimelineFactory;
template <typename T> struct impl_ITimelineStatics;
template <typename T> struct impl_ITransition;
template <typename T> struct impl_ITransitionFactory;

}

namespace Windows::UI::Xaml::Media::Animation {

enum class ClockState
{
    Active = 0,
    Filling = 1,
    Stopped = 2,
};

enum class ConnectedAnimationComponent
{
    OffsetX = 0,
    OffsetY = 1,
    CrossFade = 2,
    Scale = 3,
};

enum class EasingMode
{
    EaseOut = 0,
    EaseIn = 1,
    EaseInOut = 2,
};

enum class FillBehavior
{
    HoldEnd = 0,
    Stop = 1,
};

enum class RepeatBehaviorType
{
    Count = 0,
    Duration = 1,
    Forever = 2,
};

}

}

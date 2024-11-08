# SimpleCubeView
在UE中模仿3D编辑软件（3DMax / Maya ...）的CubeView，拥有26个视角检查模型。



延续：如果你有更好的想法思路或改进，请拉取更改并推送与我，我将感激不尽！



# 预览
<img src="https://raw.githubusercontent.com/BssnakeMing/SimpleCubeView/refs/heads/main/Image/Ima_01.png">
<img src="https://raw.githubusercontent.com/BssnakeMing/SimpleCubeView/refs/heads/main/Image/Img_02.png">
<img src="https://raw.githubusercontent.com/BssnakeMing/SimpleCubeView/refs/heads/main/Image/Img_03.png">

视频：
不会插视频，搭梯子去油管吧：https://youtu.be/Tkw9bYIjBvI


# 已知存在问题：

// 1. 目前插件返回的是FRotator, 这会导致模型旋转出现异常旋转或不转。

2. 插件并不是旋转摄像头，而是旋转模型，所以需要将摄像机放在模型的-X位置。

3. 插件运行在Windows平台中，没有经过移动平台测试。

// 4. 控件没有黑色透明；这个后续会更新



# 使用前注意：

除了常规的插件启用方法，你还需要额外开启设置：

```
项目设置->渲染->后期处理->自定义深度-磨具通道, 修改为 以模具启用。

Project Settings ->Rendering ->Post Processing ->Custom Depth ->Tool Channel, modified to be enabled with mold.
```

<img src="https://github.com/BssnakeMing/SimpleCubeView/blob/main/Image/Img_05.jpg">



# 参考并鸣谢：

[UE4枚举的迭代遍历 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/492702386)

[虚幻五渲染编程（Graphic篇）【第一卷：MultiUWorld and Multi Renderer in UnrealEngine】 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/403842411)

[UE常见的五种描边方式--附源文件 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/692856997)

[UE4 相机屏幕坐标与世界坐标的相互转换 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/597560776)

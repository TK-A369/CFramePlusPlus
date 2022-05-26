# CFramePlusPlus library

An library that provides object CFrame, which stands for Coordinate Frame. Inspired by Roblox [CFrame](https://create.roblox.com/docs/reference/engine/datatypes/CFrame) object.

Such CFrame allows easy transformations of positions, or other CFrames, from one coordinate space to other.

My CFrame class is a template, so it allows to have different number of dimensions, and this number can vary on input and output. Typically, you will use `CFrame<float, 3, 3>`, so it uses `float` type, and is 3-dimensional. CFrame will take 3-dimensional position on input, and will return 3-dimensional position. `CFrame<float, 2, 2>` is also common.

But you can use it in more advanced way. For example, you can use `CFrame<float, 3, 2>` to create simple perspective. You multiply this CFrame instance by 3D position, and it results in 2D position, so you can draw it on screen!

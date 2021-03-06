﻿/*
    Copyright (C) 2021  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QApplication a(argc,argv);
    a.setQuitOnLastWindowClosed(false);//隐藏无窗口时保持运行
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:

v2.57.41:
- The setting value will not be modified when using Force retry.
- The optimized gif will not replace original gif when it's not smaller than the original.
- Update Waifu2x-converter,Anime4K,ImageMagick,FFmpeg&FFprobe.
- Optimize performance, fix typo(Chinese) and some other improvements.
- Fix bug: Gif files will be misplaced if user put "gif" in the input file extensions list.
- Fix bug: Sometimes Files list randomly scrolls horizontally by itself.

- 使用强制重试时将不会再改变设定值.
- 如果优化后的GIF体积不小于原GIF,则其不会被用于替换原GIF.
- 更新Waifu2x-converter,Anime4K,ImageMagick,FFmpeg&FFprobe.
- 优化性能,修正错字,以及其他改进.
- 修复bug: 如果用户将"gif"放入文件扩展名列表中,会导致gif文件错位.
- 修复bug: 有时文件列表会随机横向滑动.

--------------------------------------------------------------------------
To do:
- 在Anime4kCPP更新release后,删除强制启用opencl的语句( -M opencl )
- 移植到Linux.
---------------------------------------------------------------------------
Integrated component:
- gifsicle version 1.92
- SoX 14.4.2-win32
- waifu2x-caffe 1.2.0.4
- Waifu2x-converter 9e0284ae23d43c990efb6320253ff0f1e3776854
- waifu2x-ncnn-vulkan 20200818
- SRMD-ncnn-Vulkan 20200818
- realsr-ncnn-vulkan 20200818
- ImageMagick 7.0.10-52-portable-Q16-x64
- Anime4KCPP b81d3fc2fd17b86c31ea3e9c24b9edce519cf974
- FFmpeg&FFprobe 2020-12-20-git-ab6a56773f-full_build
- NirCmd v2.86
- Ghostscript 9.53.3
---------------------------------------------------------------------------
Icons made by :
Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
Roundicons (https://www.flaticon.com/authors/roundicons) From Flaticon : https://www.flaticon.com/
Icongeek26 (https://www.flaticon.com/authors/Icongeek26) From Flaticon : https://www.flaticon.com/
*/

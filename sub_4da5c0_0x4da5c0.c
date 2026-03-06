// 函数名称: sub_4da5c0
// 虚拟地址: 0x4da5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4da5c0(float* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< arg4 && arg3 s>= 0 && arg3 s< arg5)
    if (arg2 s>= 0 && arg2 s< arg4 && arg3 s>= 0 && arg3 s< arg5)
        long double x87_r5_1 = fconvert.t(fconvert.s(float.t(arg5)))
        *arg1 = fconvert.s(float.t(arg2) / fconvert.t(fconvert.s(float.t(arg4))))
        long double x87_r5_3 = float.t(arg2 + 1)
        arg1[1] = fconvert.s(float.t(arg3) / x87_r5_1)
        arg1[2] = fconvert.s(x87_r5_3 / x87_r5_3)
        arg1[3] = fconvert.s(float.t(arg3 + 1) / x87_r5_1)
        return 
    
    sub_4c5870("x >= 0 && x < numCols && y >= 0 && y < numRows", &data_83f3d3, "Sprite.cpp", 0x496, 
        "SpriteUVFromStrip")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

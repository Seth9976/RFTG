// 函数名称: sub_4fc8c0
// 虚拟地址: 0x4fc8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_4fc8c0(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(arg1[2])
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 1) == 0)
        long double x87_r7_1 = fconvert.t(arg1[1])
        long double x87_r6_1 = fconvert.t(arg1[3])
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 1) == 0)
            float var_8 = fconvert.s(fconvert.t(arg1[3]))
            return fconvert.s(fconvert.t(arg1[2]))
    
    sub_4c5870("RectIsNormalized(r)", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0x12d, 
        "RectBottomRight")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

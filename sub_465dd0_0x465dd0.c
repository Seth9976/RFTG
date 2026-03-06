// 函数名称: sub_465dd0
// 虚拟地址: 0x465dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_465dd0(float arg1, float arg2, float arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    long double x87_r6 = fconvert.t(arg3)
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 1) != 0)
        sub_4c5870("min <= max", &data_83f3d3, "c:\ax2010\engine\MathFunctions.cpp", 0xd9, "Clamp")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    long double x87_r5 = fconvert.t(arg1)
    x87_r5 - x87_r7
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        return x87_r5
    
    x87_r6 - x87_r7
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        return x87_r6
    
    return x87_r7
}

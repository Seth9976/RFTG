// 函数名称: sub_4e88f0
// 虚拟地址: 0x4e88f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e88f0(int32_t* arg1 @ esi, int32_t arg2 @ edi, int32_t arg3, float arg4)
{
    // 第一条实际指令: arg4 = fconvert.s(float.t(arg2 - 1) * fconvert.t(arg4) + float.t(arg3))
    arg4 = fconvert.s(float.t(arg2 - 1) * fconvert.t(arg4) + float.t(arg3))
    int32_t eax_1
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, eax_1 = sub_686950(mxcsr, x87control, fconvert.d(fconvert.t(arg4)))
    long double x87_r7_6 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0))))
    x87_r6 - x87_r7_6
    eax_1.w = (x87_r6 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_6 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r5_1
    
    if (p)
        x87_r5_1 = x87_r5 + x87_r6
    else
        x87_r5_1 = x87_r6 - x87_r5
    
    int32_t eax_2 = sub_685f40(x87_r5_1)
    *arg1 = eax_2
    long double x87_r7_7
    
    if (eax_2 s< arg3 + arg2 - 1)
        x87_r7_7 = fconvert.t(arg4) - x87_r7_6
        arg1[1] = eax_2 + 1
    else
        x87_r7_7 = x87_r6
        arg1[1] = eax_2
    
    bool cond:0 = arg1[1] != 0xffffffff
    arg1[2] = fconvert.s(x87_r7_7)
    
    if (not(cond:0))
        sub_4c5870("pFrameTime->mFrameIndexAfter != -1", &data_83f3d3, "Flanim.cpp", 0x87e1640000029c)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_2 != 0xffffffff)
        return 
    
    sub_4c5870("pFrameTime->mFrameIndexBefore != -1", &data_83f3d3, "Flanim.cpp", 0x87e1640000029d)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

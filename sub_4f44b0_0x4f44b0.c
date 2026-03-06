// 函数名称: sub_4f44b0
// 虚拟地址: 0x4f44b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4f44b0(int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int32_t arg8, float arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x68, "DoAlignment")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            if (arg8 != 0)
                return fconvert.t(fconvert.s(fconvert.t(arg9)))
            
            return fconvert.t(fconvert.s(fconvert.t(arg2)))
        case 1
            return fconvert.t(fconvert.s(fconvert.t(arg2)))
        case 2
            return fconvert.t(fconvert.s(fconvert.t(arg2) + fconvert.t(arg3)))
        case 3
            long double x87_r6 = fconvert.t(arg4)
            long double x87_r6_2 = fconvert.t(arg6)
            return fconvert.t(fconvert.s(x87_r6_2 + (fconvert.t(arg7) - x87_r6_2)
                * fconvert.t(fconvert.s((fconvert.t(arg2) - x87_r6) / (fconvert.t(arg5) - x87_r6)))))
}

// 函数名称: sub_466370
// 虚拟地址: 0x466370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_466370(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 8)
    if (arg1 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGLayout.cpp", 0x1b4, "CardSizeValue")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_8
    long double x87_r6
    
    switch (arg1)
        case 0
            return 0
        case 1
            data_c021a0
            return data_c0219c
        case 2
            x87_r6 = fconvert.t(0.5)
            var_8 = fconvert.s(x87_r6 * fconvert.t(data_c021a0))
            return fconvert.s(fconvert.t(data_c0219c) * x87_r6)
        case 3
            float var_8_1 = fconvert.s(fconvert.t(data_c021a0))
            return fconvert.s(fconvert.t(data_c0219c))
        case 4
            x87_r6 = fconvert.t(0.30000001192092896)
            var_8 = fconvert.s(x87_r6 * fconvert.t(data_c021a0))
            return fconvert.s(fconvert.t(data_c0219c) * x87_r6)
        case 5
            long double x87_r6_2 = fconvert.t(0.5)
            float var_8_2 = fconvert.s(x87_r6_2 * fconvert.t(data_c021b0))
            return fconvert.s(fconvert.t(data_c021ac) * x87_r6_2)
        case 6
            data_c021a8
            return data_c021a4
        case 7
            data_c021b0
            return data_c021ac
        case 8
            x87_r6 = fconvert.t(5.0)
            var_8 = fconvert.s(x87_r6 * fconvert.t(data_c021a0))
            return fconvert.s(fconvert.t(data_c0219c) * x87_r6)
}

// 函数名称: sub_4685f0
// 虚拟地址: 0x4685f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4685f0(int32_t arg1, float* arg2, void* arg3, int32_t arg4, int32_t arg5, float arg6, float arg7)
{
    // 第一条实际指令: int32_t eax = arg4
    int32_t eax = arg4
    int32_t ecx = arg5
    
    if (eax s<= 0 || ecx s<= 0)
        sub_4c5870("cols > 0 && rows > 0", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0x1e, "RectSlice")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_8 = 0
    int32_t var_c = 0
    long double x87_r5 = fconvert.t(arg6)
    long double x87_r6_4 = fconvert.t(fconvert.s((
        fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(*arg2))) - float.t(eax - 1) * x87_r5)
        / float.t(arg4)))
    long double x87_r4_1 = fconvert.t(arg7)
    int32_t edi_3 = eax << 4
    int32_t var_18 = edi_3
    void* var_10 = arg3 + 0x14
    long double x87_r5_7 = fconvert.t(fconvert.s((
        fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg2[1]))) - float.t(ecx - 1) * x87_r4_1)
        / float.t(arg5)))
    long double x87_r5_9 = fconvert.t(fconvert.s(x87_r5 + x87_r6_4))
    long double x87_r4_4 = fconvert.t(fconvert.s(x87_r4_1 + x87_r5_7))
    int32_t esi_3
    
    do
        int32_t i = 0
        arg4 = 0
        
        if (eax s>= 4)
            void* ecx_1 = var_10
            int32_t edi_4 = 2
            int32_t var_14_3 = 2
            long double x87_r3_2 = float.t(var_8) * x87_r4_4
            
            do
                int32_t ebx_1 = edi_4 - 1
                int32_t ebx_2 = edi_4 + 1
                i += 4
                edi_4 += 4
                ecx_1 += 0x40
                *(ecx_1 - 0x54) = fconvert.s(float.t(arg4) * x87_r5_9 + fconvert.t(*arg2))
                *(ecx_1 - 0x50) = fconvert.s(fconvert.t(arg2[1]) + x87_r3_2)
                *(ecx_1 - 0x4c) = fconvert.s(x87_r6_4 + fconvert.t(*(ecx_1 - 0x54)))
                *(ecx_1 - 0x48) = fconvert.s(fconvert.t(*(ecx_1 - 0x50)) + x87_r5_7)
                *(ecx_1 - 0x44) = fconvert.s(float.t(ebx_1) * x87_r5_9 + fconvert.t(*arg2))
                *(ecx_1 - 0x40) = fconvert.s(fconvert.t(arg2[1]) + x87_r3_2)
                *(ecx_1 - 0x3c) = fconvert.s(fconvert.t(*(ecx_1 - 0x44)) + x87_r6_4)
                *(ecx_1 - 0x38) = fconvert.s(fconvert.t(*(ecx_1 - 0x40)) + x87_r5_7)
                long double x87_r2_19 = float.t(var_14_3)
                var_14_3 = edi_4
                *(ecx_1 - 0x34) = fconvert.s(x87_r2_19 * x87_r5_9 + fconvert.t(*arg2))
                *(ecx_1 - 0x30) = fconvert.s(fconvert.t(arg2[1]) + x87_r3_2)
                *(ecx_1 - 0x2c) = fconvert.s(fconvert.t(*(ecx_1 - 0x34)) + x87_r6_4)
                *(ecx_1 - 0x28) = fconvert.s(fconvert.t(*(ecx_1 - 0x30)) + x87_r5_7)
                arg4 = i
                *(ecx_1 - 0x24) = fconvert.s(float.t(ebx_2) * x87_r5_9 + fconvert.t(*arg2))
                *(ecx_1 - 0x20) = fconvert.s(fconvert.t(arg2[1]) + x87_r3_2)
                *(ecx_1 - 0x1c) = fconvert.s(fconvert.t(*(ecx_1 - 0x24)) + x87_r6_4)
                *(ecx_1 - 0x18) = fconvert.s(x87_r5_7 + fconvert.t(*(ecx_1 - 0x20)))
            while (i s< eax - 3)
            
            edi_3 = var_18
            x87_r4_4 = x87_r3_2
            ecx = arg5
        
        if (i s< eax)
            long double x87_r3_4 = float.t(var_8) * x87_r4_4
            void* ecx_5 = arg3 + (var_c + i) * 0x10 + 4
            
            do
                long double x87_r2_37 = float.t(arg4)
                i += 1
                ecx_5 += 0x10
                arg4 = i
                *(ecx_5 - 0x14) = fconvert.s(x87_r2_37 * x87_r5_9 + fconvert.t(*arg2))
                *(ecx_5 - 0x10) = fconvert.s(fconvert.t(arg2[1]) + x87_r3_4)
                *(ecx_5 - 0xc) = fconvert.s(fconvert.t(*(ecx_5 - 0x14)) + x87_r6_4)
                *(ecx_5 - 8) = fconvert.s(fconvert.t(*(ecx_5 - 0x10)) + x87_r5_7)
            while (i s< eax)
            
            ecx = arg5
            x87_r4_4 = x87_r3_4
        
        var_c += eax
        var_10 += edi_3
        esi_3 = var_8 + 1
        var_8 = esi_3
    while (esi_3 s< ecx)
    return eax * ecx
}

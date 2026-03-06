// 函数名称: sub_65be10
// 虚拟地址: 0x65be10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_65be10(int32_t arg1, int128_t* arg2 @ esi, int32_t arg3, int32_t arg4, void* arg5, float* arg6, void* arg7)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    int32_t edi = arg1
    int32_t var_30_1
    __builtin_memset(&var_30_1, 0, 0x2c)
    sub_5abfc0(arg2, 0, 0x38)
    void* eax = arg5
    *arg2 = edi
    *(arg2 + 4) = eax
    
    if (eax s>= arg6)
        arg5 = arg6 - 1
        eax = arg6 - 1
    
    int32_t var_2c_1
    int32_t var_28_1
    int32_t var_24_1
    int32_t var_20_1
    int32_t var_1c_1
    int32_t var_18_1
    int32_t var_14_1
    int32_t var_10_1
    int32_t var_c_1
    int32_t var_8_1
    
    if (edi s<= eax)
        arg6 = arg3 + (edi << 2)
        
        do
            int32_t eax_4 =
                sub_685f40(fconvert.t(*arg6) * fconvert.t(7.3142857551574707) + fconvert.t(1023.5))
            int32_t ecx_4
            
            if (eax_4 s> 0x3ff)
                ecx_4 = 0x3ff
            label_65bebd:
                int32_t edx_4 = ecx_4 * ecx_4
                fconvert.t(*arg6) - (fconvert.t(*(arg4 - arg3 + arg6)) + fconvert.t(*(arg7 + 0x458)))
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (p_1)
                    var_20_1 += ecx_4
                    var_1c_1 += edi
                    var_24_1 += edi * edi
                    var_28_1 += edx_4
                    var_2c_1 += ecx_4 * edi
                    var_30_1 += 1
                else
                    var_c_1 += ecx_4
                    var_8_1 += edi
                    var_10_1 += edi * edi
                    var_14_1 += edx_4
                    var_18_1 += ecx_4 * edi
                    ebx += 1
            else if (eax_4 s>= 0)
                ecx_4 = eax_4
                
                if (eax_4 != 0)
                    goto label_65bebd
            arg6 = &arg6[1]
            edi += 1
        while (edi s<= arg5)
    
    *(arg2 + 8) = var_8_1
    *(arg2 + 0xc) = var_c_1
    *(arg2 + 0x14) = var_14_1
    arg2[1].d = var_10_1
    *(arg2 + 0x18) = var_18_1
    *(arg2 + 0x24) = var_20_1
    arg2[2].d = var_1c_1
    *(arg2 + 0x28) = var_24_1
    int32_t ecx_10 = var_30_1
    arg2[3].d = var_2c_1
    *(arg2 + 0x1c) = ebx
    *(arg2 + 0x2c) = var_28_1
    *(arg2 + 0x34) = ecx_10
}

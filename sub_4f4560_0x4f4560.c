// 函数名称: sub_4f4560
// 虚拟地址: 0x4f4560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f4560(float* arg1 @ esi, float* arg2 @ edi, int32_t* arg3, float arg4, float arg5, float arg6, float arg7)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    float ecx = entry_ebx[1]
    float edx = entry_ebx[2]
    float var_14 = fconvert.s(fconvert.t(*arg1) - fconvert.t(*arg2))
    float eax_1 = entry_ebx[3]
    float var_2c = ecx
    float var_10 = fconvert.s(fconvert.t(arg1[2]) - fconvert.t(arg2[2]))
    float var_34 = ecx
    float var_1c = fconvert.s(fconvert.t(arg1[1]) - fconvert.t(arg2[1]))
    float var_18 = fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg2[3]))
    float var_8 = fconvert.s(fconvert.t(entry_ebx[2]) - fconvert.t(*entry_ebx))
    float var_c = fconvert.s(fconvert.t(entry_ebx[3]) - fconvert.t(entry_ebx[1]))
    float var_30_1
    float var_28_1
    
    if (arg6 != 0)
        edx = arg4
        float var_34_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*entry_ebx) + fconvert.t(var_8))))
        var_28_1 = fconvert.s(sub_4f44b0(arg6, fconvert.s(fconvert.t(entry_ebx[2])), 
            fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(*arg2)), 
            fconvert.s(fconvert.t(arg2[2])), fconvert.s(fconvert.t(*arg1)), 
            fconvert.s(fconvert.t(arg1[2])), edx, edx))
        float var_34_4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_28_1) - fconvert.t(var_8))))
        var_30_1 = fconvert.s(sub_4f44b0(arg4, fconvert.s(fconvert.t(*entry_ebx)), 
            fconvert.s(fconvert.t(var_14)), fconvert.s(fconvert.t(*arg2)), 
            fconvert.s(fconvert.t(arg2[2])), fconvert.s(fconvert.t(*arg1)), 
            fconvert.s(fconvert.t(arg1[2])), edx, arg6))
    else
        float var_34_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx) - fconvert.t(var_8))))
        ecx = arg4
        var_30_1 = fconvert.s(sub_4f44b0(arg4, fconvert.s(fconvert.t(*entry_ebx)), 
            fconvert.s(fconvert.t(var_14)), fconvert.s(fconvert.t(*arg2)), 
            fconvert.s(fconvert.t(arg2[2])), fconvert.s(fconvert.t(*arg1)), 
            fconvert.s(fconvert.t(arg1[2])), edx, arg6))
        float var_34_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_30_1) + fconvert.t(var_8))))
        var_28_1 = fconvert.s(sub_4f44b0(arg6, fconvert.s(fconvert.t(entry_ebx[2])), 
            fconvert.s(fconvert.t(var_10)), fconvert.s(fconvert.t(*arg2)), 
            fconvert.s(fconvert.t(arg2[2])), fconvert.s(fconvert.t(*arg1)), 
            fconvert.s(fconvert.t(arg1[2])), edx, ecx))
    
    float var_34_5 = ecx
    float var_2c_1
    float var_24_1
    
    if (arg7 != 0)
        float var_34_8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2c) + fconvert.t(var_c))))
        long double st0_6 = sub_4f44b0(arg7, fconvert.s(fconvert.t(entry_ebx[3])), 
            fconvert.s(fconvert.t(var_18)), fconvert.s(fconvert.t(arg2[1])), 
            fconvert.s(fconvert.t(arg2[3])), fconvert.s(fconvert.t(arg1[1])), 
            fconvert.s(fconvert.t(arg1[3])), arg5, arg5)
        var_24_1 = fconvert.s(st0_6)
        float var_34_9 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_24_1) - fconvert.t(var_c))))
        long double st0_7 = sub_4f44b0(arg5, fconvert.s(fconvert.t(entry_ebx[1])), 
            fconvert.s(fconvert.t(var_1c)), fconvert.s(fconvert.t(arg2[1])), 
            fconvert.s(fconvert.t(arg2[3])), fconvert.s(fconvert.t(arg1[1])), 
            fconvert.s(fconvert.t(arg1[3])), arg5, arg7)
        var_2c_1 = fconvert.s(st0_7)
    else
        float var_34_6 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_1) - fconvert.t(var_c))))
        long double st0_4 = sub_4f44b0(arg5, fconvert.s(fconvert.t(entry_ebx[1])), 
            fconvert.s(fconvert.t(var_1c)), fconvert.s(fconvert.t(arg2[1])), 
            fconvert.s(fconvert.t(arg2[3])), fconvert.s(fconvert.t(arg1[1])), 
            fconvert.s(fconvert.t(arg1[3])), edx, arg7)
        var_2c_1 = fconvert.s(st0_4)
        float var_34_7 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_c))))
        long double st0_5 = sub_4f44b0(arg7, fconvert.s(fconvert.t(entry_ebx[3])), 
            fconvert.s(fconvert.t(var_18)), fconvert.s(fconvert.t(arg2[1])), 
            fconvert.s(fconvert.t(arg2[3])), fconvert.s(fconvert.t(arg1[1])), 
            fconvert.s(fconvert.t(arg1[3])), edx, arg5)
        var_24_1 = fconvert.s(st0_5)
    
    long double x87_r7_92 = fconvert.t(var_30_1)
    long double x87_r6 = fconvert.t(var_28_1)
    x87_r6 - x87_r7_92
    float eax_9
    eax_9.w = (x87_r6 < x87_r7_92 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_92) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_92 ? 1 : 0) << 0xe
    
    if ((eax_9:1.b & 1) == 0)
        long double x87_r7_93 = fconvert.t(var_2c_1)
        long double x87_r6_1 = fconvert.t(var_24_1)
        x87_r6_1 - x87_r7_93
        eax_9.w = (x87_r6_1 < x87_r7_93 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_93) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_93 ? 1 : 0) << 0xe
        
        if ((eax_9:1.b & 1) == 0)
            *arg3 = var_30_1
            arg3[1] = var_2c_1
            arg3[2] = var_28_1
            arg3[3] = var_24_1
            return arg3
    
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    arg3[3] = 0
    return arg3
}

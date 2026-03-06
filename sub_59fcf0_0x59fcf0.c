// 函数名称: sub_59fcf0
// 虚拟地址: 0x59fcf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_59fcf0(char* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: char eax = arg1[3]
    char eax = arg1[3]
    uint32_t result
    int32_t entry_ebx
    
    if (eax == 0)
        result = entry_ebx - 1
        
        switch (result)
            case 0
                *arg2 = fconvert.s(float.t(0))
            case 1
                arg2[1] = fconvert.s(float.t(1))
                *arg2 = fconvert.s(float.t(0))
            case 2
                goto label_59fda6
            case 3
                arg2[3] = fconvert.s(float.t(1))
            label_59fda6:
                long double x87_r7_13 = float.t(0)
                arg2[2] = fconvert.s(x87_r7_13)
                arg2[1] = fconvert.s(x87_r7_13)
                *arg2 = fconvert.s(x87_r7_13)
    else
        int32_t ecx
        int32_t edx
        float var_8_1 =
            fconvert.s(sub_5ab269(zx.d(eax) - 0x88, edx, ecx, fconvert.d(float.t(1)), zx.d(eax) - 0x88))
        
        if (entry_ebx s> 2)
            long double x87_r6_1 = fconvert.t(var_8_1)
            *arg2 = fconvert.s(float.t(zx.d(*arg1)) * x87_r6_1)
            arg2[1] = fconvert.s(float.t(zx.d(arg1[1])) * x87_r6_1)
            result = zx.d(arg1[2])
            arg2[2] = fconvert.s(x87_r6_1 * float.t(result))
        else
            result = zx.d(*arg1)
            *arg2 = fconvert.s(float.t(zx.d(arg1[2]) + zx.d(arg1[1]) + result) * fconvert.t(var_8_1)
                / fconvert.t(3.0))
        
        if (entry_ebx == 2)
            arg2[1] = fconvert.s(float.t(1))
            return result
        
        if (entry_ebx == 4)
            arg2[3] = fconvert.s(float.t(1))
    return result
}

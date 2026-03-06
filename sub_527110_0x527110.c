// 函数名称: sub_527110
// 虚拟地址: 0x527110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_527110(void* arg1, float arg2, int32_t arg3)
{
    // 第一条实际指令: void var_18
    void var_18
    float eax
    int32_t* eax_1 = sub_4f4990(eax, &var_18, arg1 + 0x14dc, &var_18, eax)
    int32_t edx_1 = eax_1[1]
    int32_t edi = eax_1[2]
    int32_t eax_2 = eax_1[3]
    *(arg1 + 8) = *eax_1
    *(arg1 + 0xc) = edx_1
    *(arg1 + 0x10) = edi
    *(arg1 + 0x14) = eax_2
    int32_t eax_4
    int80_t result
    result, eax_4 = sub_4fb1d0(arg1 + 8, arg1 + 0x14c8)
    long double x87_r6_1 = fconvert.t(*(arg1 + 0x14d8)) * fconvert.t(arg2)
    void var_58
    __builtin_memcpy(&var_58, eax_4, 0x40)
    *(arg1 + 0x58) = fconvert.s(x87_r6_1)
    __builtin_memcpy(arg1 + 0x18, &var_58, 0x40)
    int32_t ecx_3 = *(arg1 + 0x150c)
    
    if (arg3 s<= ecx_3)
        *(arg1 + 0x145c) = ecx_3
        return result
    
    *(arg1 + 0x145c) = arg3
    return result
}

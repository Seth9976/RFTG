// 函数名称: sub_606930
// 虚拟地址: 0x606930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606930(uint32_t* arg1, int32_t arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg3 s<= 0)
        return arg3 << 2
    
    void* eax = arg1
    int32_t* ecx_2 = arg2 - eax
    int32_t* var_8_1 = ecx_2
    arg2 = arg3
    
    while (true)
        int32_t eax_1 = *(ecx_2 + eax)
        *arg1 =
            zx.d(*(((*(arg4 + 8) & eax_1) u>> *(arg4 + 0x19)) + (&data_8bac68)[zx.d(*(arg4 + 0x15))]))
            u>> *(arg5 + 0x1d) << *(arg5 + 0x21) |
            zx.d(*(((*(arg4 + 4) & eax_1) u>> *(arg4 + 0x18)) + (&data_8bac68)[zx.d(*(arg4 + 0x14))]))
            u>> *(arg5 + 0x1c) << *(arg5 + 0x20) |
            zx.d(*(((eax_1 & *(arg4 + 0xc)) u>> *(arg4 + 0x1a)) + (&data_8bac68)[zx.d(*(arg4 + 0x16))]))
            u>> *(arg5 + 0x1e) << *(arg5 + 0x22) | eax_1 u>> 0x18 u>> *(arg5 + 0x1f) << *(arg5 + 0x23)
        eax = &arg1[1]
        int32_t temp0_1 = arg2
        arg2 -= 1
        arg1 = eax
        
        if (temp0_1 == 1)
            break
        
        ecx_2 = var_8_1
    
    return arg3 * 4
}

// 函数名称: sub_606760
// 虚拟地址: 0x606760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606760(void* arg1, int32_t arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg3 s<= 0)
        return arg3 << 2
    
    void* eax = arg1
    int32_t* ecx_2 = arg2 - eax
    void* edi = arg5
    int32_t* var_8_1 = ecx_2
    arg2 = arg3
    
    while (true)
        int32_t ecx_3 = *(ecx_2 + eax)
        int32_t eax_3 = (ecx_3 & 0xfffffc1f) | ecx_3 u>> 0x10
        uint32_t ebx_6 =
            zx.d(*(((*(arg4 + 0xc) & eax_3) u>> *(arg4 + 0x1a)) + (&data_8bac68)[zx.d(*(arg4 + 0x16))]))
            u>> *(edi + 0x1e) << *(edi + 0x22)
        edi = arg5
        eax = arg1 + 4
        int32_t temp0_1 = arg2
        arg2 -= 1
        *(eax - 4) = ebx_6 |
            zx.d(*(((eax_3 & *(arg4 + 8)) u>> *(arg4 + 0x19)) + (&data_8bac68)[zx.d(*(arg4 + 0x15))]))
            u>> *(arg5 + 0x1d) << *(arg5 + 0x21) |
            zx.d(*(((eax_3 & *(arg4 + 4)) u>> *(arg4 + 0x18)) + (&data_8bac68)[zx.d(*(arg4 + 0x14))]))
            u>> *(edi + 0x1c) << *(edi + 0x20) | (ecx_3 u>> 2 & 0xf8) u>> *(edi + 0x1f) << *(edi + 0x23)
        arg1 = eax
        
        if (temp0_1 == 1)
            break
        
        ecx_2 = var_8_1
    
    return arg3 * 4
}

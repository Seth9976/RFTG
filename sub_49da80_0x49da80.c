// 函数名称: sub_49da80
// 虚拟地址: 0x49da80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49da80(int32_t arg1 @ edi, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    sub_49d720(entry_ebx, arg1)
    int32_t eax_2 = *(arg1 * 0xb4 + entry_ebx + 0xc8)
    
    if (eax_2 s>= *(arg1 * 0xb4 + entry_ebx + 0xc4))
        (*(*(arg1 * 0xb4 + entry_ebx + 0x28) + 0xc))(entry_ebx, arg1, arg2, arg3, arg4, arg5, arg6, 
            arg7, arg8, arg9, 0)
        int32_t eax_8 = *(arg1 * 0xb4 + entry_ebx + 0xc4)
        *(arg1 * 0xb4 + entry_ebx + 0xd0) = eax_8
        return eax_8
    
    int32_t edx_1 = *(arg1 * 0xb4 + entry_ebx + 0xc0)
    int32_t ecx_1 = *(edx_1 + (eax_2 << 2) + 8)
    
    if (ecx_1 s< 0)
        sub_49b2a0()
        noreturn
    
    if (ecx_1 s> 0x64)
        sub_49b2a0()
        noreturn
    
    int32_t eax_3 = *(edx_1 + ((eax_2 + ecx_1 + 3) << 2))
    
    if (eax_3 s< 0)
        sub_49b2a0()
        noreturn
    
    if (eax_3 s<= 0x64)
        *(arg1 * 0xb4 + entry_ebx + 0xd0) = eax_3 + eax_2 + ecx_1 + 3 + 1
        return eax_3
    
    sub_49b2a0()
    noreturn
}

// 函数名称: sub_5ee180
// 虚拟地址: 0x5ee180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ee180(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t edx = *(ecx + 0x10)
    int32_t esi = *(ecx + 0x18)
    int32_t eax = esi << 2
    void* edi = edx + esi - 4
    uint32_t esi_1 = zx.d(*(edi + 2))
    void* eax_1 = edx + eax - 0x10
    uint32_t var_8 = zx.d(*(edx + esi - 4))
    
    if (eax_1 u>= edx)
        do
            uint32_t ecx_1 = zx.d(*(edi + 2))
            uint32_t edx_1 = zx.d(*edi)
            *(eax_1 + 0xe) = ((esi_1 * 3 + ecx_1) s>> 2).w
            *(eax_1 + 2) = ecx_1.w
            *(eax_1 + 0xc) = ((var_8 * 3 + edx_1) s>> 2).w
            *(eax_1 + 6) = ((ecx_1 * 3 + esi_1) s>> 2).w
            *(eax_1 + 0xa) = ((ecx_1 + esi_1) s>> 1).w
            *(eax_1 + 4) = ((edx_1 * 3 + var_8) s>> 2).w
            *(eax_1 + 8) = ((var_8 + edx_1) s>> 1).w
            *eax_1 = edx_1.w
            eax_1 -= 0x10
            edi -= 4
            esi_1 = ecx_1
            var_8 = edx_1
        while (eax_1 u>= edx)
        
        ecx = arg1
    
    *(ecx + 0x50) += 1
    *(ecx + 0x18) = eax
    int32_t result = *(ecx + 0x50)
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, eax, edx, var_8)
}

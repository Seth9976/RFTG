// 函数名称: sub_5f2440
// 虚拟地址: 0x5f2440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2440(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = arg1
    int32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t edi = *(edx + 0x10)
    int32_t eax = ecx * 2
    int32_t ebx = sx.d(rol.w(*(edi + ecx - 2), 8))
    void* eax_1 = edi + eax - 8
    int32_t var_8 = sx.d(rol.w(*(edi + ecx - 4), 8))
    
    if (eax_1 u>= edi)
        int16_t* ecx_2 = edi + ecx - 4
        
        do
            edx.w = ecx_2[1]
            int32_t esi_2
            esi_2.w = *ecx_2
            edx.w = rol.w(edx.w, 8)
            edx = sx.d(edx.w)
            esi_2.w = rol.w(esi_2.w, 8)
            *(eax_1 + 6) = ((ebx + edx) s>> 1).w
            esi_2 = sx.d(esi_2.w)
            *(eax_1 + 4) = ((var_8 + esi_2) s>> 1).w
            *(eax_1 + 2) = edx.w
            *eax_1 = esi_2.w
            eax_1 -= 8
            ecx_2 -= 4
            ebx = edx
            var_8 = esi_2
        while (eax_1 u>= edi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_8)
}

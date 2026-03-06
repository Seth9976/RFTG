// 函数名称: sub_5f2590
// 虚拟地址: 0x5f2590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2590(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg1
    int32_t ecx = arg1
    int32_t edx = *(ecx + 0x10)
    int32_t esi = *(ecx + 0x18)
    int32_t ebx
    ebx.w = *(edx + esi - 4)
    int32_t eax = esi << 2
    void* edi = edx + esi - 4
    esi.w = *(edi + 2)
    esi.w = rol.w(esi.w, 8)
    ebx.w = rol.w(ebx.w, 8)
    void* eax_1 = edx + eax - 0x10
    int32_t var_c = edx
    int32_t esi_1 = sx.d(esi.w)
    int32_t var_8 = sx.d(ebx.w)
    
    if (eax_1 u>= edx)
        do
            ecx.w = *(edi + 2)
            edx.w = *edi
            ecx.w = rol.w(ecx.w, 8)
            ecx = sx.d(ecx.w)
            *(eax_1 + 0xe) = ((esi_1 * 3 + ecx) s>> 2).w
            edx.w = rol.w(edx.w, 8)
            edx = sx.d(edx.w)
            *(eax_1 + 2) = ecx.w
            *(eax_1 + 0xc) = ((var_8 * 3 + edx) s>> 2).w
            *(eax_1 + 6) = ((ecx * 3 + esi_1) s>> 2).w
            *(eax_1 + 0xa) = ((ecx + esi_1) s>> 1).w
            *(eax_1 + 4) = ((edx * 3 + var_8) s>> 2).w
            *(eax_1 + 8) = ((var_8 + edx) s>> 1).w
            *eax_1 = edx.w
            eax_1 -= 0x10
            edi -= 4
            esi_1 = ecx
            var_8 = edx
        while (eax_1 u>= var_c)
        
        ecx = arg1
    
    *(ecx + 0x50) += 1
    *(ecx + 0x18) = eax
    int32_t result = *(ecx + 0x50)
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, eax, var_c, var_8)
}

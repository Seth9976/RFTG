// 函数名称: sub_5ec9e0
// 虚拟地址: 0x5ec9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec9e0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    uint32_t ebx = *(esi + 0x10)
    int32_t ecx = *(esi + 0x18)
    int32_t eax = ecx << 2
    char* ecx_1 = ebx + ecx - 2
    int32_t edi
    edi.w = sx.w(*ecx_1)
    void* eax_1 = ebx + eax - 8
    uint32_t var_14 = ebx
    int16_t edx_1 = sx.w(*(ebx + ecx - 1))
    int16_t edi_1 = edi.w
    
    if (eax_1 u>= ebx)
        while (true)
            esi.w = sx.w(ecx_1[1])
            ebx.w = sx.w(*ecx_1)
            int16_t esi_1 = esi.w
            int32_t ecx_3 = sx.d(edx_1)
            esi = sx.d(esi_1)
            uint32_t ebx_1 = zx.d(ebx.w)
            int32_t edi_2 = sx.d(edi_1)
            *(eax_1 + 7) = ((ecx_3 * 3 + esi) s>> 2).b
            int32_t edx_5 = sx.d(ebx_1.w)
            *(eax_1 + 6) = ((edi_2 * 3 + edx_5) s>> 2).b
            *(eax_1 + 3) = ((esi * 3 + ecx_3) s>> 2).b
            *(eax_1 + 5) = ((esi + ecx_3) s>> 1).b
            *(eax_1 + 4) = ((edx_5 + edi_2) s>> 1).b
            *(eax_1 + 2) = ((edx_5 * 3 + edi_2) s>> 2).b
            *(eax_1 + 1) = esi_1.b
            *eax_1 = ebx_1.b
            eax_1 -= 8
            edx_1 = esi_1
            edi_1 = ebx_1.w
            
            if (eax_1 u< var_14)
                break
            
            ecx_1 -= 2
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = eax
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

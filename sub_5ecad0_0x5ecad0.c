// 函数名称: sub_5ecad0
// 虚拟地址: 0x5ecad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ecad0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t esi = arg1
    uint32_t esi = arg1
    char* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
    void* edx_2 = ecx
    int32_t ebx
    ebx.w = sx.w(*(edx_2 + 1))
    void* var_c = &ecx[edi_1]
    void* eax_2
    eax_2.w = sx.w(*edx_2)
    uint32_t eax_3 = zx.d(eax_2.w)
    uint32_t var_8 = zx.d(ebx.w)
    
    if (ecx u< var_c)
        do
            esi.w = sx.w(*edx_2)
            int32_t edi_2
            edi_2.w = sx.w(*(edx_2 + 1))
            uint32_t esi_1 = zx.d(esi.w)
            *ecx = ((eax_3 + esi_1) s>> 1).b
            edi_2 = zx.d(edi_2.w)
            ecx[1] = ((var_8 + edi_2) s>> 1).b
            eax_3 = esi_1
            ecx = &ecx[2]
            edx_2 += 8
            var_8 = edi_2
        while (ecx u< var_c)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

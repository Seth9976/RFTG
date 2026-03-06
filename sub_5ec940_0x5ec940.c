// 函数名称: sub_5ec940
// 虚拟地址: 0x5ec940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec940(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    char* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = (eax_1 - edx) s>> 1
    void* edx_1 = ecx
    int32_t ebx
    ebx.w = sx.w(*(edx_1 + 1))
    void* var_c = &ecx[edi_1]
    void* eax_3
    eax_3.w = sx.w(*edx_1)
    int32_t var_10 = edi_1
    uint32_t eax_4 = zx.d(eax_3.w)
    uint32_t var_8 = zx.d(ebx.w)
    
    if (ecx u< var_c)
        do
            esi.w = sx.w(*edx_1)
            edi_1.w = sx.w(*(edx_1 + 1))
            uint32_t esi_1 = zx.d(esi.w)
            *ecx = ((eax_4 + esi_1) s>> 1).b
            edi_1 = zx.d(edi_1.w)
            ecx[1] = ((var_8 + edi_1) s>> 1).b
            eax_4 = esi_1
            ecx = &ecx[2]
            edx_1 += 4
            var_8 = edi_1
        while (ecx u< var_c)
        
        edi_1 = var_10
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

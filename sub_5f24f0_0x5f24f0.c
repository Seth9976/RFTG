// 函数名称: sub_5f24f0
// 虚拟地址: 0x5f24f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f24f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int16_t* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = (eax_1 - edx) s>> 1
    void* var_8 = ecx + edi_1
    int16_t* edx_1 = ecx
    void* eax_3
    eax_3.w = *edx_1
    int32_t ebx
    ebx.w = edx_1[1]
    eax_3.w = rol.w(eax_3.w, 8)
    ebx.w = rol.w(ebx.w, 8)
    int32_t var_c = edi_1
    int32_t eax_4 = sx.d(eax_3.w)
    int32_t ebx_1 = sx.d(ebx.w)
    
    if (ecx u< var_8)
        do
            esi.w = *edx_1
            edi_1.w = edx_1[1]
            esi.w = rol.w(esi.w, 8)
            esi = sx.d(esi.w)
            edi_1.w = rol.w(edi_1.w, 8)
            edi_1 = sx.d(edi_1.w)
            *ecx = ((eax_4 + esi) s>> 1).w
            ecx[1] = ((edi_1 + ebx_1) s>> 1).w
            ecx = &ecx[2]
            edx_1 = &edx_1[4]
            eax_4 = esi
            ebx_1 = edi_1
        while (ecx u< var_8)
        
        edi_1 = var_c
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

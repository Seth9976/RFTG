// 函数名称: sub_5ee260
// 虚拟地址: 0x5ee260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ee260(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int16_t* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
    void* eax_2 = ecx + edi_1
    int16_t* edx_2 = ecx
    uint32_t eax_3 = zx.d(*edx_2)
    uint32_t ebx = zx.d(edx_2[1])
    
    if (ecx u< eax_2)
        do
            uint32_t esi_1 = zx.d(*edx_2)
            uint32_t edi_2 = zx.d(edx_2[1])
            *ecx = ((eax_3 + esi_1) s>> 1).w
            ecx[1] = ((edi_2 + ebx) s>> 1).w
            ecx = &ecx[2]
            edx_2 = &edx_2[8]
            eax_3 = esi_1
            ebx = edi_2
        while (ecx u< eax_2)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

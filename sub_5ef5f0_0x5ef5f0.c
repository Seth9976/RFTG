// 函数名称: sub_5ef5f0
// 虚拟地址: 0x5ef5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef5f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int16_t* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = (eax_1 - edx) s>> 1
    void* eax_3 = ecx + edi_1
    int16_t* edx_1 = ecx
    int32_t eax_4 = sx.d(*edx_1)
    int32_t ebx = sx.d(edx_1[1])
    
    if (ecx u< eax_3)
        do
            int32_t esi_1 = sx.d(*edx_1)
            int32_t edi_2 = sx.d(edx_1[1])
            *ecx = ((eax_4 + esi_1) s>> 1).w
            ecx[1] = ((edi_2 + ebx) s>> 1).w
            ecx = &ecx[2]
            edx_1 = &edx_1[4]
            eax_4 = esi_1
            ebx = edi_2
        while (ecx u< eax_3)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

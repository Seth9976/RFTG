// 函数名称: sub_5eb340
// 虚拟地址: 0x5eb340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb340(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    char* ecx = *(esi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t edi_1 = (eax_1 - edx) s>> 1
    void* edx_1 = ecx
    void* eax_3 = &ecx[edi_1]
    uint32_t eax_4 = zx.d(*edx_1)
    uint32_t var_8 = zx.d(*(edx_1 + 1))
    
    if (ecx u< eax_3)
        do
            uint32_t esi_1 = zx.d(*edx_1)
            uint32_t edi_2 = zx.d(*(edx_1 + 1))
            *ecx = ((eax_4 + esi_1) s>> 1).b
            ecx[1] = ((var_8 + edi_2) s>> 1).b
            eax_4 = esi_1
            ecx = &ecx[2]
            edx_1 += 4
            var_8 = edi_2
        while (ecx u< eax_3)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

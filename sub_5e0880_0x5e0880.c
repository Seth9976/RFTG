// 函数名称: sub_5e0880
// 虚拟地址: 0x5e0880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0880(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x10)
    void* ecx = *(arg1 + 0x10)
    uint32_t i_1 = *(arg1 + 0x18) u>> 2
    int16_t* edx = ecx
    
    if (i_1 != 0)
        int32_t edi
        int32_t var_c_1 = edi
        uint32_t i
        
        do
            edi.w = *(ecx + 2)
            edi.w = rol.w(edi.w, 8)
            *edx = edi.w
            ecx += 4
            edx = &edx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_1 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(eax_1)
    *(arg1 + 0x18) = (eax_2 - edx_1) s>> 1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x9010)
}

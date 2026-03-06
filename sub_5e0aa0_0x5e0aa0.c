// 函数名称: sub_5e0aa0
// 虚拟地址: 0x5e0aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0aa0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x10)
    int32_t* esi = *(arg1 + 0x10)
    uint32_t i_1 = *(arg1 + 0x18) u>> 2
    char* edi = esi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t ecx_1 = *esi
            *edi = (ecx_1 u>> 0x18 s>> 0x18).b | ecx_1.b
            esi = &esi[1]
            edi = &edi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_1 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    int32_t eax_2
    int32_t edx_4
    edx_4:eax_2 = sx.q(eax_1)
    *(arg1 + 0x18) = (eax_2 + (edx_4 & 3)) s>> 2
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x8008)
}

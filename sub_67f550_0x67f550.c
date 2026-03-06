// 函数名称: sub_67f550
// 虚拟地址: 0x67f550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67f550(void* arg1 @ esi)
{
    // 第一条实际指令: void* ecx_2 = *(arg1 + 0x1b8)
    void* ecx_2 = *(arg1 + 0x1b8)
    void* edi = *(arg1 + 0x1bc)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(edi + 0x10))
    *(ecx_2 + 0x18) += (eax_1 + (edx & 7)) s>> 3
    *(edi + 0x10) = 0
    int32_t result = (*(*(arg1 + 0x1b8) + 8))(arg1)
    
    if (result == 0)
        return result
    
    int32_t i = 0
    
    if (*(arg1 + 0x148) s> 0)
        void* ecx_1 = edi + 0x18
        
        do
            *ecx_1 = 0
            i += 1
            ecx_1 += 4
        while (i s< *(arg1 + 0x148))
    
    *(edi + 0x14) = 0
    *(edi + 0x28) = *(arg1 + 0x114)
    
    if (*(arg1 + 0x1a0) == 0)
        *(edi + 8) = 0
    
    return 1
}

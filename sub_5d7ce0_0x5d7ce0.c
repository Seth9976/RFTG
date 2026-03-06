// 函数名称: sub_5d7ce0
// 虚拟地址: 0x5d7ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d7ce0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 4)
    void* ecx = *(arg1 + 4)
    uint32_t ecx_1 = zx.d(*(ecx + 8))
    int32_t eax_1 = zx.d(*(ecx + 9)) * *(arg1 + 8)
    
    if (ecx_1 == 1)
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(eax_1 + 7)
        eax_1 = (eax_9 + (edx_2 & 7)) s>> 3
    else if (ecx_1 == 4)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(eax_1 + 1)
        return (((eax_3 - edx_1) s>> 1) + 3) & 0xfffffffc
    
    return (eax_1 + 3) & 0xfffffffc
}

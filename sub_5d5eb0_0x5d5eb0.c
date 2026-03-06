// 函数名称: sub_5d5eb0
// 虚拟地址: 0x5d5eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5eb0(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    *(*(arg1 + 0x34) + 0x4f) = arg2
    int32_t edx_2 = *(*(arg1 + 0x34) + 0x44)
    void* ecx_1 = *(arg1 + 0x34)
    
    if (arg2 == 0xff)
        *(ecx_1 + 0x44) &= 0xfffffffd
    else
        *(ecx_1 + 0x44) |= 2
    
    int32_t* eax_2 = *(arg1 + 0x34)
    
    if (eax_2[0x11] != edx_2)
        sub_5d8400(eax_2)
    
    return 0
}

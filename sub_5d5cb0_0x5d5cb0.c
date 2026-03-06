// 函数名称: sub_5d5cb0
// 虚拟地址: 0x5d5cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5cb0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    void* ecx = *(arg1 + 0x34)
    int32_t edx = *(ecx + 0x44)
    
    if (arg2 == 0)
        *(ecx + 0x44) &= 0xffffefff
    else
        *(ecx + 0x44) |= 0x1000
    
    int32_t* eax_2 = *(arg1 + 0x34)
    
    if (eax_2[0x11] != edx)
        sub_5d8400(eax_2)
    
    return 0
}

// 函数名称: sub_5d32b0
// 虚拟地址: 0x5d32b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d32b0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0xa0)
    void* ecx = *(arg1 + 0xa0)
    
    if (*(ecx + 0x14) == 0)
        return arg1
    
    int32_t* ecx_1 = *(ecx + 4)
    return (*(*ecx_1 + 0x4c))(ecx_1, *(ecx + 0x14), *(ecx + 0xc), 0, 0)
}

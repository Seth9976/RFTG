// 函数名称: sub_67d990
// 虚拟地址: 0x67d990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d990(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x1ac)
    void* result = *(arg1 + 0x1ac)
    bool cond:0 = *(arg1 + 0x148) s<= 1
    *(arg1 + 0x94) = 0
    
    if (not(cond:0))
        *(result + 0x1c) = 1
        *(result + 0x14) = 0
        *(result + 0x18) = 0
        return result
    
    void* ecx_1 = *(arg1 + 0x14c)
    
    if (*(arg1 + 0x140) == 1)
        *(result + 0x1c) = *(ecx_1 + 0x48)
        *(result + 0x14) = 0
        *(result + 0x18) = 0
        return result
    
    *(result + 0x1c) = *(ecx_1 + 0xc)
    *(result + 0x14) = 0
    *(result + 0x18) = 0
    return result
}

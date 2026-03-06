// 函数名称: sub_67b5d0
// 虚拟地址: 0x67b5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67b5d0(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 4)
    void* result = *(arg1 + 4)
    
    if (result != 0)
        result = (*(result + 0x24))(arg1, 1)
        
        if (*(arg1 + 0x10) != 0)
            *(arg1 + 0x14) = 0xc8
            *(arg1 + 0x130) = 0
            return result
        
        *(arg1 + 0x14) = 0x64
    
    return result
}

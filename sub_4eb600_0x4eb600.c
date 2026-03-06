// 函数名称: sub_4eb600
// 虚拟地址: 0x4eb600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4eb600(void* arg1)
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    
    while (true)
        if (esi != 0)
            esi = *(esi + 0x2fc)
        else
            esi = *(arg1 + 0x2d0)
        
        if (esi == 0)
            break
        
        sub_4eb600(esi)
    
    sub_4f3590(arg1 + 0x2d0)
    void* result = *(arg1 + 0x2e4)
    *(result + 0x14) -= 1
    return result
}

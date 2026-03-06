// 函数名称: sub_5d2890
// 虚拟地址: 0x5d2890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d2890(void* arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    while (true)
        result = *(arg1 + 0xa0)
        int32_t ecx_2 = 2
        
        if ((*(result + 0x20) & 1) != 0)
            ecx_2 = 1
        
        if ((*(result + 0x40) & 1) != 0)
            ecx_2 -= 1
        
        if (ecx_2 s<= 0)
            break
        
        std::tr2::sys::_Close_dir(0x64)
    
    return result
}

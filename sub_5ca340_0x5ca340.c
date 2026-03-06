// 函数名称: sub_5ca340
// 虚拟地址: 0x5ca340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5ca340()
{
    // 第一条实际指令: void* result = data_bed820
    void* result = data_bed820
    
    if (result == 0)
        return sub_5c8d60() __tailcall
    
    int32_t ecx_1 = *(result + 0x15c)
    
    if (ecx_1 s> 0)
        *(result + 0x15c) = ecx_1 - 1
        
        if (ecx_1 - 1 s<= 0)
            int32_t ecx_3 = *(result + 0x90)
            
            if (ecx_3 != 0)
                result = ecx_3(result)
    
    return result
}

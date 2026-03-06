// 函数名称: sub_5ca200
// 虚拟地址: 0x5ca200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5ca200()
{
    // 第一条实际指令: void* result = data_bed820
    void* result = data_bed820
    
    if (result != 0 && *(result + 0xe4) != 0)
        int32_t ecx_1 = *(result + 0xb4)
        *(result + 0xe4) = 0
        
        if (ecx_1 != 0)
            result = ecx_1(result)
    
    return result
}

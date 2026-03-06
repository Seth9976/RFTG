// 函数名称: sub_56b5c0
// 虚拟地址: 0x56b5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56b5c0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void* result = data_3079210
    void* result = data_3079210
    
    if (*arg1 == 4 && *(result + 0x20) != 0)
        if (GetCapture() == data_30785e0)
            ReleaseCapture()
        
        result = data_3079210
        
        if (*(result + 0x20) == 3)
            sub_5041e0(result + 0x34)
            result = data_3079210
        
        *(result + 0x20) = 0
    
    if (*arg1 == 1 && arg1[1] == 0x2e)
        sub_56b4b0()
        result = data_3079210
    
    if (*arg1 == 0 && arg1[1] == 0x67)
        *(result + 0x84) = *(result + 0x84) == 0
    
    return result
}

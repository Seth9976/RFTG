// 函数名称: sub_5caa00
// 虚拟地址: 0x5caa00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5caa00(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* edx = data_bed820
    void* edx = data_bed820
    
    if (edx == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 == 0 || *arg1 != edx + 0xf4)
        sub_5cce60("Invalid window")
    else if (arg2 != 0)
        *(arg2 + 4) = 0
        int32_t eax_3 = *(edx + 0x84)
        
        if (eax_3 != 0)
            return eax_3(edx, arg1, arg2)
    
    return 0
}

// 函数名称: sub_57ecf0
// 虚拟地址: 0x57ecf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_57ecf0()
{
    // 第一条实际指令: void* edx_1 = data_26a6554
    void* edx_1 = data_26a6554
    void* ecx = *(edx_1 + 4)
    int32_t result = *(ecx + 0x14)
    
    if (result != 3)
        if (result != 8)
            if (result != 0xc)
                return ShowWindow(*(edx_1 + 0x1c), SW_HIDE)
            
            ShowWindow(*(edx_1 + 0x1c), SW_HIDE)
            return ShowWindow(*(data_26a6554 + 0x20), SW_HIDE)
        
        *(ecx + 8) = &data_8951dc
    
    return result
}

// 函数名称: sub_5dc530
// 虚拟地址: 0x5dc530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5dc530()
{
    // 第一条实际指令: if (data_bf7fdc == 0)
    if (data_bf7fdc == 0)
        return 
    
    int32_t temp0_1 = data_bf7fdc
    data_bf7fdc -= 1
    
    if (temp0_1 != 1)
        return 
    
    WNDCLASSW wndClass
    
    if (GetClassInfoW(data_bf7fe8, data_bf7fe0, &wndClass) != 0)
        UnregisterClassW(data_bf7fe0, data_bf7fe8)
    
    int32_t var_30_3 = data_bf7fe0
    sub_5d0af0()
    data_bf7fe0 = 0
}

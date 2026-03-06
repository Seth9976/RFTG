// 函数名称: sub_5cee50
// 虚拟地址: 0x5cee50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5cee50()
{
    // 第一条实际指令: BOOL hLibModule = data_bedd54
    BOOL hLibModule = data_bedd54
    
    if (hLibModule != 0)
        int32_t temp0_1 = data_bedd58
        data_bedd58 -= 1
        
        if (temp0_1 == 1)
            hLibModule = FreeLibrary(hLibModule)
            data_bedd54 = 0
    
    return hLibModule
}

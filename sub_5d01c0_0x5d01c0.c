// 函数名称: sub_5d01c0
// 虚拟地址: 0x5d01c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d01c0()
{
    // 第一条实际指令: if (data_bedd54 != 0)
    if (data_bedd54 != 0)
        data_bedd58 += 1
        return 0
    
    int32_t esi = 0x10004
    HMODULE hModule = LoadLibraryW(u"XInput1_4.dll")
    data_bedd54 = hModule
    
    if (hModule != 0)
    label_5d0216:
        data_bedd50 = esi
        data_bedd58 = 1
        data_bedd44 = GetProcAddress(hModule, 0x64)
        int32_t eax_3 = GetProcAddress(data_bedd54, "XInputSetState")
        HMODULE hModule_1 = data_bedd54
        data_bedd48 = eax_3
        int32_t eax_4 = GetProcAddress(hModule_1, "XInputGetCapabilities")
        bool cond:0_1 = data_bedd44 == 0
        data_bedd4c = eax_4
        
        if (not(cond:0_1) && data_bedd48 != 0 && eax_4 != 0)
            return 0
        
        sub_5cee50()
    else
        esi = 0x10003
        hModule = LoadLibraryW(u"XInput1_3.dll")
        data_bedd54 = hModule
        
        if (hModule != 0)
            goto label_5d0216
        
        hModule = LoadLibraryW(u"bin\XInput1_3.dll")
        data_bedd54 = hModule
        
        if (hModule != 0)
            goto label_5d0216
    
    return 0xffffffff
}

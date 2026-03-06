// 函数名称: sub_5a760f
// 虚拟地址: 0x5a760f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HMODULEsub_5a760f(int32_t arg1)
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleW(u"mscoree.dll")
    HMODULE hModule = GetModuleHandleW(u"mscoree.dll")
    
    if (hModule != 0)
        hModule = GetProcAddress(hModule, "CorExitProcess")
        
        if (hModule != 0)
            return hModule(arg1)
    
    return hModule
}

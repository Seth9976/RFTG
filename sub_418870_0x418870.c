// 函数名称: sub_418870
// 虚拟地址: 0x418870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_418870(int32_t arg1)
{
    // 第一条实际指令: void* result = sub_418620(arg1)
    void* result = sub_418620(arg1)
    
    if (result == 0)
        if (arg1 s< 0)
            sub_4c5870("cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x9c, "RFTGGfxLookup")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (arg1 s> 0xf4240)
            sub_4c5870("cidx <= 1000000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x9d, "RFTGGfxLookup")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
        *result = 0
        *(result + 0x7c) = arg1
    
    return result
}

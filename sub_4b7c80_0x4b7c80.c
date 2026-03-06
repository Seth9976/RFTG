// 函数名称: sub_4b7c80
// 虚拟地址: 0x4b7c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4b7c80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x1b4)
    int32_t esi = *(arg1 + 0x1b4)
    
    if (esi == 0)
        return 
    
    int32_t edi_1 = *(arg1 + 0x1bc)
    
    if (edi_1 u> 0xf)
        sub_4c5870("playerIndex >= 0 && playerIndex < MAX_PLAYERS", &data_83f3d3, 
            "..\code\SServer.cpp", 0x50a, "ServerGotPlayerState")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4b6620(sub_4b9120(esi))
    __builtin_memcpy(edi_1 * 0x70 + data_27e7a4c + 0xc, arg2, 0x70)
    sub_4b66e0()
}

// 函数名称: sub_437ca0
// 虚拟地址: 0x437ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_437ca0()
{
    // 第一条实际指令: void* esi = *(data_27e7a40 + 0x548)
    void* esi = *(data_27e7a40 + 0x548)
    *(esi + 0x2c024) -= 1
    int128_t* result = *(esi + 0x2c024)
    
    if (result s> 0)
        result = sub_5a6c10(esi + 0xc024, esi + 0xc064, result << 6)
        
        if (*(esi + 0xc058) != 0)
            sub_4c5870("gui->uiActions[0].countCreated == 0", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x2c3c, "UIActionQueuePop")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return result
}

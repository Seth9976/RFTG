// 函数名称: sub_5335f0
// 虚拟地址: 0x5335f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5335f0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    void* result = sub_532f10(ecx, edx)
    void* result_1 = result
    
    if (result_1 != 0)
        sub_4fecf0(result_1 + 4, data_315f704, &data_8beefc)
        void* eax_1 = data_27e7fcc
        
        if (eax_1 == 0)
            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = *(eax_1 + 0xc)
        int32_t ecx_2 = *(result + 0xc)
        *(result + 0xc) = zx.d(*(result_1 + 0x2c))
        *(result_1 + 0x2c) = ecx_2
        *(result + 0x10) -= 1
    
    return result
}

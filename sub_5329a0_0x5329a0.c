// 函数名称: sub_5329a0
// 虚拟地址: 0x5329a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5329a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx = *(eax + 0x34)
    
    if (arg2 != 0)
        uint32_t eax_3 = zx.d(arg2.w)
        
        if (eax_3 u< *(ecx + 4))
            void* eax_5 = eax_3 * 0x34 + *ecx
            int32_t ecx_1
            ecx_1.b = *(eax_5 + 0x30) != arg2
            return eax_5 & (ecx_1 - 1)
    
    return 0
}

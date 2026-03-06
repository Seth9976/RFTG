// 函数名称: sub_532f10
// 虚拟地址: 0x532f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_532f10(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_7 = data_27e7fcc
    void* eax_7 = data_27e7fcc
    
    if (eax_7 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    void* ecx = *(eax_7 + 0xc)
    
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(ecx + 4))
            void* eax_5 = eax_2 * 0x30 + *ecx
            int32_t ecx_1
            ecx_1.b = *(eax_5 + 0x2c) != arg2
            return eax_5 & (ecx_1 - 1)
    
    return 0
}

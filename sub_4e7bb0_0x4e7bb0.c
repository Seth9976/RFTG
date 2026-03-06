// 函数名称: sub_4e7bb0
// 虚拟地址: 0x4e7bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e7bb0()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t* edi = *(entry_ebx + 0x68)
    
    if (edi != 0)
        int32_t esi_3 = *(entry_ebx + 0x6c) * 0x60
        sub_4f4430(edi, sub_4f4380(esi_3), esi_3)
        *(entry_ebx + 0x68) = 0
    
    void* eax_3 = data_27e7fcc
    
    if (eax_3 != 0)
        void* result = *(eax_3 + 0x2c)
        int32_t ecx_2 = *(result + 0xc)
        *(result + 0xc) = zx.d(*(entry_ebx + 0x90))
        *(entry_ebx + 0x90) = ecx_2
        *(result + 0x10) -= 1
        return result
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

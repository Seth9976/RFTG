// 函数名称: sub_42c680
// 虚拟地址: 0x42c680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_42c680(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        int32_t edi = *(eax_1 + 0x45844)
        int32_t eax_3
        
        if (arg1 != 0xffffffff)
            eax_3 = *sub_46b2b0(arg1)
        else
            eax_3 = eax_1 | arg1
        
        void* esi_1 = arg1 * 0xb4
        return *((eax_3 << 2) + &data_c020e8) - sx.d(*(esi_1 + edi + 0xa6))
            + sx.d(*(esi_1 + edi + 0xaa))
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

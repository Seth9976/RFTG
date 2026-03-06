// 函数名称: sub_463760
// 虚拟地址: 0x463760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_463760(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    void* eax = sub_404690(ecx)
    int32_t ecx_1 = *(eax + 0x140)
    int32_t eax_1 = 0
    
    if (ecx_1 s> 0)
        void* edx_1 = eax + 8
        
        do
            if (*edx_1 == arg1)
                return eax_1 * 0x50 + eax
            
            eax_1 += 1
            edx_1 += 0x50
        while (eax_1 s< ecx_1)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x68f6, "PlayerDesc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

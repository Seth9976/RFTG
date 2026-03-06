// 函数名称: sub_4048f0
// 虚拟地址: 0x4048f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4048f0(void* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x140)
    int32_t ecx = *(arg1 + 0x140)
    int32_t eax = 0
    
    if (ecx s> 0)
        void* edx_1 = arg1
        
        do
            if (*edx_1 == arg2)
                return *(arg1 + eax * 0x50 + 8)
            
            eax += 1
            edx_1 += 0x50
        while (eax s< ecx)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\CClient.cpp", 0x718, "GamePlayerLookupCurWho")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

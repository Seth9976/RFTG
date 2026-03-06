// 函数名称: sub_42dba0
// 虚拟地址: 0x42dba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_42dba0(void* arg1)
{
    // 第一条实际指令: int32_t eax_5 = *(arg1 + 0xc0)
    int32_t eax_5 = *(arg1 + 0xc0)
    int32_t edx = 2
    
    if (eax_5 s> 1)
        void* ecx = arg1 + 0x54
        int32_t i_1 = eax_5 - 1
        int32_t i
        
        do
            int32_t eax = *ecx
            
            if (eax s< edx)
                edx = eax
            
            ecx += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (edx == 0)
        return 0
    
    if (edx == 1)
        return 1
    
    if (edx == 2)
        return 2
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1fd3, "CalcStatDifficulty")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

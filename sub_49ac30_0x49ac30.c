// 函数名称: sub_49ac30
// 虚拟地址: 0x49ac30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49ac30(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    
    if (arg2 s> 0)
        do
            int32_t result = *(arg3 + (ecx << 2))
            
            if (sx.d(*(*(arg4 + result * 0x14 + 0x46c) + 4)) == arg5)
                return result
            
            ecx += 1
        while (ecx s< arg2)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\ai.cpp", 0x2690, "FindSpecificCardInCidxs")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

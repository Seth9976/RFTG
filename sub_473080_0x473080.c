// 函数名称: sub_473080
// 虚拟地址: 0x473080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_473080(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0xf4240)
    int32_t ecx = *(arg1 + 0xf4240)
    int32_t edx = 0
    
    if (ecx s> 0)
        void* esi_1 = arg1
        
        do
            int32_t eax = *esi_1
            
            if (eax << 0x1c s>> 0x1c == arg2 && eax << 0x18 s>> 0x1c == arg3
                    && eax << 0x14 s>> 0x1c == arg4 && eax << 0x10 s>> 0x1c == arg5
                    && eax << 4 s>> 0x14 == arg6)
                if (arg8 != 0)
                    *arg8 = *(esi_1 + 0x10)
                
                if (arg7 == 0)
                    return *(esi_1 + 4)
                
                if (arg7 == 1)
                    return *(esi_1 + 8)
                
                if (arg7 == 2)
                    return *(esi_1 + 0xc)
                
                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGStats.cpp", 0x4e, "StatLookupRead")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx += 1
            esi_1 += 0x14
        while (edx s< ecx)
    
    return 0xfffffc18
}

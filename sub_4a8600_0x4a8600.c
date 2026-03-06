// 函数名称: sub_4a8600
// 虚拟地址: 0x4a8600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a8600(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1 = sub_4a83b0(arg2, arg4, arg2 + arg1 * 0x14 + 0x464, 5, arg3)
    int32_t eax_1 = sub_4a83b0(arg2, arg4, arg2 + arg1 * 0x14 + 0x464, 5, arg3)
    int32_t eax_2 = sub_4a83b0(arg2, arg4, arg2 + arg1 * 0x14 + 0x464, 4, arg3)
    int32_t eax_4 = sub_4a83b0(arg2, arg4, arg2 + arg1 * 0x14 + 0x464, 3, arg3)
    int32_t eax_5 = sub_4a83b0(arg2, arg4, arg2 + arg1 * 0x14 + 0x464, 2, arg3)
    int32_t edi_1 = eax_5
    
    if (eax_5 s<= eax_4)
        edi_1 = eax_4
    
    int32_t ecx_2 = eax_1
    
    if (eax_1 s<= eax_2)
        ecx_2 = eax_2
    
    int32_t ecx_3
    
    if (edi_1 s> ecx_2)
        ecx_3 = eax_5 s<= eax_4 ? eax_4 : eax_5
        
        goto label_4a8693
    
    if (eax_1 s<= eax_2)
        ecx_3 = eax_2
    label_4a8693:
        
        if (ecx_3 != eax_1)
            if (ecx_3 == eax_2)
                return 4
            
            if (ecx_3 == eax_4)
                return 3
            
            if (ecx_3 == eax_5)
                return 2
            
            sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\engine.cpp", 0x24cf, "best_oort_trade")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return 5
}

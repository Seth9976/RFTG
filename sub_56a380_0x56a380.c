// 函数名称: sub_56a380
// 虚拟地址: 0x56a380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_56a380(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t i = *(arg2 + 0x68)
    int32_t i = *(arg2 + 0x68)
    int32_t* eax = data_3079210
    
    if (*data_307920c == 1 && (eax[0x1c] == i || eax[0x1d] == i || eax[0x1e] == i))
        eax.b = 1
        return eax
    
    int32_t* eax_2 = *(*eax + (((i s>> 4 | i) & eax[1]) << 2))
    
    if (eax_2 != 0)
        while (i != *eax_2)
            eax_2 = eax_2[5]
            
            if (eax_2 == 0)
                eax_2.b = 0
                return eax_2
        
        if (eax_2 != 0xfffffffc)
            int32_t eax_3 = sub_569b60(i, arg2)
            
            if (eax_3 u<= 5)
                eax_3.b = *(data_307920c + (eax_3 << 2) + 4)
                eax_3.b &= 1
                return eax_3
            
            sub_4c5870("filterGroup >= 0 && filterGroup < FILTER_COUNT", &data_83f3d3, 
                "Editor\EditMode.cpp", 0x76c, "EditModeGetLayoutFilter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    eax_2.b = 0
    return eax_2
}

// 函数名称: sub_4389e0
// 虚拟地址: 0x4389e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4389e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi = *(data_27e7a50 + 0xc)
    int32_t esi = *(data_27e7a50 + 0xc)
    void var_8
    
    if (sub_419400(&var_8) != 0 && *(data_27e7a54 + 0x204) == 0)
        esi = 0
    
    if (esi == 0)
        int32_t eax_15 = arg1[0x1a]
        
        if (eax_15 != 0xb && eax_15 != 0xc)
            int32_t eax_16 = 0xffffffff
            
            if (arg1[0x14] != 0xffffffff)
                int32_t esi_3 = *(data_27e7a40 + 0x74)
                
                if (esi_3 != 0xffffffff)
                    eax_16 = *sub_46b2b0(esi_3)
                
                if (arg1[0x19] != eax_16 && sub_42f650(arg1) == 0)
                    return fconvert.t(0.25f)
            
            return fconvert.t(1.25f)
    else
        if (esi != 1)
            if (esi != 2)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x31dc, "CardRate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_7 = arg1[0x1a]
            
            if (eax_7 == 0xb || eax_7 == 0xc)
                return fconvert.t(2.5f)
            
            int32_t eax_8 = 0xffffffff
            
            if (arg1[0x14] != 0xffffffff)
                int32_t esi_1 = *(data_27e7a40 + 0x74)
                
                if (esi_1 != 0xffffffff)
                    eax_8 = *sub_46b2b0(esi_1)
                
                if (arg1[0x19] != eax_8 && sub_42f650(arg1) == 0)
                    return fconvert.t(1.5f)
            
            return fconvert.t(5f)
        
        int32_t eax_11 = arg1[0x1a]
        
        if (eax_11 == 0xb || eax_11 == 0xc)
            return float.t(1)
        
        int32_t eax_12 = 0xffffffff
        
        if (arg1[0x14] == 0xffffffff)
            return fconvert.t(2.5f)
        
        int32_t esi_2 = *(data_27e7a40 + 0x74)
        
        if (esi_2 != 0xffffffff)
            eax_12 = *sub_46b2b0(esi_2)
        
        if (arg1[0x19] == eax_12)
            return fconvert.t(2.5f)
        
        if (sub_42f650(arg1) != 0)
            return fconvert.t(2.5f)
    
    return fconvert.t(0.5f)
}

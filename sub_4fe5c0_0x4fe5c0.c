// 函数名称: sub_4fe5c0
// 虚拟地址: 0x4fe5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fe5c0(int32_t* arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* esi_1 = *arg1 + arg3
    int32_t* esi_1 = *arg1 + arg3
    
    if (sub_4fe230(arg4) == 0)
        int32_t eax_3 = *(arg4 + 0x10)
        
        if (eax_3 s> 0 && eax_3 s< 0x12)
            if (eax_3 - 5 u<= 0xc)
                switch (eax_3)
                    case 5
                        *(arg3 + arg1[4]) = 0
                        *esi_1 = 0
                        return eax_3 - 5
                    case 6
                        return sub_4fe550(arg1, arg3)
                    case 8
                        int32_t eax_8 = arg1[9]
                        *esi_1 = eax_8
                        return eax_8
                    case 9, 0x11
                        *(arg3 + arg1[4]) = 0
                        *esi_1 = 0
                        return eax_3 - 5
                    case 0xb
                        if (arg1[9] == 0)
                            *esi_1 = 0
                            return eax_3 - 5
                        
                        int128_t* eax_6 = sub_4ff4d0(arg1[6])
                        *esi_1 = eax_6
                        return eax_6
                    case 0xc
                        *esi_1 = arg1[9]
                        return sub_4fe430(arg1, arg3) __tailcall
            
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x143, 
                "DefinitionFillSubFieldWithDefaults")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return sub_4fe480(esi_1, arg2, arg1, arg4)
}

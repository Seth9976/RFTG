// 函数名称: sub_472430
// 虚拟地址: 0x472430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_472430(int32_t arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (arg2[0x50] s> 0)
        void* ecx_1 = &arg2[2]
        
        do
            int32_t eax = *(ecx_1 - 4)
            void* ebx_1 = data_27e7a40
            *ecx_1 = eax
            void* eax_2
            
            if (eax != *(ebx_1 + 0x74))
                eax_2 = eax * 0xb4 + arg1
                *(eax_2 + 0x28) = 0x8c6cbc
            else
                eax_2 = eax * 0xb4 + arg1
                *(eax_2 + 0x28) = 0x8c6ce0
            
            i += 1
            *(eax_2 + 0x20) = ecx_1 + 4
            *(eax_2 + 0x24) = 0
            ecx_1 += 0x50
        while (i s< arg2[0x50])
    
    void* i_1 = data_27e7a40
    void* i_2 = nullptr
    
    if (arg2[0x50] s> 0)
        int32_t* var_8_1 = arg2
        int32_t* ebx_4 = *(i_1 + 0x548) + 0x218
        
        do
            int32_t eax_4 = var_8_1[2]
            void* edx = data_27e7fd0
            ebx_4[1] = eax_4
            
            if (*(edx + 0x27) == 0)
                int32_t ecx_6 = *(data_27e7a40 + 0x74)
                
                if (eax_4 != ecx_6)
                    if (eax_4 s< ecx_6)
                        eax_4 += 1
                    
                    *ebx_4 = eax_4
                else
                    *ebx_4 = 0
            else
                int32_t esi_1 = 0
                int32_t* var_c_1 = arg2
                
                while (true)
                    if (esi_1 s>= arg2[0x50])
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x13a9, "FindMySeat")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_5 = sub_4194b0()
                    
                    if (*var_c_1 == eax_5)
                        break
                    
                    esi_1 += 1
                    var_c_1 = &var_c_1[0x14]
                
                int32_t ecx_4 = arg2[0x50]
                int32_t temp1_1 = mods.dp.d(sx.q(ecx_4 - esi_1 + i_2), ecx_4)
                *ebx_4 = temp1_1
                int32_t eax_11 = sub_4194b0()
                
                if (*var_8_1 == eax_11 && temp1_1 != 0)
                    sub_4c5870("gui->playerGuis[i].seat == SEAT_LOCAL", &data_83f3d3, 
                        "..\code\RFTGShared.cpp", 0x13c9, "RFTGGameSetupPlayersNetwork")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (temp1_1 s>= arg2[0x50])
                    sub_4c5870("gui->playerGuis[i].seat < setup.numPlayers", &data_83f3d3, 
                        "..\code\RFTGShared.cpp", 0x13cb, "RFTGGameSetupPlayersNetwork")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            var_8_1 = &var_8_1[0x14]
            i_1 = i_2 + 1
            ebx_4 = &ebx_4[0x7e6]
            i_2 = i_1
        while (i_1 s< arg2[0x50])
    
    return i_1
}

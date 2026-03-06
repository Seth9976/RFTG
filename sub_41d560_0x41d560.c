// 函数名称: sub_41d560
// 虚拟地址: 0x41d560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41d560()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    void* esi = *(data_27e7a40 + 0x548)
    char eax_1 = sub_41d0d0()
    int32_t edi = *(esi + 0x1c8)
    int32_t result
    int32_t entry_ebx
    
    if (eax_1 == 1)
        result = 0
        
        if (edi s> 0)
            void* edx_2 = esi + 0x188
            
            do
                if (entry_ebx u> 9)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, 
                        "PhaseButtonToRole")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_2
                
                switch (entry_ebx)
                    case 0
                        ecx_2 = 0
                    case 1
                        ecx_2 = 1
                    case 2
                        ecx_2 = 2
                    case 3
                        ecx_2 = 3
                    case 4
                        ecx_2 = 4
                    case 5
                        ecx_2 = 5
                    case 6
                        ecx_2 = 6
                    case 7
                        ecx_2 = 7
                    case 8
                        ecx_2 = 8
                    case 9
                        ecx_2 = 9
                
                if (*edx_2 == ecx_2)
                    return result
                
                result += 1
                edx_2 += 4
            while (result s< edi)
    else
        result = 0
        
        if (edi s> 0)
            void* edx_1 = esi + 0x1cc
            
            do
                if (entry_ebx u> 9)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb33, 
                        "PhaseButtonToPhase")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_1
                
                switch (entry_ebx)
                    case 0
                        ecx_1 = 0xa
                    case 1, 7
                        ecx_1 = 0xffffffff
                    case 2
                        ecx_1 = 1
                    case 3
                        ecx_1 = 2
                    case 4
                        ecx_1 = 8
                    case 5
                        ecx_1 = 3
                    case 6
                        ecx_1 = 9
                    case 8
                        ecx_1 = 4
                    case 9
                        ecx_1 = 5
                
                if (*edx_1 == ecx_1)
                    return result
                
                result += 1
                edx_1 += 4
            while (result s< edi)
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb5c, "RoleButtonToPhaseIdx")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4ccfd0
// 虚拟地址: 0x4ccfd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ccfd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    
    if (eax[1] != 0)
        int32_t esi_1 = eax[2]
        int32_t esi_2 = neg.d(esi_1)
        int32_t esi_5 = neg.d(sbb.d(esi_2, esi_2, esi_1 != 0)) - 1
        
        if (esi_5 != 0xffffffff)
            void* eax_2
            
            while (true)
                int32_t ecx_3 = esi_5 * 0xf
                esi_5 += 1
                void* edi_1 = eax[1] + (ecx_3 << 2)
                
                if (esi_5 s>= eax[2])
                    esi_5 = 0xffffffff
                
                *(edi_1 + 8)
                int32_t eax_1 = sub_4ccf50()
                *(edi_1 + 0x14)
                *(edi_1 + 0xc) = eax_1
                eax_2 = sub_4ccf50()
                bool cond:1_1 = (*(edi_1 + 0x28) & 0x100) == 0
                *(edi_1 + 0x18) = eax_2
                
                if (not(cond:1_1) && esi_5 != 0xffffffff)
                    sub_4c5870("HaltMsg", "The hw buffer must be the last field in the definition\n", 
                        "DefTypeRegistry.cpp", 0x5a, "DefTypeInitializeFields")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_5 = *(*(edi_1 + 0xc) + 0xc)
                
                if (ecx_5 != 0 && ecx_5 != *(edi_1 + 0x34))
                    int32_t var_14 = *(edi_1 + 4)
                    int32_t var_18 = *arg1
                    sub_4c5680("In definition %s field %s has the wrong type")
                    sub_4c5870("HaltMsg", "The field type in a definition is wrong\n", 
                        "DefTypeRegistry.cpp", 0x63, "DefTypeInitializeFields")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_6 = *(edi_1 + 0x38)
                
                if (ecx_6 != 0 && *(eax_2 + 0xc) != ecx_6)
                    int32_t var_14_1 = *(edi_1 + 4)
                    int32_t var_18_1 = *arg1
                    sub_4c5680("In definition %s ptr field %s has the wrong type")
                    sub_4c5870("HaltMsg", "The field type in a definition is wrong\n", 
                        "DefTypeRegistry.cpp", 0x6d, "DefTypeInitializeFields")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (esi_5 == 0xffffffff)
                    break
                
                eax = arg1
            
            return eax_2
    
    return eax
}

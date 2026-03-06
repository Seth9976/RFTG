// 函数名称: sub_472600
// 虚拟地址: 0x472600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_472600(int32_t arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t result = 0xffffffff
    void* entry_ebx
    
    if (*(entry_ebx + 0xc0) s> 0)
        void* esi_1 = entry_ebx + 0x24
        
        do
            bool cond:0_1 = *esi_1 != 4
            int32_t result_1 = *(esi_1 + 4)
            *(esi_1 + 8) = result_1
            void* ecx_3
            
            if (cond:0_1)
                ecx_3 = result_1 * 0xb4 + arg1
                *(ecx_3 + 0x28) = &data_8c6abc
                *(ecx_3 + 0x24) = 1
                int32_t edx_2 = *esi_1
                int32_t edx_3
                
                if (edx_2 == 0)
                    edx_3.b = 0
                else if (edx_2 == 1)
                    edx_3.b = 1
                else
                    if (edx_2 != 2)
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x13e8, "AIStrength")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edx_3.b = 2
                
                *(ecx_3 + 0x25) = edx_3.b
            else
                ecx_3 = result_1 * 0xb4 + arg1
                *(ecx_3 + 0x28) = 0x8c6ce0
                *(ecx_3 + 0x24) = 0
                result = result_1
            
            i += 1
            *(ecx_3 + 0x20) = esi_1 - 0x24
            esi_1 += 0x30
        while (i s< *(entry_ebx + 0xc0))
        
        if (result != 0xffffffff)
            int32_t i_1 = 0
            
            if (*(entry_ebx + 0xc0) s> 0)
                void* edx_5 = *(data_27e7a40 + 0x548) + 0x218
                void* edi_2 = entry_ebx + 0x2c
                
                do
                    int32_t ecx_6 = *edi_2
                    *(edx_5 + 4) = ecx_6
                    
                    if (ecx_6 != result)
                        if (ecx_6 s< result)
                            ecx_6 += 1
                        
                        *edx_5 = ecx_6
                    else
                        *edx_5 = 0
                    
                    i_1 += 1
                    edi_2 += 0x30
                    edx_5 += 0x1f98
                while (i_1 s< *(entry_ebx + 0xc0))
            
            return result
    
    return 0xffffffff
}

// 函数名称: sub_4e4110
// 虚拟地址: 0x4e4110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e4110(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x48)
    int32_t ebx = *(arg1 + 0x48)
    int32_t esi = 0
    int32_t eax
    
    if (ebx s> 0)
        void* edi_1 = arg1 + 8
        
        while (true)
            char* const eax_1 = *edi_1
            
            if (eax_1 == 0)
                eax_1 = &data_83f3d3
            
            char const* const ecx_1 = "tgg.gameDBID"
            
            while (true)
                char edx = *eax_1
                char const temp0_1 = *ecx_1
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax = 0
                        break
                    
                    edx = eax_1[1]
                    char temp3_1 = ecx_1[1]
                    c_1 = edx u< temp3_1
                    
                    if (edx == temp3_1)
                        eax_1 = &eax_1[2]
                        ecx_1 = &ecx_1[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
                break
            
            if (eax == 0)
                sub_4c4510(arg1 + (esi << 2) + 0x28)
                int32_t* eax_4
                eax_4.b = 1
                return eax_4
            
            esi += 1
            edi_1 += 4
            
            if (esi s>= ebx)
                break
    
    eax.b = 0
    return eax
}

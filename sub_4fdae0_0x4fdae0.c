// 函数名称: sub_4fdae0
// 虚拟地址: 0x4fdae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4fdae0(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: char* const eax = *arg1
    char* const eax = *arg1
    
    if (eax == 0)
        eax = &data_83f3d3
    
    int32_t eax_1 = sub_519130(eax)
    int32_t* esi_1 = *(*arg3 + ((arg3[1] & eax_1) << 2))
    
    if (esi_1 != 0)
        char* edi_1 = *arg1
        
        while (true)
            char* eax_2 = *esi_1
            char* const ecx_2 = &data_83f3d3
            
            if (eax_2 != 0)
                ecx_2 = eax_2
            
            char* const eax_3 = &data_83f3d3
            
            if (edi_1 != 0)
                eax_3 = edi_1
            
            int32_t eax_5
            
            while (true)
                int32_t edx
                edx.b = *eax_3
                char temp0_1 = *ecx_2
                bool c_1 = edx.b u< temp0_1
                
                if (edx.b == temp0_1)
                    if (edx.b == 0)
                        eax_5 = 0
                        break
                    
                    edx.b = eax_3[1]
                    char temp3_1 = ecx_2[1]
                    c_1 = edx.b u< temp3_1
                    
                    if (edx.b == temp3_1)
                        eax_3 = &eax_3[2]
                        ecx_2 = &ecx_2[2]
                        
                        if (edx.b != 0)
                            continue
                        
                        eax_5 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_5 = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2)
                break
            
            if (eax_5 == 0)
                return &esi_1[1]
            
            esi_1 = esi_1[3]
            
            if (esi_1 == 0)
                break
    
    return 0
}

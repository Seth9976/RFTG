// 函数名称: sub_40a710
// 虚拟地址: 0x40a710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_40a710()
{
    // 第一条实际指令: char* ecx
    char* ecx
    sub_409200(sub_4095a0(ecx))
    char* edi = *data_27e7a60
    char const* const ecx_2 = "Live A"
    char* eax_1 = edi
    uint32_t result
    char edx_1
    
    while (true)
        edx_1 = *eax_1
        char const temp0_1 = *ecx_2
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                result = 0
                break
            
            edx_1 = eax_1[1]
            char temp3_1 = ecx_2[1]
            c_1 = edx_1 u< temp3_1
            
            if (edx_1 == temp3_1)
                eax_1 = &eax_1[2]
                ecx_2 = &ecx_2[2]
                
                if (edx_1 != 0)
                    continue
                
                result = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
        break
    
    void* esi = data_27e7fd0
    
    if (result != 0)
        char const* const ecx_3 = "Live B"
        char* eax_3 = edi
        
        while (true)
            edx_1 = *eax_3
            char const temp4_1 = *ecx_3
            bool c_3 = edx_1 u< temp4_1
            
            if (edx_1 == temp4_1)
                if (edx_1 == 0)
                    result = 0
                    break
                
                edx_1 = eax_3[1]
                char temp7_1 = ecx_3[1]
                c_3 = edx_1 u< temp7_1
                
                if (edx_1 == temp7_1)
                    eax_3 = &eax_3[2]
                    ecx_3 = &ecx_3[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    result = 0
                    break
            
            bool c_4 = unimplemented  {sbb eax, eax}
            result = sbb.d(sbb.d(eax_3, eax_3, c_3), 0xffffffff, c_4)
            break
        
        if (result != 0 || *(esi + 0x2e) != 0)
            goto label_40a798
    else if (*(esi + 0x2e) != 0)
    label_40a798:
        char* var_14_1 = edi
        int32_t var_18_1 = *(esi + 0xc)
        result = sub_5a733b(0x3166a80, "%s - %s")
        *(data_27e7fd0 + 0xc) = 0x3166a80
    
    return result
}

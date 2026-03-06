// 函数名称: sub_5a98ad
// 虚拟地址: 0x5a98ad
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5a98ad(void* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    int32_t* edi_1 = arg1
    
    if (edi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t eax_2 = __fileno(edi_1)
    
    if (edi_1[1] s< 0)
        edi_1[1] = 0
    
    uint32_t eax_3 = sub_5b3cfb(eax_2, 0, FILE_CURRENT)
    
    if (eax_3 s>= 0)
        int32_t edx_1 = edi_1[3]
        
        if ((edx_1 & 0x108) == 0)
            return eax_3 - edi_1[1]
        
        int32_t eax_4 = *edi_1
        char* ecx_2 = edi_1[2]
        void* result = eax_4 - ecx_2
        void* result_1 = result
        
        if ((edx_1.b & 3) != 0)
            if ((*((&data_3166ee0)[eax_2 s>> 5] + ((eax_2 & 0x1f) << 6) + 4) & 0x80) != 0)
                char* edx_5 = ecx_2
                
                if (edx_5 u< eax_4)
                    do
                        if (*edx_5 == 0xa)
                            result += 1
                        
                        edx_5 = &edx_5[1]
                    while (edx_5 u< eax_4)
                    
                    result_1 = result
            
            goto label_5a9957
        
        if (edx_1.b s< 0)
        label_5a9957:
            
            if (eax_3 == 0)
                return result
            
            if ((edi_1[3].b & 1) == 0)
                return result_1 + eax_3
            
            int32_t edx_6 = edi_1[1]
            
            if (edx_6 == 0)
                return (result_1 & edx_6) + eax_3
            
            arg1 = eax_4 - ecx_2 + edx_6
            int32_t esi_7 = (eax_2 & 0x1f) << 6
            
            if ((*((&data_3166ee0)[eax_2 s>> 5] + esi_7 + 4) & 0x80) == 0)
                return result_1 + eax_3 - arg1
            
            bool cond:0_1
            
            if (sub_5b3cfb(eax_2, 0, FILE_END) == eax_3)
                char* i = edi_1[2]
                
                for (void* ecx_4 = arg1 + i; i u< ecx_4; i = &i[1])
                    if (*i == 0xa)
                        arg1 += 1
                
                cond:0_1 = (edi_1[3] & 0x2000) == 0
                goto label_5a9a2b
            
            if (sub_5b3cfb(eax_2, eax_3, FILE_BEGIN) s>= 0)
                void* eax_11 = 0x200
                int32_t ecx_5
                
                if (arg1 u<= 0x200)
                    ecx_5 = edi_1[3]
                
                if (arg1 u> 0x200 || (ecx_5.b & 8) == 0 || (ecx_5 & 0x400) != 0)
                    eax_11 = edi_1[6]
                
                arg1 = eax_11
                cond:0_1 = (*((&data_3166ee0)[eax_2 s>> 5] + esi_7 + 4) & 4) == 0
            label_5a9a2b:
                
                if (cond:0_1)
                    return result_1 + eax_3 - arg1
                
                return result_1 + eax_3 - (arg1 + 1)
        else
            *__errno() = 0x16
    
    return 0xffffffff
}

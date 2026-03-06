// 函数名称: sub_681fe0
// 虚拟地址: 0x681fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_681fe0(void* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = arg4
    int32_t ecx = arg4
    int32_t result = arg3
    void* edx = arg2
    
    if (result s< ecx)
        int32_t var_8_1 = result * 2
        int32_t* esi_4 = (result << 5) + edx + 0xc
        
        while (true)
            int32_t ebx_1 = 0
            void* var_c_1 = nullptr
            
            if (var_8_1 s> ecx)
                if (result s> 0)
                    void* edx_2 = edx + 0x18
                    int32_t ecx_2 = result
                    int32_t i
                    
                    do
                        int32_t edi_2 = *edx_2
                        
                        if (edi_2 s> ebx_1)
                            var_c_1 = edx_2 - 0x18
                            ebx_1 = edi_2
                        
                        edx_2 += 0x20
                        i = ecx_2
                        ecx_2 -= 1
                    while (i != 1)
            else if (result s> 0)
                int32_t* edx_1 = edx + 0x1c
                int32_t ecx_1 = result
                int32_t i_1
                
                do
                    int32_t edi_1 = *edx_1
                    
                    if (edi_1 s> ebx_1 && edx_1[-1] s> 0)
                        var_c_1 = &edx_1[-7]
                        ebx_1 = edi_1
                    
                    edx_1 = &edx_1[8]
                    i_1 = ecx_1
                    ecx_1 -= 1
                while (i_1 != 1)
            
            if (var_c_1 == 0)
                break
            
            esi_4[-2] = *(var_c_1 + 4)
            *esi_4 = *(var_c_1 + 0xc)
            esi_4[2] = *(var_c_1 + 0x14)
            esi_4[-3] = *var_c_1
            esi_4[-1] = *(var_c_1 + 8)
            esi_4[1] = *(var_c_1 + 0x10)
            int32_t eax_5 = (*(var_c_1 + 4) - *var_c_1) << 4
            int32_t edx_10 = (*(var_c_1 + 0xc) - *(var_c_1 + 8)) * 0xc
            int32_t ebx_4 = 1
            
            if (eax_5 s> edx_10)
                edx_10 = eax_5
                ebx_4 = 0
            
            if ((*(var_c_1 + 0x14) - *(var_c_1 + 0x10)) * 8 s> edx_10)
                ebx_4 = 2
            
            if (ebx_4 == 0)
                int32_t eax_18
                edx_10:eax_18 = sx.q(*(var_c_1 + 4) + *var_c_1)
                int32_t eax_20 = (eax_18 - edx_10) s>> 1
                *(var_c_1 + 4) = eax_20
                eax_5 = eax_20 + 1
                esi_4[-3] = eax_5
            else if (ebx_4 == 1)
                int32_t eax_13
                edx_10:eax_13 = sx.q(*(var_c_1 + 0xc) + *(var_c_1 + 8))
                int32_t eax_15 = (eax_13 - edx_10) s>> 1
                *(var_c_1 + 0xc) = eax_15
                eax_5 = eax_15 + 1
                esi_4[-1] = eax_5
            else if (ebx_4 == 2)
                int32_t eax_8
                edx_10:eax_8 = sx.q(*(var_c_1 + 0x14) + *(var_c_1 + 0x10))
                int32_t eax_10 = (eax_8 - edx_10) s>> 1
                *(var_c_1 + 0x14) = eax_10
                eax_5 = eax_10 + 1
                esi_4[1] = eax_5
            
            sub_681c70(&esi_4[-3], sub_681c70(eax_5, edx_10, arg1, var_c_1), arg1, &esi_4[-3])
            ecx = arg4
            var_8_1 += 2
            result = arg3 + 1
            esi_4 = &esi_4[8]
            arg3 = result
            
            if (result s>= ecx)
                break
            
            edx = arg2
    
    return result
}

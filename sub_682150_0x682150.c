// 函数名称: sub_682150
// 虚拟地址: 0x682150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char __convention("regparm")sub_682150(int32_t* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: int32_t edx_1 = arg1[1]
    int32_t edx_1 = arg1[1]
    int32_t ebx = arg1[5]
    int32_t edi = arg1[3]
    int32_t esi = 0
    int32_t ecx_2 = arg1[2]
    int32_t edi_1 = arg1[4]
    int32_t eax = *arg1
    int32_t var_8 = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t var_18 = 0
    int32_t var_40 = edx_1
    int32_t var_3c = ecx_2
    int32_t var_34 = edi_1
    int32_t var_2c = eax
    
    if (eax s<= edx_1)
        void* var_c_1 = (eax << 3) + 4
        
        do
            if (ecx_2 s<= edi)
                int16_t* ebx_3 =
                    *(*(*(arg2 + 0x1cc) + 0x18) + (eax << 2)) + (((ecx_2 << 5) + edi_1) << 1)
                int32_t edx_5 = ebx
                int32_t i_1 = edi - ecx_2 + 1
                void* esi_1 = (ecx_2 << 2) + 2
                int16_t* var_24_1 = ebx_3
                int32_t i_2 = i_1
                int32_t i
                
                do
                    if (edi_1 s<= edx_5)
                        void* ecx_3 = (edi_1 << 3) + 4
                        int32_t j_1 = edx_5 - edi_1 + 1
                        int32_t j
                        
                        do
                            uint32_t eax_4 = zx.d(*ebx_3)
                            ebx_3 = &ebx_3[1]
                            int16_t* var_38_1 = ebx_3
                            
                            if (eax_4 != 0)
                                var_10 += var_c_1 * eax_4
                                var_8 += eax_4
                                var_14 += esi_1 * eax_4
                                var_18 += ecx_3 * eax_4
                                edi_1 = var_34
                            
                            ecx_3 += 8
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        ecx_2 = var_3c
                        edx_5 = ebx
                        i_1 = i_2
                    
                    ebx_3 = &var_24_1[0x20]
                    esi_1 += 4
                    i = i_1
                    i_1 -= 1
                    var_24_1 = ebx_3
                    i_2 = i_1
                while (i != 1)
                esi = var_8
                edx_1 = var_40
                eax = var_2c
            
            var_c_1 += 8
            eax += 1
            var_2c = eax
        while (eax s<= edx_1)
    
    int32_t ecx_5 = esi s>> 1
    arg3[**(arg2 + 0x88)] = (divs.dp.d(sx.q(ecx_5 + var_10), esi)).b
    arg3[*(*(arg2 + 0x88) + 4)] = (divs.dp.d(sx.q(var_14 + ecx_5), esi)).b
    char result = (divs.dp.d(sx.q(var_18 + ecx_5), esi)).b
    arg3[*(*(arg2 + 0x88) + 8)] = result
    return result
}

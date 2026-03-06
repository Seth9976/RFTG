// 函数名称: sub_4ff6e0
// 虚拟地址: 0x4ff6e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ff6e0(void* arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    
    if (eax == 0)
        return 0
    
    int32_t result = arg2
    int32_t var_c = 0
    
    if (*(eax + 8) s> 0)
        int32_t var_8_1 = 0
        
        while (true)
            int32_t* ebx_2 = *(eax + 4) + var_8_1
            
            if (arg4 != 0)
                int32_t var_1c_1 = *ebx_2
                int32_t var_20_1 = ebx_2[1]
                sub_4c5680("              table %s pos %d")
            
            int32_t i_4 = 4
            int32_t* edx_1 = ebx_2
            int32_t result_1 = result
            int32_t i
            
            do
                result_1 = result_1 u>> 8 ^ *(((zx.d(*edx_1) ^ zx.d(result_1.b)) << 2) + &data_8c0ca0)
                edx_1 += 1
                i = i_4
                i_4 -= 1
            while (i != 1)
            char* esi_3 = ebx_2[1]
            char* ecx_2 = esi_3
            void* edi_1 = &ecx_2[1]
            
            do
                edx_1.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (edx_1.b != 0)
            
            void* i_5 = ecx_2 - edi_1
            char* edx_2 = esi_3
            
            if (ecx_2 != edi_1)
                void* i_1
                
                do
                    result_1 =
                        result_1 u>> 8 ^ *(((zx.d(*edx_2) ^ zx.d(result_1.b)) << 2) + &data_8c0ca0)
                    edx_2 = &edx_2[1]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            int32_t i_7 = 4
            void* edi_3 = &ebx_2[8]
            int32_t result_2 = sub_4ffac0(ebx_2[3], result_1, arg3, arg4)
            int32_t i_2
            
            do
                result_2 = result_2 u>> 8 ^ *(((zx.d(*edi_3) ^ zx.d(result_2.b)) << 2) + &data_8c0ca0)
                edi_3 += 1
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
            int32_t i_6 = i_7 + 4
            void* edx_5 = &ebx_2[0xa]
            int32_t i_3
            
            do
                result_2 = result_2 u>> 8 ^ *(((zx.d(*edx_5) ^ zx.d(result_2.b)) << 2) + &data_8c0ca0)
                edx_5 += 1
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            char ecx_7 = (ebx_2[0xa]).b
            result = result_2
            
            if ((ecx_7 & 3) != 0)
                result = sub_4ff660(result_2, edx_5, ebx_2[7])
            else if ((ecx_7 & 0x20) != 0)
                result = sub_4ff6e0(ebx_2[7], result_2, arg3, arg4.d)
            
            var_8_1 += 0x3c
            int32_t eax_9 = var_c + 1
            var_c = eax_9
            
            if (eax_9 s>= *(arg1 + 8))
                break
            
            eax = arg1
    
    return result
}

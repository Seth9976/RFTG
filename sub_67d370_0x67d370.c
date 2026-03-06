// 函数名称: sub_67d370
// 虚拟地址: 0x67d370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d370(void* arg1)
{
    // 第一条实际指令: void* result_1 = arg1
    void* result_1 = arg1
    int32_t eax = *(result_1 + 0x13c)
    int32_t ecx = 0
    void* edi = *(result_1 + 0x1a8)
    void* result = *(result_1 + 0xd8)
    void* var_18 = edi
    int32_t var_8 = 0
    
    if (*(result_1 + 0x24) s> 0)
        int32_t* edx_1 = result + 0xc
        int32_t* var_c_1 = edx_1
        
        while (true)
            int32_t i_5 = divs.dp.d(sx.q(edx_1[6] * *edx_1), *(result_1 + 0x13c))
            int32_t* eax_5 = *(*(edi + 0x38) + (ecx << 2))
            int32_t i_6 = (eax + 2) * i_5
            int32_t* edx_5 = *(*(edi + 0x3c) + (ecx << 2))
            int32_t eax_6 = *(edi + (ecx << 2) + 8)
            
            if (i_6 s> 0)
                int32_t* ecx_1 = edx_5
                int32_t i_3 = i_6
                int32_t i
                
                do
                    int32_t edi_5 = *(eax_6 - edx_5 + ecx_1)
                    *ecx_1 = edi_5
                    *(eax_5 - edx_5 + ecx_1) = edi_5
                    ecx_1 = &ecx_1[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                ecx = var_8
                edi = var_18
            
            if (i_5 * 2 s> 0)
                int32_t* esi_7 = &edx_5[i_5 * eax]
                int32_t* ecx_5 = eax_6 + (((eax - 2) * i_5) << 2)
                int32_t i_4 = i_5 * 2
                int32_t i_1
                
                do
                    *(edx_5 - eax_6 + ecx_5) = *(esi_7 + eax_6 - edx_5)
                    *esi_7 = *ecx_5
                    ecx_5 = &ecx_5[1]
                    esi_7 = &esi_7[1]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                ecx = var_8
                edi = var_18
            
            if (i_5 s> 0)
                int32_t* eax_11 = eax_5 - (i_5 << 2)
                int32_t i_2
                
                do
                    *eax_11 = *eax_5
                    eax_11 = &eax_11[1]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            result = arg1
            var_c_1 = &var_c_1[0x15]
            ecx += 1
            var_8 = ecx
            
            if (ecx s>= *(result + 0x24))
                break
            
            edx_1 = var_c_1
            result_1 = result
    
    return result
}

// 函数名称: sub_648870
// 虚拟地址: 0x648870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_648870(int32_t arg1, void* arg2, double arg3)
{
    // 第一条实际指令: int32_t* result_1 = *(arg2 + 0x1c)
    int32_t* result_1 = *(arg2 + 0x1c)
    int32_t eax_1 = sub_685f40(fconvert.t(arg3))
    int16_t top = 0
    void* edx = *(arg1 + (eax_1 << 3) + 4)
    int32_t ecx = *(arg1 + (eax_1 << 3))
    int32_t* result = *result_1
    int32_t var_10 = 2
    void* var_18 = edx
    
    if (result == result_1[1])
        var_10 = 1
    
    void* ebx = nullptr
    
    if (var_10 s> 0)
        void* const esi_1 = &data_6bca80
        void* edi = &result_1[0x88]
        arg3:4.d = ecx
        void* const var_c_1 = &data_6bca80
        void* var_8_1 = edi
        
        while (true)
            int32_t eax_2
            int32_t ecx_1
            int32_t edx_1
            eax_2, ecx_1, edx_1 = _calloc(result, edx, ecx, 1, 0xc88)
            *edi = eax_2
            int32_t* eax_3 = _calloc(eax_2, edx_1, ecx_1, 1, 0x10)
            *(edi - 0x200) = eax_3
            *eax_3 = *esi_1
            eax_3[1] = *(esi_1 + 4)
            eax_3[2] = *(esi_1 + 8)
            edx = *(esi_1 + 0xc)
            eax_3[3] = edx
            result = result_1
            
            if (ebx s>= result[2])
                result[2] = ebx + 1
            
            *(edi - 0x100) = 0
            ecx = __builtin_memcpy(*edi, arg3:4.d, 0xc88)
            
            if (ebx s>= result[3])
                edx = ebx + 1
                result[3] = edx
            
            int32_t* edi_2 = arg3:4.d
            int32_t i = 0
            
            if (*edi_2 s> 0)
                void* edi_3 = &edi_2[0x111]
                
                do
                    int32_t eax_4 = *edi_3
                    ecx, edx = sub_648430(arg2, eax_4, ebx, (eax_4 << 5) + var_18)
                    top -= 1
                    unimplemented  {call 0x648430}
                    result = arg3:4.d
                    i += 1
                    edi_3 += 4
                while (i s< *result)
            
            var_8_1 += 4
            var_c_1 += 0x10
            arg3:4.d += 0xc88
            ebx += 1
            
            if (ebx s>= var_10)
                break
            
            esi_1 = var_c_1
            edi = var_8_1
    
    return result
}

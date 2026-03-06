// 函数名称: sub_5ad3b0
// 虚拟地址: 0x5ad3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5ad3b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax = __fileno(arg1)
    int32_t eax_1 = arg1[3]
    
    if ((eax_1.b & 0x82) != 0)
        if ((eax_1.b & 0x40) == 0)
            if ((eax_1.b & 1) != 0)
                arg1[1] = 0
                
                if ((eax_1.b & 0x10) == 0)
                    arg1[3] = eax_1 | 0x20
                    return 0xffffffff
                
                *arg1 = arg1[2]
                arg1[3] = eax_1 & 0xfffffffe
            
            int32_t eax_7 = (arg1[3] & 0xffffffef) | 2
            arg1[3] = eax_7
            arg1[1] = 0
            void* var_8_1 = nullptr
            
            if ((eax_7 & 0x10c) == 0)
                int32_t eax_8
                
                if (arg1 == &data_8b80b0 || arg1 == &data_8b80d0)
                    eax_8 = sub_5b8cf1(eax)
                
                if ((arg1 != &data_8b80b0 && arg1 != &data_8b80d0) || eax_8 == 0)
                    sub_5b8ca8(arg1)
            
            int32_t edi
            int32_t var_14_3 = edi
            uint32_t result
            int32_t arg_4
            uint32_t edi_2
            
            if ((arg1[3] & 0x108) == 0)
                edi_2 = 1
                var_8_1 = sub_5b03d0(eax, &arg_4, 1)
            label_5ad4f9:
                
                if (var_8_1 == edi_2)
                    result = zx.d(arg_4.b)
                else
                    arg1[3] |= 0x20
                    result = 0xffffffff
            else
                char* eax_9 = arg1[2]
                int32_t edi_1 = *arg1
                *arg1 = &eax_9[1]
                edi_2 = edi_1 - eax_9
                arg1[1] = arg1[6] - 1
                int32_t* ecx_8
                
                if (edi_2 s> 0)
                    void* eax_10
                    eax_10, ecx_8 = sub_5b03d0(eax, eax_9, edi_2)
                    var_8_1 = eax_10
                label_5ad4dc:
                    ecx_8.b = arg_4.b
                    *arg1[2] = ecx_8.b
                    goto label_5ad4f9
                
                void* eax_15
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    eax_15 = &data_8b8ea8
                else
                    eax_15 = ((eax & 0x1f) << 6) + (&data_3166ee0)[eax s>> 5]
                
                if ((*(eax_15 + 4) & 0x20) == 0)
                    goto label_5ad4dc
                
                uint32_t eax_16
                int32_t edx_3
                eax_16, ecx_8, edx_3 = sub_5b5eb4(eax, 0, 0, FILE_END)
                
                if ((eax_16 & edx_3) != 0xffffffff)
                    goto label_5ad4dc
                
                arg1[3] |= 0x20
                result = 0xffffffff
            return result
        
        *__errno() = 0x22
    else
        *__errno() = 9
    
    arg1[3] |= 0x20
    return 0xffffffff
}

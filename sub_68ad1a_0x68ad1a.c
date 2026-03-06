// 函数名称: sub_68ad1a
// 虚拟地址: 0x68ad1a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_68ad1a(int32_t arg1, int32_t arg2, void* arg3, int16_t arg4, int32_t* arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t* eax = __fileno(arg5)
    int32_t eax_1 = arg5[3]
    
    if ((eax_1.b & 0x82) == 0)
        *__errno() = 9
        arg5[3] |= 0x20
    else if ((eax_1.b & 0x40) == 0)
        if ((eax_1.b & 1) == 0)
            goto label_68ad7a
        
        arg5[1] = 0
        
        if ((eax_1.b & 0x10) != 0)
            *arg5 = arg5[2]
            arg5[3] = eax_1 & 0xfffffffe
        label_68ad7a:
            int32_t eax_5 = arg5[3]
            arg5[1] = 0
            var_8 = nullptr
            int32_t eax_7 = (eax_5 & 0xffffffef) | 2
            arg5[3] = eax_7
            
            if ((eax_7 & 0x10c) == 0)
                int32_t eax_8
                
                if (arg5 == &data_8b80b0 || arg5 == &data_8b80d0)
                    eax_8 = sub_5b8cf1(eax)
                
                if ((arg5 != &data_8b80b0 && arg5 != &data_8b80d0) || eax_8 == 0)
                    sub_5b8ca8(arg5)
            
            int32_t edi
            int32_t var_14_3 = edi
            uint32_t result
            int16_t result_1
            uint32_t edi_2
            
            if ((arg5[3] & 0x108) == 0)
                edi_2 = 2
                result_1 = arg4
                var_8.w = result_1
                var_8 = sub_5b03d0(eax, &var_8, 2)
            label_68ae72:
                
                if (var_8 == edi_2)
                    result = zx.d(result_1)
                else
                    arg5[3] |= 0x20
                    result = 0xffff
            else
                char* eax_9 = arg5[2]
                int32_t edi_1 = *arg5
                *arg5 = &eax_9[2]
                edi_2 = edi_1 - eax_9
                arg5[1] = arg5[6] - 2
                
                if (edi_2 s> 0)
                    var_8 = sub_5b03d0(eax, eax_9, edi_2)
                label_68ae4d:
                    result_1 = arg4
                    *arg5[2] = result_1
                    goto label_68ae72
                
                void* eax_15
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    eax_15 = &data_8b8ea8
                else
                    eax_15 = ((eax & 0x1f) << 6) + (&data_3166ee0)[eax s>> 5]
                
                if ((*(eax_15 + 4) & 0x20) == 0)
                    goto label_68ae4d
                
                uint32_t eax_16
                int32_t edx_2
                eax_16, edx_2 = sub_5b5eb4(eax, 0, 0, FILE_END)
                
                if ((eax_16 & edx_2) != 0xffffffff)
                    goto label_68ae4d
                
                arg5[3] |= 0x20
                result = 0xffff
            return result
        
        arg5[3] = eax_1 | 0x20
    else
        *__errno() = 0x22
        arg5[3] |= 0x20
    
    return 0xffff
}

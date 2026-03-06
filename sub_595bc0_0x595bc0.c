// 函数名称: sub_595bc0
// 虚拟地址: 0x595bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_595bc0(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg3 == arg2)
    if (arg3 == arg2)
        return arg4
    
    int32_t eax_2 = arg3 * arg5
    void* eax_4 = sub_5a881a(eax_2 * arg1)
    void* var_20 = eax_4
    
    if (eax_4 == 0)
        __free_base(arg4)
        data_273ac1c = "outofmem"
        return 0
    
    if (arg1 s> 0)
        char* ecx = arg4
        int32_t edx = arg3 + (arg2 << 3) - 0xa
        int32_t edi_1 = arg5
        int32_t esi_1 = arg2 * edi_1
        int32_t var_10_1 = arg1
        int32_t var_14_1 = edx
        void* var_c_1 = eax_4
        char* var_8_1 = ecx
        int32_t ebx
        ebx.b = 0xff
        
        while (true)
            uint32_t edx_1
            
            switch (edx)
                case 0
                    int32_t esi_2 = edi_1 - 1
                    
                    if (esi_2 s>= 0)
                        int32_t temp1_1
                        
                        do
                            edx_1.b = *ecx
                            *eax_4 = edx_1.b
                            *(eax_4 + 1) = ebx.b
                            ecx = &ecx[1]
                            eax_4 += 2
                            temp1_1 = esi_2
                            esi_2 -= 1
                        while (temp1_1 - 1 s>= 0)
                case 1
                    int32_t esi_3 = edi_1 - 1
                    
                    if (esi_3 s>= 0)
                        int32_t temp2_1
                        
                        do
                            edx_1.b = *ecx
                            *(eax_4 + 2) = edx_1.b
                            *(eax_4 + 1) = edx_1.b
                            *eax_4 = edx_1.b
                            ecx = &ecx[1]
                            eax_4 += 3
                            temp2_1 = esi_3
                            esi_3 -= 1
                        while (temp2_1 - 1 s>= 0)
                case 2
                    int32_t esi_4 = edi_1 - 1
                    
                    if (esi_4 s>= 0)
                        int32_t temp3_1
                        
                        do
                            edx_1.b = *ecx
                            *(eax_4 + 2) = edx_1.b
                            *(eax_4 + 1) = edx_1.b
                            *eax_4 = edx_1.b
                            *(eax_4 + 3) = ebx.b
                            ecx = &ecx[1]
                            eax_4 += 4
                            temp3_1 = esi_4
                            esi_4 -= 1
                        while (temp3_1 - 1 s>= 0)
                case 7
                    int32_t esi_5 = edi_1 - 1
                    
                    if (esi_5 s>= 0)
                        int32_t temp4_1
                        
                        do
                            edx_1.b = *ecx
                            *eax_4 = edx_1.b
                            ecx = &ecx[2]
                            eax_4 += 1
                            temp4_1 = esi_5
                            esi_5 -= 1
                        while (temp4_1 - 1 s>= 0)
                case 9
                    int32_t esi_6 = edi_1 - 1
                    
                    if (esi_6 s>= 0)
                        int32_t temp5_1
                        
                        do
                            edx_1.b = *ecx
                            *(eax_4 + 2) = edx_1.b
                            *(eax_4 + 1) = edx_1.b
                            *eax_4 = edx_1.b
                            ecx = &ecx[2]
                            eax_4 += 3
                            temp5_1 = esi_6
                            esi_6 -= 1
                        while (temp5_1 - 1 s>= 0)
                case 0xa
                    int32_t esi_7 = edi_1 - 1
                    
                    if (esi_7 s>= 0)
                        int32_t temp6_1
                        
                        do
                            edx_1.b = *ecx
                            *(eax_4 + 2) = edx_1.b
                            *(eax_4 + 1) = edx_1.b
                            *eax_4 = edx_1.b
                            *(eax_4 + 3) = ecx[1]
                            ecx = &ecx[2]
                            eax_4 += 4
                            temp6_1 = esi_7
                            esi_7 -= 1
                        while (temp6_1 - 1 s>= 0)
                case 0xf
                    int32_t esi_9 = edi_1 - 1
                    
                    if (esi_9 s>= 0)
                        int32_t temp8_1
                        
                        do
                            *eax_4 = ((zx.d(ecx[1]) * 0x96 + zx.d(ecx[2]) * 0x1d + zx.d(*ecx) * 0x4d)
                                s>> 8).b
                            ecx = &ecx[3]
                            eax_4 += 1
                            temp8_1 = esi_9
                            esi_9 -= 1
                        while (temp8_1 - 1 s>= 0)
                        edi_1 = arg5
                case 0x10
                    int32_t esi_10 = edi_1 - 1
                    
                    if (esi_10 s>= 0)
                        int32_t temp9_1
                        
                        do
                            *eax_4 = ((zx.d(ecx[1]) * 0x96 + zx.d(ecx[2]) * 0x1d + zx.d(*ecx) * 0x4d)
                                s>> 8).b
                            *(eax_4 + 1) = ebx.b
                            ecx = &ecx[3]
                            eax_4 += 2
                            temp9_1 = esi_10
                            esi_10 -= 1
                        while (temp9_1 - 1 s>= 0)
                        edi_1 = arg5
                case 0x12
                    int32_t esi_8 = edi_1 - 1
                    
                    if (esi_8 s>= 0)
                        int32_t temp7_1
                        
                        do
                            *eax_4 = *ecx
                            *(eax_4 + 1) = ecx[1]
                            *(eax_4 + 2) = ecx[2]
                            *(eax_4 + 3) = ebx.b
                            ecx = &ecx[3]
                            eax_4 += 4
                            temp7_1 = esi_8
                            esi_8 -= 1
                        while (temp7_1 - 1 s>= 0)
                case 0x17
                    int32_t esi_11 = edi_1 - 1
                    
                    if (esi_11 s>= 0)
                        int32_t temp10_1
                        
                        do
                            *eax_4 = ((zx.d(ecx[1]) * 0x96 + zx.d(ecx[2]) * 0x1d + zx.d(*ecx) * 0x4d)
                                s>> 8).b
                            ecx = &ecx[4]
                            eax_4 += 1
                            temp10_1 = esi_11
                            esi_11 -= 1
                        while (temp10_1 - 1 s>= 0)
                        edi_1 = arg5
                case 0x18
                    int32_t esi_12 = edi_1 - 1
                    
                    if (esi_12 s>= 0)
                        int32_t temp11_1
                        
                        do
                            *eax_4 = ((zx.d(ecx[1]) * 0x96 + zx.d(ecx[2]) * 0x1d + zx.d(*ecx) * 0x4d)
                                s>> 8).b
                            *(eax_4 + 1) = ecx[3]
                            ecx = &ecx[4]
                            eax_4 += 2
                            temp11_1 = esi_12
                            esi_12 -= 1
                        while (temp11_1 - 1 s>= 0)
                        edi_1 = arg5
                case 0x19
                    int32_t esi_13 = edi_1 - 1
                    
                    if (esi_13 s>= 0)
                        int32_t temp12_1
                        
                        do
                            *eax_4 = *ecx
                            *(eax_4 + 1) = ecx[1]
                            *(eax_4 + 2) = ecx[2]
                            ecx = &ecx[4]
                            eax_4 += 3
                            temp12_1 = esi_13
                            esi_13 -= 1
                        while (temp12_1 - 1 s>= 0)
            
            ecx = &var_8_1[esi_1]
            eax_4 = var_c_1 + eax_2
            int32_t temp0_1 = var_10_1
            var_10_1 -= 1
            var_8_1 = ecx
            var_c_1 = eax_4
            
            if (temp0_1 == 1)
                break
            
            edx = var_14_1
    
    __free_base(arg4)
    return var_20
}

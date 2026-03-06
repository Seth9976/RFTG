// 函数名称: sub_506480
// 虚拟地址: 0x506480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_506480(char* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691fb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float ebx
    float var_30 = ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (esi[0x14].b == 0)
        int32_t* i_2 = nullptr
        long double x87_r7_2 = fconvert.t(data_8c4d34) + fconvert.t(esi[2])
    label_5064c0:
        esi[2] = fconvert.s(x87_r7_2)
    label_5064c6:
        int32_t* i
        
        if (i_2 != 0)
            i = i_2[8]
        else
            i = *data_27e7fdc
        
        while (i != 0)
            int32_t* i_1 = i
            i = i[8]
            
            if (i_1[7].b == 0)
                float edx_2 = i_1[4]
                ebx = i_1[5]
                arg1.b = 0
                i_2 = i_1
                char var_11_1 = 0
                float var_28_1 = edx_2
                float var_24_1 = ebx
                
                if (arg2 != 0)
                    edx_2 = *arg3
                    ebx = arg3[1]
                    var_28_1 = edx_2
                    var_24_1 = ebx
                
                long double x87_r7_3 = fconvert.t(var_28_1)
                long double x87_r6_1 = fconvert.t(esi[4])
                x87_r6_1 - x87_r7_3
                i.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    long double x87_r6_3 = fconvert.t(esi[6]) + fconvert.t(esi[4])
                    x87_r6_3 - x87_r7_3
                    i.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                    
                    if ((i:1.b & 0x41) == 0)
                        x87_r7_3 = fconvert.t(var_24_1)
                        long double x87_r6_4 = fconvert.t(esi[5])
                        x87_r6_4 - x87_r7_3
                        i.w = (x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_2))
                            long double x87_r6_6 = fconvert.t(esi[7]) + fconvert.t(esi[5])
                            x87_r6_6 - x87_r7_3
                            i.w = (x87_r6_6 < x87_r7_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_6, x87_r7_3) ? 1 : 0) << 0xa
                                | (x87_r6_6 == x87_r7_3 ? 1 : 0) << 0xe
                            
                            if ((i:1.b & 0x41) == 0)
                                var_11_1 = 1
                                arg1.b = 1
                
                int32_t eax_6 = *i_1
                
                if (eax_6 != 3 || arg1.b == 0)
                    if (eax_6 == 4)
                        *(esi + 0x52) = 0
                        goto label_5064c6
                    
                    if (eax_6 == 1)
                        arg1 = i_1[1]
                        
                        if (arg1 == 0x56 && i_1[2] == 2 && *(esi + 0x51) != 0)
                            char* const var_18 = &data_83f3d3
                            int32_t var_8_1 = 0
                            
                            if (sub_4c63c0(&var_18) != 0)
                                sub_506300(&var_18, esi)
                            
                            i_1[7].b = 1
                            int32_t var_8_2 = 0xffffffff
                            sub_4c43d0(&var_18)
                            goto label_5064c6
                        
                        if (arg1 == 0x43 && i_1[2] == 2 && *(esi + 0x51) != 0)
                            float var_1c
                            sub_506400(&var_1c, edx_2, esi)
                            
                            if (sub_4c44c0(&var_1c) != 0)
                                sub_4c6360()
                            
                            i_1[7].b = 1
                            sub_4c43d0(&var_1c)
                            goto label_5064c6
                        
                        arg1.b = var_11_1
                    
                    if (eax_6 == 0 && *(esi + 0x51) != eax_6.b && *(esi + 0x52) == eax_6.b)
                        int32_t eax_13 = i_1[2]
                        
                        if (eax_13 != 0 && eax_13 != 1)
                            goto label_5064c6
                        
                        sub_505e40(arg1, esi, i_1[1])
                        i_1[7].b = 1
                        goto label_5064c6
                    
                    if (eax_6 == 1 && *(esi + 0x51) != 0 && *(esi + 0x52) == 0)
                        if (sub_506130(i_1[1], edx_2, i_1[2]) == 0)
                            goto label_5064c6
                        
                        i_1[7].b = 1
                        goto label_5064c6
                    
                    if (eax_6 != 0x11 || i_1[1] != 0x100000 || arg1.b == 0)
                        if (eax_6 == 0x10 && i_1[1] == 0x100000)
                            *(esi + 0x52) = 0
                            goto label_5064c6
                        
                        if (eax_6 != 0xc || i_1[1] != 0x1000 || arg1.b == 0)
                            if (eax_6 == 0xb && i_1[1] == 0x1000)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 == 0xd && i_1[1] == 0x10 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0xe && i_1[1] == 0x10)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 == 0x15 && i_1[1] == 0x100 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0x13 && i_1[1] == 1 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0x14 && i_1[1] == 0x100)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 == 0x12 && i_1[1] == 1)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 == 0x15 && i_1[1] == 0x1000 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0x13 && i_1[1] == 0x10 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0x17 && i_1[1] == 1 && arg1.b != 0)
                                sub_505b50(esi, edx_2, ebx)
                                goto label_5064c6
                            
                            if (eax_6 == 0x16 && i_1[1] == 1)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 == 0x14 && i_1[1] == 0x1000)
                                *(esi + 0x52) = 0
                                goto label_5064c6
                            
                            if (eax_6 != 0x12)
                                goto label_5064c6
                            
                            if (i_1[1] != 0x10)
                                goto label_5064c6
                            
                            *(esi + 0x52) = 0
                            goto label_5064c6
                
                float var_40_5 = ebx
                *(esi + 0x52) = 1
                int32_t eax_17
                long double st0_1
                st0_1, eax_17, arg1 = sub_505940(esi, edx_2)
                x87_r7_2 = float.t(0)
                esi[1] = eax_17
                esi[3] = eax_17
                goto label_5064c0
        
        if (*(esi + 0x52) != 0 && arg2 != 0)
            sub_505b80(esi, *arg3, arg3[1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
}

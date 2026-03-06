// 函数名称: sub_5bfd40
// 虚拟地址: 0x5bfd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5bfd40(int32_t* arg1, int32_t* arg2, char* arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_1
    eax_1.b = arg4
    char* edi = arg3
    bool var_39 = edi != 0
    int32_t ebx = sx.d(eax_1.b)
    int32_t ebx_1 = neg.d(ebx)
    int32_t* var_44 = arg2
    char var_3a = eax_1.b
    
    if (edi == 0)
        void var_38
        edi = sub_5c0f50(arg2, (sbb.d(ebx_1, ebx_1, ebx != 0) & 0xfffffff0) + 0x2e, 0, &var_38, arg5)
        
        if (edi != 0)
        label_5bfdce:
            void* const ebx_5 = &data_6b2860
            
            if (var_3a == 0)
                ebx_5 = &data_6b2858
            
            int32_t* var_70_7
            int32_t var_6c_4
            char* var_68_7
            
            if (*sub_5c0c80(edi, 4, 0) != *ebx_5)
                var_68_7 = nullptr
                var_6c_4 = 0x13
            label_5c0259:
                var_70_7 = arg5
            label_5c025a:
                zip_error_set(var_70_7, var_6c_4, var_68_7)
            label_5c0262:
                
                if (var_39 == 0)
                    sub_5c0c20(edi)
            else
                sub_5bf810(arg1)
                
                if (var_3a != 0)
                    *(arg1 + 6) = 0
                else
                    *(arg1 + 6) = sub_5c0cd0(edi)
                
                arg1[2].w = sub_5c0cd0(edi)
                *(arg1 + 0xa) = sub_5c0cd0(edi)
                arg1[3] = zx.d(sub_5c0cd0(edi))
                int32_t eax_14
                int32_t edx_3
                eax_14, edx_3 = sub_5bfa70(sub_5c0cd0(edi), sub_5c0cd0(edi))
                arg1[4] = eax_14
                arg1[5] = edx_3
                arg1[6] = sub_5c0d30(edi)
                arg1[8] = sub_5c0d30(edi)
                arg1[9] = 0
                arg1[0xa] = sub_5c0d30(edi)
                arg1[0xb] = 0
                uint32_t ebx_7 = zx.d(sub_5c0cd0(edi))
                int16_t eax_19 = sub_5c0cd0(edi)
                int16_t var_4c_1
                uint32_t eax_21
                
                if (var_3a == 0)
                    var_4c_1 = sub_5c0cd0(edi)
                    arg1[0xf] = zx.d(sub_5c0cd0(edi))
                    arg1[0x10].w = sub_5c0cd0(edi)
                    arg1[0x11] = sub_5c0d30(edi)
                    eax_21 = sub_5c0d30(edi)
                    arg1[0x13] = 0
                else
                    eax_21 = 0
                    var_4c_1 = 0
                    arg1[0xf] = 0
                    arg1[0x10].w = 0
                    arg1[0x11] = 0
                    arg1[0x13] = 0
                
                arg1[0x12] = eax_21
                
                if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(edi) == 0)
                    var_68_7 = nullptr
                    var_6c_4 = 0x14
                    goto label_5c0259
                
                uint32_t ecx_1 = zx.d(eax_19)
                arg1[0xc] = 0
                arg1[0xd] = 0
                arg1[0xe] = 0
                uint32_t eax_30 = zx.d(var_4c_1) + ecx_1 + ebx_7
                
                if (var_39 == 0)
                    sub_5c0c20(edi)
                    edi = sub_5c0f50(var_44, eax_30, 0, 0, arg5)
                    
                    if (edi != 0)
                    label_5bff74:
                        
                        if (ebx_7.w != 0)
                            int32_t* eax_35 = sub_5c2190(edi, var_44, ebx_7.w, 1, arg5)
                            arg1[0xc] = eax_35
                            
                            if (eax_35 == 0)
                                if (zip_error_code_zip(arg5) != 0x11)
                                    goto label_5c0262
                                
                                var_68_7 = nullptr
                                var_6c_4 = 0x15
                                var_70_7 = arg5
                                goto label_5c025a
                            
                            if ((*(arg1 + 0xa) & 0x800) == 0)
                                goto label_5bffdb
                            
                            if (sub_5c3620(eax_35, 2) == 5)
                                var_68_7 = nullptr
                                var_6c_4 = 0x15
                                var_70_7 = arg5
                                goto label_5c025a
                        
                    label_5bffdb:
                        int32_t* ebx_9
                        
                        if (eax_19 != 0)
                            char* eax_39 = sub_5c20b0(edi, var_44, ecx_1, 0, arg5)
                            
                            if (eax_39 == 0)
                                goto label_5c0262
                            
                            int32_t ecx_5 = sx.d(var_3a)
                            int32_t ecx_6 = neg.d(ecx_5)
                            int32_t eax_41 = sub_5c1630(eax_39, eax_19, 
                                (sbb.d(ecx_6, ecx_6, ecx_5 != 0) & 0xffffff00) + 0x200, arg5)
                            arg1[0xd] = eax_41
                            
                            if (eax_41 == 0)
                                __free_base(eax_39)
                                goto label_5c0262
                            
                            __free_base(eax_39)
                            ebx_9 = arg5
                            
                            if (var_3a != 0)
                                arg1[1].b = 1
                            
                            goto label_5c005b
                        
                        ebx_9 = arg5
                    label_5c005b:
                        
                        if (var_4c_1 != 0)
                            int32_t* eax_44 = sub_5c2190(edi, var_44, var_4c_1, 0, ebx_9)
                            arg1[0xe] = eax_44
                            
                            if (eax_44 == 0)
                                goto label_5c0262
                            
                            if ((*(arg1 + 0xa) & 0x800) == 0)
                                goto label_5c00ab
                            
                            if (sub_5c3620(eax_44, 2) != 5)
                                goto label_5c00ab
                            
                            var_68_7 = nullptr
                            var_6c_4 = 0x15
                            var_70_7 = ebx_9
                            goto label_5c025a
                        
                    label_5c00ab:
                        int32_t* eax_46 = sub_5bf890(0x7075, arg1, arg1[0xc])
                        int32_t* ecx_11 = arg1[0xe]
                        arg1[0xc] = eax_46
                        arg1[0xe] = sub_5bf890(0x6375, arg1, ecx_11)
                        
                        if ((arg1[0xa] != 0xffffffff || arg1[0xb] != 0)
                                && (arg1[8] != 0xffffffff || arg1[9] != 0)
                                && (arg1[0x12] != 0xffffffff || arg1[0x13] != 0))
                            goto label_5c01e8
                        
                        int32_t edx_13 = sx.d(var_3a)
                        int32_t edx_14 = neg.d(edx_13)
                        int32_t eax_48 = sub_5c1430(arg1[0xd], &var_44, 1, 0, 
                            (sbb.d(edx_14, edx_14, edx_13 != 0) & 0xffffff00) + 0x200, ebx_9)
                        
                        if (eax_48 == 0)
                            goto label_5c0262
                        
                        uint32_t eax_50
                        int32_t edx_18
                        edx_18:eax_50 = sx.q(zx.d(var_44.w))
                        char* eax_51 = sub_5c0ee0(eax_48, eax_50, edx_18)
                        
                        if (eax_51 == 0)
                            var_68_7 = eax_51
                            var_6c_4 = 0xe
                            var_70_7 = arg5
                            goto label_5c025a
                        
                        if (arg1[0xa] == 0xffffffff && arg1[0xb] == 0)
                            int32_t eax_52
                            int32_t edx_20
                            eax_52, edx_20 = sub_5c0da0(eax_51)
                            arg1[0xa] = eax_52
                            arg1[0xb] = edx_20
                        
                        if (arg1[8] == 0xffffffff && arg1[9] == 0)
                            int32_t eax_53
                            int32_t edx_21
                            eax_53, edx_21 = sub_5c0da0(eax_51)
                            arg1[8] = eax_53
                            arg1[9] = edx_21
                        
                        if (var_3a == 0)
                            if (arg1[0x12] == 0xffffffff && arg1[0x13] == 0)
                                int32_t eax_54
                                int32_t edx_22
                                eax_54, edx_22 = sub_5c0da0(eax_51)
                                arg1[0x12] = eax_54
                                arg1[0x13] = edx_22
                            
                            if (arg1[0xf] == 0xffff)
                                arg1[0xf] = sub_5c0d30(edi)
                        
                        if (sub_5c0c50(eax_51) == 0)
                            zip_error_set(arg5, 0x15, 0)
                            sub_5c0c20(eax_51)
                            goto label_5c0262
                        
                        sub_5c0c20(eax_51)
                        ebx_9 = arg5
                    label_5c01e8:
                        
                        if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(edi) == 0)
                            var_68_7 = nullptr
                            var_6c_4 = 0x14
                            var_70_7 = ebx_9
                            goto label_5c025a
                        
                        if (var_39 == 0)
                            sub_5c0c20(edi)
                        
                        int32_t temp3_1 = arg1[0x13]
                        
                        if (temp3_1 u< 0x7fffffff)
                        label_5c0236:
                            arg1[0xd] = sub_5c17b0(arg1[0xd])
                            sub_5a6aba(var_8 ^ &__saved_ebp)
                            return eax_30 + (sbb.d(ebx_1, ebx_1, ebx != 0) & 0xfffffff0) + 0x2e
                        
                        if (temp3_1 u<= 0x7fffffff && arg1[0x12] u<= 0xffffffff)
                            goto label_5c0236
                        
                        zip_error_set(ebx_9, 4, 0x1b)
                else
                    int32_t eax_31
                    int32_t edx_5
                    eax_31, edx_5 = sub_5c0ec0(edi)
                    
                    if (edx_5 u> 0 || (edx_5 u>= 0 && eax_31 u>= eax_30))
                        goto label_5bff74
                    
                    zip_error_set(arg5, 0x15, 0)
    else
        int32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_5c0ec0(edi)
        
        if (edx_1 u> 0
                || (edx_1 u>= 0 && eax_2 u>= (sbb.d(ebx_1, ebx_1, ebx != 0) & 0xfffffff0) + 0x2e))
            goto label_5bfdce
        
        zip_error_set(arg5, 0x13, 0)
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return 0xffffffff
}

// 函数名称: sub_496560
// 虚拟地址: 0x496560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_496560(int32_t arg1 @ edi, int128_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: char* ecx
    char* ecx
    char edx
    ecx, edx = __chkstk(0x3dbc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    data_c021ec += 1
    char* edi = ecx
    char* var_3da8 = edi
    int32_t var_3dbc = 0xffffffff
    int128_t* eax_2
    int128_t* entry_ebx
    
    if (*(entry_ebx + 0x18) == 0)
        eax_2, edx = sub_5abfc0(&data_2609940, 0, 0x40000)
        data_27e7a98 = 0
    
    eax_2.b = *(entry_ebx + 0x18)
    
    if (eax_2.b == 0)
    label_49661b:
        
        if (arg3 != 0)
            char* var_10_3 = edi
            void var_3da0
            void* edx_3 = sub_48bb40(entry_ebx, &var_3da0, edx)
            
            if (arg6 == 0)
                char* i = nullptr
                
                if (*(entry_ebx + 0x458) s> 0)
                    edx_3 = &entry_ebx[6]
                    void var_3ced
                    void* var_3da4_1 = &var_3ced
                    void* var_3db4_1 = edx_3
                    
                    do
                        if (i != var_3da8)
                            void* eax_7
                            int32_t esi_2
                            
                            if (*(entry_ebx + 0x18) == 0)
                                long double st0_2
                                st0_2, eax_7 = sub_495ea0(&var_3da0, i, arg4)
                                edx_3 = var_3da4_1
                                esi_2 = eax_7
                                *(edx_3 - 0x53) = esi_2.w
                            else
                                eax_7 = var_3db4_1
                                esi_2 = sx.d(*eax_7)
                            
                            if (esi_2 != 0xffffffff)
                                void* eax_8 = sub_49f030(eax_7, esi_2, &var_3da0, i, 0)
                                
                                if (arg4 != 2)
                                    edx_3 = sub_4a5400(&var_3da0, arg5, i, &var_3da0, esi_2, 0, 0)
                                else
                                    edx_3 = sub_4a00b0(eax_8, i, &var_3da0, esi_2)
                            else if (arg4 != 2)
                                edx_3 = var_3da4_1
                                *(edx_3 + 1) = 1
                            else
                                *var_3da4_1 = 1
                        
                        var_3db4_1 += 0xb4
                        var_3da4_1 += 0xb4
                        i = &i[1]
                    while (i s< sx.d(*(entry_ebx + 0x458)))
                
                edi = var_3da8
            
            char* var_10_8 = edi
            void var_1ed8
            int32_t edx_8 = sub_48bb40(&var_3da0, &var_1ed8, edx_3.b)
            
            if (arg4 == 3)
                int32_t eax_13
                eax_13, edx_8 = sub_4a43c0(edi, 0)
                
                if (eax_13 != 0)
                    int32_t i_1 = sub_4a5400(eax_13, arg5, edi, &var_1ed8, 0xffffffff, 0, 0)
                    
                    do
                        i_1 = sub_4a5e70(i_1, edi, &var_1ed8, 0xffffffff)
                    while (i_1 != 0)
                    
                    edx_8 = sub_4a79a0(&var_1ed8)
                
                goto label_4967a3
            
            int32_t var_3da4_2
            int32_t esi_5
            
            if (arg4 != 2)
            label_4967a3:
                int32_t eax_15 = edi * 0xb4
                var_3da4_2 = eax_15
                var_1e24
                *(&var_1e24 + eax_15) = 1
                esi_5 = eax_15
            else
                esi_5 = edi * 0xb4
                var_3da4_2 = esi_5
                char var_1e25[0x1e09]
                var_1e25[esi_5] = 1
            
            int32_t var_10_12 = 0
            int32_t eax_17
            char edx_11
            eax_17, edx_11 = sub_48bc70(&var_1ed8, edx_8)
            int128_t* edx_12
            long double st0_3
            st0_3, edx_12 = sub_4904a0(eax_17, edx_11, &var_1ed8, edi)
            double var_3db8 = fconvert.d(st0_3)
            int32_t edi_3 = 0
            
            if (arg3 s> 0)
                do
                    int32_t eax_18 = sx.d(entry_ebx[0x1ec].b)
                    
                    if (eax_18 s< 0)
                    label_496857:
                        char* var_10_14 = var_3da8
                        sub_48bb40(&var_3da0, &var_1ed8, edx_12.b)
                        char var_10_15 = 0
                        void var_1e78
                        *(&var_1e78 + var_3da4_2) = *(arg2 + (edi_3 << 2))
                        void* eax_23 = sub_49f030(var_3da4_2, *(arg2 + (edi_3 << 2)), &var_1ed8, 
                            var_3da8, var_10_15)
                        int32_t edx_18
                        
                        if (arg4 != 2)
                            int32_t eax_24 = *(arg2 + (edi_3 << 2))
                            int32_t i_2 = sub_4a5400(eax_24, arg5, var_3da8, &var_1ed8, eax_24, 0, 0)
                            int32_t esi_9 = *(arg2 + (edi_3 << 2))
                            
                            do
                                i_2, edx_18 = sub_4a5e70(i_2, var_3da8, &var_1ed8, esi_9)
                            while (i_2 != 0)
                        else
                            edx_18 = sub_4a00b0(eax_23, var_3da8, &var_1ed8, *(arg2 + (edi_3 << 2)))
                        
                        int32_t var_10_19 = 0
                        int32_t eax_27
                        long double st0_4
                        st0_4, eax_27, edx_12 =
                            sub_4904a0(sub_48bc70(&var_1ed8, edx_18), var_3da8.b, &var_1ed8, var_3da8)
                        long double x87_r6_2 = fconvert.t(var_3db8) - fconvert.t(9.9999999999999995e-07)
                        esi_5 = var_3da4_2
                        x87_r6_2 - st0_4
                        eax_27.w = (x87_r6_2 < st0_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, st0_4) ? 1 : 0) << 0xa
                            | (x87_r6_2 == st0_4 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            var_3db8 = fconvert.d(st0_4)
                            var_3dbc = *(arg2 + (edi_3 << 2))
                    else
                        bool cond:2_1
                        
                        if (eax_18.b s< 0)
                            if (*(esi_5 + entry_ebx + 0x2c) == eax_18)
                                goto label_496837
                            
                            cond:2_1 = *(esi_5 + entry_ebx + 0x30) != eax_18
                            goto label_496835
                        
                        edx_12 = *(esi_5 + entry_ebx + 0x2c) & 0x7f
                        
                        if (edx_12 != eax_18)
                            cond:2_1 = (*(esi_5 + entry_ebx + 0x30) & 0x7f) != eax_18
                        label_496835:
                            
                            if (cond:2_1)
                                goto label_496857
                            
                            goto label_496837
                        
                    label_496837:
                        edx_12 = arg2
                        
                        if ((*(entry_ebx + *(edx_12 + (edi_3 << 2)) * 0x14 + 0x468) & 0x80) == 0)
                            goto label_496857
                    
                    edi_3 += 1
                while (edi_3 s< arg3)
            
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
    else
        if (sx.d(*(entry_ebx + 0x19)) != edi)
            sub_495ea0(entry_ebx, edi, arg4)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
        
        if (eax_2.b == 0 || *(sx.d(*(entry_ebx + 0x19)) * 0xb4 + entry_ebx + 0xb5) != 0)
            goto label_49661b
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}

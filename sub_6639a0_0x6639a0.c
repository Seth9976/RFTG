// 函数名称: sub_6639a0
// 虚拟地址: 0x6639a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6639a0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: if (arg2 u> 0x186a0 || arg3 s< 0 || arg3 s> 0x186a0 - arg2)
    if (arg2 u> 0x186a0 || arg3 s< 0 || arg3 s> 0x186a0 - arg2)
        return 1
    
    if (arg4 u> 0x186a0 || arg5 s< 0 || arg5 s> 0x186a0 - arg4)
        return 1
    
    if (arg6 u> 0x186a0)
        return 1
    
    if (arg7 s>= 0 && arg7 s<= 0x186a0 - arg6 && arg8 u<= 0x186a0 && arg9 s>= 0
            && arg9 s<= 0x186a0 - arg8)
        int32_t eax_5 = arg3 - arg7
        int32_t esi_1 = arg4 - arg6
        int32_t var_8
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_662c80(&var_8, esi_1, eax_5, 7)
        
        if (eax_6 == 0)
            return 2
        
        int32_t eax_8 = arg2 - arg6
        int32_t edi_2 = arg5 - arg7
        int32_t var_1c = eax_8
        int32_t var_c
        int32_t eax_9
        int80_t st0_2
        st0_2, eax_9 = sub_662c80(&var_c, edi_2, eax_8, 7)
        
        if (eax_9 == 0)
            return 2
        
        int32_t eax_11 = arg9 - arg7
        int32_t ebx_2 = var_8 - var_c
        int32_t eax_12
        int80_t st0_3
        st0_3, eax_12 = sub_662c80(&var_8, esi_1, eax_11, 7)
        
        if (eax_12 == 0)
            return 2
        
        int32_t esi_3 = arg8 - arg6
        int32_t eax_13
        int80_t st0_4
        st0_4, eax_13 = sub_662c80(&var_c, edi_2, esi_3, 7)
        
        if (eax_13 == 0)
            return 2
        
        int32_t var_10
        int32_t eax_14
        int80_t st0_5
        st0_5, eax_14 = sub_662c80(&var_10, arg9, ebx_2, var_8 - var_c)
        
        if (eax_14 != 0 && var_10 s> arg9)
            int32_t eax_15
            int80_t st0_6
            st0_6, eax_15 = sub_662c80(&var_8, eax_5, esi_3, 7)
            
            if (eax_15 == 0)
                return 2
            
            int32_t eax_17
            int80_t st0_7
            st0_7, eax_17 = sub_662c80(&var_c, var_1c, eax_11, 7)
            
            if (eax_17 == 0)
                return 2
            
            int32_t eax_21
            int80_t st0_8
            st0_8, eax_21 = sub_662c80(&var_1c, arg9, ebx_2, var_8 - var_c)
            
            if (eax_21 != 0)
                int32_t ebx_3 = var_1c
                
                if (ebx_3 s> arg9)
                    int32_t eax_22 = sub_662d00(var_10)
                    int32_t edi_6 = sub_662d00(arg9) - eax_22 - sub_662d00(ebx_3)
                    
                    if (edi_6 s> 0)
                        int32_t eax_26
                        int80_t st0_9
                        st0_9, eax_26 = sub_662c80(arg1, arg2, 0x186a0, var_10)
                        
                        if (eax_26 != 0)
                            int32_t eax_28
                            int80_t st0_10
                            st0_10, eax_28 = sub_662c80(&arg1[1], arg3, 0x186a0, var_10)
                            
                            if (eax_28 != 0)
                                int32_t eax_31
                                int80_t st0_11
                                st0_11, eax_31 =
                                    sub_662c80(&arg1[2], 0x186a0 - arg3 - arg2, 0x186a0, var_10)
                                
                                if (eax_31 != 0)
                                    int32_t eax_33
                                    int80_t st0_12
                                    st0_12, eax_33 = sub_662c80(&arg1[3], arg4, 0x186a0, ebx_3)
                                    
                                    if (eax_33 != 0)
                                        int32_t eax_34
                                        int80_t st0_13
                                        st0_13, eax_34 = sub_662c80(&arg1[4], arg5, 0x186a0, ebx_3)
                                        
                                        if (eax_34 != 0)
                                            int32_t eax_37
                                            int80_t st0_14
                                            st0_14, eax_37 = sub_662c80(&arg1[5], 
                                                0x186a0 - arg5 - arg4, 0x186a0, ebx_3)
                                            
                                            if (eax_37 != 0)
                                                int32_t eax_39
                                                int80_t st0_15
                                                st0_15, eax_39 =
                                                    sub_662c80(&arg1[6], arg6, edi_6, 0x186a0)
                                                
                                                if (eax_39 != 0)
                                                    int32_t eax_40
                                                    int80_t st0_16
                                                    st0_16, eax_40 =
                                                        sub_662c80(&arg1[7], arg7, edi_6, 0x186a0)
                                                    
                                                    if (eax_40 != 0)
                                                        int32_t eax_41
                                                        int80_t st0_17
                                                        st0_17, eax_41 = sub_662c80(&arg1[8], 
                                                            0x186a0 - arg7 - arg6, edi_6, 0x186a0)
                                                        int32_t eax_42 = neg.d(eax_41)
                                                        return sbb.d(eax_42, eax_42, eax_41 != 0) + 1
    
    return 1
}

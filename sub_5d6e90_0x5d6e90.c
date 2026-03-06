// 函数名称: sub_5d6e90
// 虚拟地址: 0x5d6e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d6e90(int32_t* arg1, char arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    if (zx.d(arg2) - 1 u<= 0xc)
        switch (arg2)
            case 1
                int32_t eax_3 = arg1[0xc]
                
                if ((eax_3.b & 4) != 0)
                    return 0
                
                int32_t* __saved_edi_1 = arg1
                arg1[0xc] = (eax_3 & 0xfffffff7) | 4
                sub_5cb650()
            case 2
                int32_t eax_6 = arg1[0xc]
                
                if ((eax_6.b & 4) == 0)
                    return 0
                
                arg1[0xc] = (eax_6 & 0xfffffffb) | 8
                sub_5cb320(arg1)
            case 4
                if ((arg3 & 0xffff0000) == 0x1fff0000 || (arg4 & 0xffff0000) == 0x1fff0000)
                    return 0
                
                if ((arg1[0xc].b & 1) == 0)
                    arg1[0xd] = arg3
                    arg1[0xe] = arg4
                
                if (arg3 == arg1[4] && arg4 == arg1[5])
                    return 0
                
                arg1[4] = arg3
                arg1[5] = arg4
            case 5
                if ((arg1[0xc].b & 1) == 0)
                    arg1[0xf] = arg3
                    arg1[0x10] = arg4
                
                if (arg3 == arg1[6] && arg4 == arg1[7])
                    return 0
                
                arg1[6] = arg3
                arg1[7] = arg4
                sub_5ca090(arg1)
            case 7
                int32_t eax_11 = arg1[0xc]
                
                if ((eax_11.b & 0x40) != 0)
                    return 0
                
                arg1[0xc] = eax_11 | 0x40
                sub_5cb320(arg1)
            case 8
                int32_t eax_13 = arg1[0xc]
                
                if (eax_13.b s< 0)
                    return 0
                
                arg1[0xc] = eax_13 | 0x80
            case 9
                int32_t eax_15 = arg1[0xc]
                
                if ((eax_15.b & 0xc0) == 0)
                    return 0
                
                arg1[0xc] = eax_15 & 0xffffff3f
                sub_5cb340(arg1)
            case 0xa
                int32_t eax_17 = arg1[0xc]
                
                if ((eax_17 & 0x400) != 0)
                    return 0
                
                arg1[0xc] = eax_17 | 0x400
                sub_5ca0c0(arg1)
            case 0xb
                int32_t eax_19 = arg1[0xc]
                
                if ((eax_19 & 0x400) == 0)
                    return 0
                
                int32_t* __saved_edi_7 = arg1
                arg1[0xc] = eax_19 & 0xfffffbff
            case 0xc
                int32_t eax_21 = arg1[0xc]
                
                if ((eax_21 & 0x200) != 0)
                    return 0
                
                arg1[0xc] = eax_21 | 0x200
                sub_5ca0e0(arg1)
            case 0xd
                int32_t eax_23 = arg1[0xc]
                
                if ((eax_23 & 0x200) == 0)
                    return 0
                
                arg1[0xc] = eax_23 & 0xfffffdff
                sub_5ca180(arg1)
    
    int32_t result = 0
    
    if (sub_5c7830(0x200, 0xffffffff) == 1)
        int32_t edx_3 = arg1[1]
        int32_t var_3c = 0x200
        char var_30_1 = arg2
        int32_t var_2c_1 = arg3
        int32_t var_28_1 = arg4
        int32_t var_34_1 = edx_3
        
        if (arg2 == 5)
            sub_5c77b0(sub_5d6e00, &var_3c)
        else if (arg2 == 6)
            sub_5c77b0(sub_5d6e30, &var_3c)
        else if (arg2 == 4)
            sub_5c77b0(sub_5d6e60, &var_3c)
        
        int32_t result_1
        result_1.b = sub_5c76a0(&var_3c) s> 0
        result = result_1
    
    if (arg2 == 0xe && arg1[0x1e] == 0 && arg1[0x1f] == 0)
        sub_5cbf40()
    
    return result
}

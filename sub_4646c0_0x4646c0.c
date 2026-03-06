// 函数名称: sub_4646c0
// 虚拟地址: 0x4646c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_4646c0(void** arg1, int32_t* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax_4
    int32_t eax_4
    int32_t* edx_2
    edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x14)
    int32_t* var_a8 = arg4
    void* i = &arg2[((eax_4 - edx_2) s>> 1) * 5]
    int32_t var_ac = arg3 - 0x14
    sub_465030(arg2, edx_2, arg4, i)
    int32_t* i_1 = i + 0x14
    int32_t* i_5
    
    for (; arg2 u< i; i -= 0x14)
        char eax_10
        eax_10, i_5 = arg4(i - 0x14, i)
        
        if (eax_10 != 0)
            break
        
        char eax_11
        eax_11, i_5 = arg4(i, i - 0x14)
        
        if (eax_11 != 0)
            break
    
    for (; i_1 u< arg3; i_1 = &i_1[5])
        char eax_12
        eax_12, i_5 = arg4(i_1, i)
        
        if (eax_12 != 0)
            break
        
        char eax_13
        eax_13, i_5 = arg4(i, i_1)
        
        if (eax_13 != 0)
            break
    
    void* i_2 = i
    int32_t* i_3 = i_1
    void* i_4 = i_2
    
    while (true)
        if (i_3 u< arg3)
            do
                if (arg4(i, i_3) == 0)
                    if (arg4(i_3, i) != 0)
                        break
                    
                    int32_t edx_4 = i_1[1]
                    int32_t ecx_5 = *i_1
                    int32_t edx_5 = i_1[2]
                    int32_t edx_6 = i_1[3]
                    int32_t edx_7 = i_1[4]
                    *i_1 = *i_3
                    i_1[1] = i_3[1]
                    i_1[2] = i_3[2]
                    i_1[3] = i_3[3]
                    i_1[4] = i_3[4]
                    *i_3 = ecx_5
                    i_3[1] = edx_4
                    i_3[2] = edx_5
                    i_3[3] = edx_6
                    i_1 = &i_1[5]
                    i_3[4] = edx_7
                
                i_3 = &i_3[5]
            while (i_3 u< arg3)
            
            i_2 = i_4
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            void* var_8_1 = i_2 - 0x14
            void* i_6
            
            do
                void* eax_24
                
                if (arg4(var_8_1, i) != 0)
                    eax_24 = var_8_1
                else
                    if (arg4(i, var_8_1) != 0)
                        break
                    
                    int32_t eax_22 = *(i - 0x10)
                    int32_t edx_15 = *(i - 0xc)
                    int32_t ecx_8 = *(i - 0x14)
                    i -= 0x14
                    int32_t edx_16 = *(i + 0x10)
                    int32_t eax_23 = *(i + 0xc)
                    eax_24 = var_8_1
                    *i = *eax_24
                    *(i + 4) = *(eax_24 + 4)
                    *(i + 8) = *(eax_24 + 8)
                    *(i + 0xc) = *(eax_24 + 0xc)
                    *(i + 0x10) = *(eax_24 + 0x10)
                    *eax_24 = ecx_8
                    *(eax_24 + 4) = eax_22
                    *(eax_24 + 8) = edx_15
                    *(eax_24 + 0xc) = eax_23
                    *(eax_24 + 0x10) = edx_16
                
                i_6 = i_4 - 0x14
                i_4 = i_6
                var_8_1 = eax_24 - 0x14
            while (arg2 u< i_6)
            i_2 = i_4
            cond:0_1 = i_2 != arg2
        
        if (cond:0_1)
            i_2 -= 0x14
            i_4 = i_2
            
            if (i_3 != arg3)
                int32_t edx_77 = i_3[1]
                int32_t ecx_21 = *i_3
                int32_t edx_78 = i_3[2]
                int32_t* edx_79 = i_3[3]
                int32_t edx_80 = i_3[4]
                *i_3 = *i_2
                i_3[1] = *(i_2 + 4)
                i_3[2] = *(i_2 + 8)
                i_3[3] = *(i_2 + 0xc)
                i_3[4] = *(i_2 + 0x10)
                *i_2 = ecx_21
                *(i_2 + 4) = edx_77
                *(i_2 + 8) = edx_78
                *(i_2 + 0xc) = edx_79
                *(i_2 + 0x10) = edx_80
                i_3 = &i_3[5]
            else
                i -= 0x14
                
                if (i_2 != i)
                    int32_t edx_55 = *(i_2 + 4)
                    int32_t ecx_16 = *i_2
                    int32_t edx_56 = *(i_2 + 8)
                    int32_t edx_57 = *(i_2 + 0xc)
                    int32_t edx_58 = *(i_2 + 0x10)
                    *i_2 = *i
                    *(i_2 + 4) = *(i + 4)
                    *(i_2 + 8) = *(i + 8)
                    *(i_2 + 0xc) = *(i + 0xc)
                    *(i_2 + 0x10) = *(i + 0x10)
                    *i = ecx_16
                    *(i + 4) = edx_55
                    *(i + 8) = edx_56
                    *(i + 0xc) = edx_57
                    *(i + 0x10) = edx_58
                
                int32_t edx_66 = *(i + 4)
                int32_t ecx_19 = *i
                int32_t edx_67 = *(i + 8)
                int32_t* edx_68 = *(i + 0xc)
                int32_t edx_69 = *(i + 0x10)
                i_1 -= 0x14
                *i = *i_1
                *(i + 4) = i_1[1]
                *(i + 8) = i_1[2]
                *(i + 0xc) = i_1[3]
                *(i + 0x10) = i_1[4]
                *i_1 = ecx_19
                i_1[1] = edx_66
                i_1[2] = edx_67
                i_1[3] = edx_68
                i_1[4] = edx_69
        else
            if (i_3 == arg3)
                break
            
            if (i_1 != i_3)
                int32_t edx_24 = *(i + 4)
                int32_t ecx_12 = *i
                int32_t edx_25 = *(i + 8)
                int32_t edx_26 = *(i + 0xc)
                int32_t edx_27 = *(i + 0x10)
                *i = *i_1
                *(i + 4) = i_1[1]
                *(i + 8) = i_1[2]
                *(i + 0xc) = i_1[3]
                *(i + 0x10) = i_1[4]
                *i_1 = ecx_12
                i_1[1] = edx_24
                i_1[2] = edx_25
                i_1[3] = edx_26
                i_1[4] = edx_27
            
            int32_t edx_35 = *i
            int32_t edx_36 = *(i + 4)
            int32_t edx_37 = *(i + 8)
            int32_t edx_38 = *(i + 0xc)
            int32_t edx_39 = *(i + 0x10)
            *i = *i_3
            *(i + 4) = i_3[1]
            *(i + 8) = i_3[2]
            *(i + 0xc) = i_3[3]
            *(i + 0x10) = i_3[4]
            i_5 = i_3
            *i_5 = edx_35
            i_5[1] = edx_36
            i_5[2] = edx_37
            i_5[3] = edx_38
            i_1 = &i_1[5]
            i += 0x14
            i_3 = &i_3[5]
            i_5[4] = edx_39
    
    *arg1 = i
    arg1[1] = i_1
    return arg1
}

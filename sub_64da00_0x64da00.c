// 函数名称: sub_64da00
// 虚拟地址: 0x64da00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_64da00(int32_t* arg1 @ edi, float arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx = arg1[9]
    int32_t ebx = arg1[9]
    int32_t i_1 = 0
    sub_64d870(arg2, ebx, arg1[0xa])
    int32_t edx_3 = *arg1[5] - (ebx s>> 1) - arg1[7]
    
    if (*arg1 s> 1)
        long double x87_r7_1 = fconvert.t(-9999f)
        
        do
            void* ebx_2 = arg1[1]
            long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg2 i+ (edx_3 << 2)))))
            void* eax_2 = arg1[5] + (i_1 << 2)
            long double x87_r5_1 = fconvert.t(*(ebx_2 + 0x20))
            x87_r5_1 - x87_r6_2
            int32_t ecx_5 = ((*(eax_2 + 4) + *eax_2) s>> 1) - arg1[7]
            eax_2.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                x87_r7_1 = x87_r6_2
                x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(ebx_2 + 0x20))))
            
            if (edx_3 + 1 s<= ecx_5)
                int32_t var_c_1 = edx_3 + 1
                
                do
                    long double x87_r6_4 = x87_r7_1
                    x87_r7_1 = x87_r6_2
                    long double temp1_1 = fconvert.t(*(arg2 i+ (edx_3 << 2) + 4))
                    x87_r6_4 - temp1_1
                    var_c_1 += 1
                    edx_3 += 1
                    int32_t eax_3
                    eax_3.w = (x87_r6_4 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r6_4 == temp1_1 ? 1 : 0) << 0xe | 0x3000
                    bool p_2 = unimplemented  {test ah, 0x5}
                    bool p_3
                    
                    if (not(p_2))
                        long double x87_r5_2 = fconvert.t(*(arg2 i+ (edx_3 << 2)))
                        x87_r5_2 - x87_r7_1
                        eax_3.w = (x87_r5_2 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_2, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r5_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                        p_3 = unimplemented  {test ah, 0x5}
                    
                    bool p_4
                    
                    if (p_2 || p_3)
                        x87_r6_4 - x87_r7_1
                        eax_3.w = (x87_r6_4 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if ((p_2 || p_3) && p_4)
                        x87_r6_2 = x87_r7_1
                        x87_r7_1 = x87_r6_4
                    else
                        x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg2 i+ (edx_3 << 2)))))
                while (var_c_1 s<= ecx_5)
            
            int32_t i = arg1[7] + edx_3
            
            if (i_1 s< *arg1)
                while (*(arg1[5] + (i_1 << 2)) s<= i)
                    long double x87_r5_4 = fconvert.t(*(arg3 + (i_1 << 2)))
                    x87_r5_4 - x87_r6_2
                    int32_t eax_4
                    eax_4.w = (x87_r5_4 < x87_r6_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_4, x87_r6_2) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000
                    bool p_5 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_5))
                        *(arg3 + (i_1 << 2)) = fconvert.s(x87_r6_2)
                    
                    i_1 += 1
                    
                    if (i_1 s>= *arg1)
                        break
            
            x87_r7_1 = x87_r6_2
        while (i_1 + 1 s< *arg1)
    
    float result = arg2
    
    if (i_1 s< *arg1)
        long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(*(result i+ (arg1[0xa] << 2) - 4))))
        
        do
            long double x87_r6_6 = fconvert.t(*(arg3 + (i_1 << 2)))
            x87_r6_6 - x87_r7_3
            result.w = (x87_r6_6 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_6, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                *(arg3 + (i_1 << 2)) = fconvert.s(x87_r7_3)
            
            i_1 += 1
        while (i_1 s< *arg1)
    
    return result
}

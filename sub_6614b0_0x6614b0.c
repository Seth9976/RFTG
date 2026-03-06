// 函数名称: sub_6614b0
// 虚拟地址: 0x6614b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_6614b0(void* arg1, int128_t* arg2, int128_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* eax_2 = arg2
    int128_t* var_1c = eax_2
    
    if (arg1 != 0)
        if ((*(arg1 + 0x70) & 0x40) == 0)
            sub_667770(arg1)
        
        eax_2.b = *(arg1 + 0x13c)
        char var_c_1 = *(arg1 + 0x13b)
        char var_a_1 = *(arg1 + 0x13f)
        char edx_2 = *(arg1 + 0x13e)
        int32_t edi_1 = *(arg1 + 0xf8)
        char var_b_1 = eax_2.b
        eax_2.b = edx_2
        char var_9_1 = eax_2.b
        int32_t var_14 = edi_1
        uint32_t eax_3 = zx.d(eax_2.b)
        uint32_t eax_5
        
        if (eax_2.b u< 8)
            eax_5 = (eax_3 * edi_1 + 7) u>> 3
        else
            eax_5 = (eax_3 u>> 3) * edi_1
        
        if (*(arg1 + 0x138) != 0 && (*(arg1 + 0x74) & 2) != 0)
            uint32_t eax_8 = zx.d(*(arg1 + 0x139))
            int128_t* var_2c_1
            bool cond:2_1
            
            if (eax_8 u<= 5)
                switch (eax_8)
                    case 0
                        if ((*(arg1 + 0xfc) & 7) != 0)
                            if (arg3 == 0)
                                goto label_661619
                            
                            int32_t var_28_1 = 1
                            var_2c_1 = arg3
                        label_661610:
                            sub_666be0(arg1, var_2c_1, 1)
                        label_661619:
                            uint32_t eax_11 = sub_66a8e0(arg1)
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return eax_11
                    case 1
                        if ((*(arg1 + 0xfc) & 7) != 0)
                        label_661603:
                            
                            if (arg3 == 0)
                                goto label_661619
                            
                            int32_t var_28_4 = 1
                            var_2c_1 = arg3
                            goto label_661610
                        
                        cond:2_1 = *(arg1 + 0xe4) u>= 5
                    label_661601:
                        
                        if (not(cond:2_1))
                            goto label_661603
                    case 2
                        char eax_9 = (*(arg1 + 0xfc)).b
                        
                        if ((eax_9 & 7) != 4)
                            if (arg3 == 0 || (eax_9 & 4) == 0)
                                goto label_661619
                            
                            int32_t var_28_2 = 1
                            var_2c_1 = arg3
                            goto label_661610
                    case 3
                        if ((*(arg1 + 0xfc) & 3) != 0)
                            goto label_661603
                        
                        cond:2_1 = *(arg1 + 0xe4) u>= 3
                        goto label_661601
                    case 4
                        char eax_10 = (*(arg1 + 0xfc)).b
                        
                        if ((eax_10 & 3) != 2)
                            if (arg3 == 0 || (eax_10 & 2) == 0)
                                goto label_661619
                            
                            int32_t var_28_3 = 1
                            var_2c_1 = arg3
                            goto label_661610
                    case 5
                        if ((*(arg1 + 0xfc) & 1) != 0)
                            goto label_661603
                        
                        cond:2_1 = *(arg1 + 0xe4) u>= 2
                        goto label_661601
            else if ((*(arg1 + 0xfc) & 1) == 0)
                goto label_661619
        
        if ((*(arg1 + 0x6c) & 4) == 0)
            sub_664320(arg1, "Invalid attempt to read row data")
            noreturn
        
        *(arg1 + 0x84) = *(arg1 + 0x108)
        uint32_t eax_13 = zx.d(edx_2)
        uint32_t eax_15
        
        if (edx_2 u< 8)
            eax_15 = (eax_13 * edi_1 + 7) u>> 3
        else
            eax_15 = (eax_13 u>> 3) * edi_1
        
        *(arg1 + 0x88) = eax_15 + 1
        
        while (true)
            if (*(arg1 + 0x7c) == 0)
                if (*(arg1 + 0x120) == 0)
                    uint32_t i
                    
                    do
                        sub_667b40(arg1, 0)
                        i = sub_667a40(arg1)
                        *(arg1 + 0x120) = i
                        
                        if (*(arg1 + 0x100) != 0x49444154)
                            sub_664320(arg1, "Not enough image data")
                            noreturn
                    while (i == 0)
                
                int32_t eax_19 = *(arg1 + 0xb4)
                int32_t ecx_9 = *(arg1 + 0x120)
                char* edx_4 = *(arg1 + 0xb0)
                *(arg1 + 0x7c) = eax_19
                *(arg1 + 0x78) = edx_4
                
                if (eax_19 u> ecx_9)
                    *(arg1 + 0x7c) = ecx_9
                
                sub_6667f0(arg1, edx_4, *(arg1 + 0x7c))
                *(arg1 + 0x120) -= *(arg1 + 0x7c)
            
            uint32_t eax_21 = sub_6754d0(arg1 + 0x78, 1)
            
            if (eax_21 == 1)
                if (*(arg1 + 0x88) != 0 || *(arg1 + 0x7c) != 0 || *(arg1 + 0x120) != 0)
                    sub_664350(arg1, "Extra compressed data")
                
                *(arg1 + 0x6c) |= 8
                *(arg1 + 0x70) |= 0x20
            else
                if (eax_21 != 0)
                    char* eax_26 = *(arg1 + 0x90)
                    
                    if (eax_26 == 0)
                        eax_26 = "Decompression error"
                    
                    sub_664320(arg1, eax_26)
                    noreturn
                
                if (*(arg1 + 0x88) != eax_21)
                    continue
            
            char* ecx_11 = *(arg1 + 0x108)
            eax_21.b = *ecx_11
            
            if (eax_21.b != 0)
                if (eax_21.b u>= 5)
                    sub_664320(arg1, "bad adaptive filter value")
                    noreturn
                
                sub_6676f0(arg1, &var_14, &ecx_11[1], *(arg1 + 0x104) + 1, zx.d(eax_21.b))
            
            sub_5ab990(*(arg1 + 0x104), *(arg1 + 0x108), eax_5 + 1)
            
            if ((*(arg1 + 0x258) & 4) != 0 && *(arg1 + 0x25c) == 0x40)
                sub_66e440(&var_14, *(arg1 + 0x108) + 1)
            
            if (*(arg1 + 0x74) != 0)
                sub_66e520(arg1, &var_14)
            
            char eax_25 = *(arg1 + 0x143)
            
            if (eax_25 == 0)
                *(arg1 + 0x143) = var_9_1
                
                if (var_9_1 u> *(arg1 + 0x142))
                    sub_664320(arg1, "sequential row overflow")
                    noreturn
            else if (eax_25 != var_9_1)
                sub_664320(arg1, "internal sequential row size calculation error")
                noreturn
            
            int32_t eax_27
            
            if (*(arg1 + 0x138) != 0)
                eax_27 = *(arg1 + 0x74)
            
            if (*(arg1 + 0x138) == 0 || (eax_27.b & 2) == 0)
                int128_t* eax_31 = var_1c
                
                if (eax_31 != 0)
                    sub_666be0(arg1, eax_31, 0xffffffff)
                
                int128_t* eax_32 = arg3
                
                if (eax_32 != 0)
                    sub_666be0(arg1, eax_32, 0xffffffff)
            else
                char ecx_14 = *(arg1 + 0x139)
                
                if (ecx_14 u< 6)
                    sub_6670a0(&var_14, *(arg1 + 0x108) + 1, zx.d(ecx_14), eax_27)
                
                if (arg3 != 0)
                    sub_666be0(arg1, arg3, 1)
                
                if (var_1c != 0)
                    sub_666be0(arg1, var_1c, 0)
            
            sub_66a8e0(arg1)
            eax_2 = *(arg1 + 0x1b4)
            
            if (eax_2 != 0)
                eax_2 = eax_2(arg1, *(arg1 + 0xfc), zx.d(*(arg1 + 0x139)))
            
            break
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}

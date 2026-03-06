// 函数名称: sub_4a94d0
// 虚拟地址: 0x4a94d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4a94d0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1[6].b != 0)
        int32_t eax_4 = arg1[3] * 0x19660d + 0x3c6ef35f
        arg1[3] = eax_4
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    int32_t eax_5 = sub_49d9e0(arg1, arg2, 0x10, nullptr, nullptr, 0, nullptr, 0, 0, 0, 0)
    int32_t var_418 = eax_5
    
    if (*(arg1 + 0x1ec3) == 0)
        eax_5 = sub_49cb30(arg1, arg2)
        int32_t edx_2 = eax_5
        int32_t var_410_1 = edx_2
        
        if (edx_2 != 0xffffffff)
            void* ebx_1 = &arg1[edx_2 * 5 + 0x119]
            
            if (arg1[6].b == 0)
                int32_t var_428_1 = var_418
                int32_t var_42c_1 = arg1[arg2 * 0x2d + 8]
                char var_40c[0x404]
                sub_5a733b(&var_40c, "%s guesses %d.\n")
                char (* var_428_2)[0x404] = &var_40c
                sub_4591b0(&var_40c, sub_4c5680(&var_40c), arg1, arg2)
                int32_t* eax_10 = *(ebx_1 + 8)
                int32_t var_430_1 = sx.d(*(eax_10 + 7))
                int32_t var_434_2 = *eax_10
                int32_t var_438_2 = arg1[arg2 * 0x2d + 8]
                sub_5a733b(&var_40c, "%s draws %s (cost %d).\n")
                int32_t eax_12
                int32_t edx_6
                eax_12, edx_6 = sub_4c5680(&var_40c)
                char (* var_428_4)[0x404] = &var_40c
                sub_4591b0(eax_12, edx_6, arg1, arg2)
                edx_2 = var_410_1
            
            int32_t ecx_9 = sx.d(*(*(ebx_1 + 8) + 7))
            
            if (var_418 != ecx_9)
                int32_t var_428_7 = 1
                eax_5 = sub_49cc30(arg1, edx_2, ecx_9, 0xffffffff)
                *(ebx_1 + 4) |= 0x3f
                
                if (arg1[6].b == 0)
                    eax_5 = sub_49b7f0(var_410_1)
            else
                int32_t var_428_5 = 2
                sub_49cc30(arg1, edx_2, ecx_9, arg2)
                int32_t edx_7
                edx_7.w = *(ebx_1 + 4)
                edx_7.w &= 0xffc0
                eax_5.w = 1 << arg2.b
                edx_7.w |= eax_5.w
                *(ebx_1 + 4) = edx_7.w
                
                if (arg1[6].b == 0)
                    int32_t var_428_6 = var_410_1
                    int32_t eax_16 = sub_49b590(arg2, edx_7)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_16
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_5
}

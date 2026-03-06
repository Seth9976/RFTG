// 函数名称: sub_4b96a0
// 虚拟地址: 0x4b96a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b96a0(int32_t arg1, char* arg2, int32_t* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_307c588
    char eax_3
    int32_t ecx
    eax_3, ecx = sub_4f65a0(&arg2[4], *arg2)
    int32_t result
    
    if (eax_3 != 0)
        char eax_4
        int32_t ecx_1
        eax_4, ecx_1 = sub_4b95c0(ecx, *(arg2 + 0x40))
        bool cond:0_1 = *(arg2 + 0x40) != 3
        arg2[0x2d] = eax_4
        arg2[0x2f] = 0
        
        if (not(cond:0_1))
            char eax_5
            eax_5, ecx_1 = sub_4b95c0(ecx_1, 2)
            
            if (eax_5 == 0)
                arg2[0x2f] = 1
        
        if (*(arg2 + 0x40) == 4)
            char eax_6
            eax_6, ecx_1 = sub_4b95c0(ecx_1, 3)
            
            if (eax_6 == 0)
                arg2[0x2f] = 1
        
        void* ebx_1 = &arg2[0x19]
        int32_t i_1 = 0
        void* var_54_1 = ebx_1
        int32_t i
        
        do
            void var_c4
            int32_t eax_7 = sub_40a930(&var_c4)
            int16_t top = top - 1
            unimplemented  {call 0x40a930}
            int32_t eax_8 = *(ebx_1 - 0xd)
            bool cond:1_1 = *(data_27e7bbc + 0x18) != 0
            void var_4c
            __builtin_memcpy(&var_4c, eax_7, 0x40)
            
            if (cond:1_1)
                int32_t* eax_9 = sub_4f5350(eax_8, &var_4c, *(ebx_1 - 0x11), &var_4c)
                int32_t edx_4 = eax_9[1]
                float var_70 = *eax_9
                int32_t var_6c_1 = edx_4
                int32_t var_68_1 = eax_9[2]
                int32_t var_64_1 = eax_9[3]
                eax_8 = sub_4057a0(&var_70, arg4)
                ebx_1 = var_54_1
            else
                eax_8.b = 0
            
            char* ecx_7
            ecx_7.b = arg5
            int32_t* edx_7
            edx_7.b = eax_8.b
            int32_t eax_11
            int32_t edx_8
            eax_11, edx_8 =
                sub_505640(*(ebx_1 - 0xd), edx_7.b, ecx_7.b, ebx_1 - 1, *(ebx_1 - 0x11), ebx_1 - 9)
            
            if (*ebx_1 != 0)
                char ecx_8 = *(ebx_1 + 2)
                
                if (ecx_8 == 0 || *(ebx_1 + 3) != 0 || ecx_8 == 0)
                    *arg3 = 0xa
            
            if (eax_11 == 1)
                result = sub_4b9630(i_1, edx_8, arg2)
                
                if (result != 0)
                    goto label_4b9803
            
            i = i_1 + 1
            ebx_1 += 0x1c
            i_1 = i
            var_54_1 = ebx_1
        while (i s< 2)
    
    result = 0
    label_4b9803:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

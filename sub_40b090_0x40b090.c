// 函数名称: sub_40b090
// 虚拟地址: 0x40b090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40b090(int32_t arg1, void* arg2, int32_t* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_307c5a0
    
    if (sub_4f65a0(arg2 + 0xc8, *(arg2 + 0xc4)) != 0)
        int32_t eax_5 = *(data_27e7a40 + 0x2c4960)
        char eax_6
        
        if (eax_5 == 1 || eax_5 == 4)
            eax_6 = 1
        else
            eax_6 = 0
        
        *(arg2 + 0x95) = eax_6
        void* ebx_1 = arg2 + 0x11
        int32_t var_50_1 = 0
        void* var_54_1 = ebx_1
        
        while (true)
            void var_bc
            int32_t eax_7 = sub_40a930(&var_bc)
            int16_t top = top - 1
            unimplemented  {call 0x40a930}
            int32_t eax_8 = *(ebx_1 - 0xd)
            bool cond:0_1 = *(data_27e7bbc + 0x18) != 0
            void var_4c
            __builtin_memcpy(&var_4c, eax_7, 0x40)
            
            if (cond:0_1)
                int32_t* eax_9 = sub_4f5350(eax_8, &var_4c, *(ebx_1 - 0x11), &var_4c)
                int32_t edx_3 = eax_9[1]
                float var_6c = *eax_9
                int32_t var_68_1 = edx_3
                int32_t var_64_1 = eax_9[2]
                int32_t var_60_1 = eax_9[3]
                eax_8 = sub_4057a0(&var_6c, arg4)
                ebx_1 = var_54_1
            else
                eax_8.b = 0
            
            char* ecx_4
            ecx_4.b = arg5
            int32_t* edx_6
            edx_6.b = eax_8.b
            int32_t eax_11 =
                sub_505640(*(ebx_1 - 0xd), edx_6.b, ecx_4.b, ebx_1 - 1, *(ebx_1 - 0x11), ebx_1 - 9)
            
            if (*ebx_1 != 0)
                char ecx_5 = *(ebx_1 + 2)
                
                if (ecx_5 == 0 || *(ebx_1 + 3) != 0 || ecx_5 == 0)
                    *arg3 = 0xa
            
            if (eax_11 == 1)
                if (var_50_1 u> 6)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\GameMenuDlg.cpp", 0x32, 
                        "GameMenuDialogClick")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                switch (var_50_1)
                    case 0
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 2
                    case 1
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 3
                    case 2
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 4
                    case 3, 6
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
                    case 4
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 5
                    case 5
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 6
            else
                int32_t eax_13 = var_50_1 + 1
                ebx_1 += 0x1c
                var_50_1 = eax_13
                var_54_1 = ebx_1
                
                if (eax_13 s>= 7)
                    break
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

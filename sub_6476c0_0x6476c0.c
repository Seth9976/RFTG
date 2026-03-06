// 函数名称: sub_6476c0
// 虚拟地址: 0x6476c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6476c0(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* ecx = *(arg1 + 4)
    void* ecx = *(arg1 + 4)
    void* esi = *(arg1 + 0x68)
    int32_t result = 0xffffff7e
    int32_t var_20
    
    if (esi != 0)
        sub_68ae90(&var_20)
        
        if (sub_6471e0(ecx, &var_20) == 0)
            int32_t eax_3 = *(esi + 0x40)
            
            if (eax_3 != 0)
                __free_base(eax_3)
            
            *(esi + 0x40) = sub_5a881a(sub_68b1a0(&var_20))
            void* eax_6 = sub_68b1a0(&var_20)
            int128_t* var_18
            sub_5ab990(*(esi + 0x40), var_18, eax_6)
            *arg3 = *(esi + 0x40)
            arg3[1] = sub_68b1a0(&var_20)
            __builtin_memset(&arg3[3], 0, 0x14)
            arg3[2] = 1
            sub_68af00(&var_20)
            sub_6472d0(&var_20, arg2)
            int32_t eax_9 = *(esi + 0x44)
            
            if (eax_9 != 0)
                __free_base(eax_9)
            
            *(esi + 0x44) = sub_5a881a(sub_68b1a0(&var_20))
            void* eax_12 = sub_68b1a0(&var_20)
            sub_5ab990(*(esi + 0x44), var_18, eax_12)
            *arg4 = *(esi + 0x44)
            arg4[1] = sub_68b1a0(&var_20)
            arg4[2] = 0
            arg4[3] = 0
            arg4[4] = 0
            arg4[5] = 0
            arg4[6] = 1
            arg4[7] = 0
            sub_68af00(&var_20)
            
            if (sub_6473d0(&var_20, ecx) == 0)
                int32_t eax_21 = *(esi + 0x48)
                
                if (eax_21 != 0)
                    __free_base(eax_21)
                
                *(esi + 0x48) = sub_5a881a(sub_68b1a0(&var_20))
                void* eax_24 = sub_68b1a0(&var_20)
                sub_5ab990(*(esi + 0x48), var_18, eax_24)
                *arg5 = *(esi + 0x48)
                arg5[1] = sub_68b1a0(&var_20)
                arg5[2] = 0
                arg5[3] = 0
                arg5[4] = 0
                arg5[5] = 0
                arg5[6] = 2
                arg5[7] = 0
                sub_68af30(&var_20)
                return 0
    else
        result = 0xffffff7f
    
    __builtin_memset(arg3, 0, 0x20)
    __builtin_memset(arg4, 0, 0x20)
    __builtin_memset(arg5, 0, 0x20)
    
    if (esi != 0)
        sub_68af30(&var_20)
        int32_t eax_17 = *(esi + 0x40)
        
        if (eax_17 != 0)
            __free_base(eax_17)
        
        int32_t eax_18 = *(esi + 0x44)
        
        if (eax_18 != 0)
            __free_base(eax_18)
        
        int32_t eax_19 = *(esi + 0x48)
        
        if (eax_19 != 0)
            __free_base(eax_19)
        
        *(esi + 0x40) = 0
        *(esi + 0x44) = 0
        *(esi + 0x48) = 0
    
    return result
}

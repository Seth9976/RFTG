// 函数名称: sub_4bb860
// 虚拟地址: 0x4bb860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bb860(int32_t arg1, int32_t* arg2, char* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = 0
    char* var_d4 = arg3
    int32_t var_d0 = 0
    
    while (true)
        int32_t* ebx_1 = &arg3[eax_3 * 0x1c + 0x3ec]
        int32_t* var_d8_1 = ebx_1
        void* esi_3
        int16_t top
        
        if (eax_3 != 8)
            int32_t eax_5 = sub_4bb770(arg3, eax_3)
            top -= 1
            unimplemented  {call 0x4bb770}
            ebx_1 = var_d8_1
            void var_4c
            __builtin_memcpy(&var_4c, eax_5, 0x40)
            esi_3 = &var_4c
        else
            void var_144
            int32_t eax_4 = sub_40a930(&var_144)
            top -= 1
            unimplemented  {call 0x40a930}
            void var_8c
            __builtin_memcpy(&var_8c, eax_4, 0x40)
            esi_3 = &var_8c
        bool cond:0_1 = *(data_27e7bbc + 0x18) != 0
        int32_t eax_6 = ebx_1[1]
        void var_cc
        __builtin_memcpy(&var_cc, esi_3, 0x40)
        
        if (cond:0_1)
            int32_t* eax_7 = sub_4f5350(eax_6, &var_cc, *ebx_1, &var_cc)
            int32_t edx_4 = eax_7[1]
            float var_f0 = *eax_7
            int32_t var_ec_1 = edx_4
            int32_t var_e8_1 = eax_7[2]
            int32_t var_e4_1 = eax_7[3]
            eax_6 = sub_4057a0(&var_f0, arg4)
            ebx_1 = var_d8_1
        else
            eax_6.b = 0
        
        void* ecx_4
        ecx_4.b = arg5
        int32_t* edx_7
        edx_7.b = eax_6.b
        int32_t eax_9 = sub_505640(ebx_1[1], edx_7.b, ecx_4.b, &ebx_1[4], *ebx_1, &ebx_1[2])
        char ecx_5 = *(ebx_1 + 0x11)
        
        if (ecx_5 != 0)
            if (*(ebx_1 + 0x13) != 0 && ebx_1[5].b != 0)
                *arg2 = 0xa
            else if (ecx_5 != 0 && *(ebx_1 + 0x13) == 0)
                *arg2 = 0xa
        
        if (eax_9 == 1)
            if (var_d0 != 8)
                *(data_27e7a54 + 0x18) = var_d0 + 4
                sub_408a40()
            
            var_d4[8] = 0
            *var_d4 = 1
        
        int32_t esi_5 = var_d0 + 1
        var_d0 = esi_5
        
        if (esi_5 s>= 9)
            break
        
        arg3 = var_d4
        eax_3 = var_d0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

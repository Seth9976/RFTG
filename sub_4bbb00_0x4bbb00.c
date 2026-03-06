// 函数名称: sub_4bbb00
// 虚拟地址: 0x4bbb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bbb00(int32_t arg1, char* arg2, int32_t* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    char* var_d0 = arg2
    int32_t var_d4 = 0
    
    while (true)
        int32_t** ecx = &arg2[ebx * 0x1c + 0x2f0]
        int32_t eax_4
        eax_4.b = 0
        
        if (ebx == *(data_27e7a58 + 8) + 4)
            eax_4.b = 1
        
        *(ecx + 9) = eax_4.b
        int32_t var_d8_1 = ebx
        
        if (ebx s>= 4)
            var_d8_1 = ebx - 4
        
        void* esi_6
        int16_t top
        
        if (ebx != 8)
            int32_t eax_6 = sub_4bba20(arg2)
            top -= 1
            unimplemented  {call 0x4bba20}
            ebx = var_d4
            void var_cc
            __builtin_memcpy(&var_cc, eax_6, 0x40)
            esi_6 = &var_cc
        else
            void var_144
            int32_t eax_5 = sub_40a930(&var_144)
            top -= 1
            unimplemented  {call 0x40a930}
            void var_4c
            __builtin_memcpy(&var_4c, eax_5, 0x40)
            esi_6 = &var_4c
        void* edx = data_27e7bbc
        void var_8c
        __builtin_memcpy(&var_8c, esi_6, 0x40)
        int32_t** esi_7 = ecx
        int32_t eax_7
        
        if (*(edx + 0x18) != 0)
            int32_t* eax_8 = sub_4f5350(esi_7[1], &var_8c, *esi_7, &var_8c)
            int32_t edx_2 = eax_8[1]
            float var_f4 = *eax_8
            int32_t var_f0_1 = edx_2
            int32_t var_ec_1 = eax_8[2]
            int32_t var_e8_1 = eax_8[3]
            eax_7 = sub_4057a0(&var_f4, arg4)
            ebx = var_d4
            esi_7 = ecx
        else
            eax_7.b = 0
        
        char* ecx_7
        ecx_7.b = arg5
        int32_t* edx_5
        edx_5.b = eax_7.b
        int32_t eax_10 = sub_505640(esi_7[1], edx_5.b, ecx_7.b, &esi_7[4], *esi_7, &esi_7[2])
        char ecx_8 = *(esi_7 + 0x11)
        
        if (ecx_8 != 0)
            if (*(esi_7 + 0x13) != 0 && esi_7[5].b != 0)
                *arg3 = 0xa
            else if (ecx_8 != 0 && *(esi_7 + 0x13) == 0)
                *arg3 = 0xa
        
        if (eax_10 == 1)
            if (ebx u<= 3)
                char* ecx_10 = data_27e7a58
                
                if (ebx != *(ecx_10 + 4))
                    char* eax_16 = ebx * 0x214 + *ecx_10
                    *(ecx_10 + 8) = ebx
                    data_27e7a54 = eax_16
                    sub_4c4590(eax_16)
                    sub_408a40()
                    sub_4075c0()
                    data_27e7a54
                    sub_403e80()
                    sub_407670()
                    *var_d0 = 1
                    var_d0[0x10] = 0
                    sub_409060()
                    ebx = var_d4
                    data_27c060c = sub_408650()
                else
                    sub_408da0(ecx_10)
                    sub_4c4590(data_27e7a54)
                    sub_408a40()
                    *var_d0 = 1
                    var_d0[0x10] = 0
                    sub_409060()
                    ebx = var_d4
                    data_27c060c = sub_408650()
            else if (ebx - 4 u<= 3)
                sub_408d20(var_d8_1)
            else if (ebx == 8)
                *var_d0 = 1
                var_d0[0x10] = 0
        
        ebx += 1
        var_d4 = ebx
        
        if (ebx s>= 9)
            break
        
        arg2 = var_d0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

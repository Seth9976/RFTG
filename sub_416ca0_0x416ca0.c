// 函数名称: sub_416ca0
// 虚拟地址: 0x416ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_416ca0(int32_t arg1, float* arg2, int32_t* arg3, int32_t arg4, char arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_4 = 0
    int32_t var_94 = 0
    int32_t var_ec = 0
    
    while (true)
        int32_t ebx_4 = eax_4 * 0x1c
        void* edx = &arg3[eax_4 * 7 + 4]
        void var_160
        int32_t eax_5 = sub_40a930(&var_160)
        unimplemented  {call 0x40a930}
        void var_90
        __builtin_memcpy(&var_90, eax_5, 0x40)
        unimplemented  {fld st0, dword [ecx+0x4]}
        int32_t var_1bc_1 = arg4
        float var_ac_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xa8], st0})
        unimplemented  {fstp dword [ebp-0xa8], st0}
        int32_t var_c4_1 = var_ec
        unimplemented  {fld st0, dword [ebp-0xa8]}
        float var_1bc_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t var_c8 = var_94
        void var_1a0
        int32_t eax_9 = sub_4f66d0(&var_1a0, *arg3, arg3[1], &var_c8, var_1bc_2, nullptr, nullptr)
        int16_t top = top - 2
        unimplemented  {call 0x4f66d0}
        void var_50
        __builtin_memcpy(&var_50, eax_9, 0x40)
        
        if (arg3[2] != 1)
            int32_t* eax_22 = edx
            float* edx_15 = eax_22[1]
            
            if (*(data_27e7bbc + 0x18) != 0)
                int32_t* eax_24 = sub_4f5350(edx_15, edx_15, *eax_22, &var_50)
                int32_t edx_16 = eax_24[1]
                float var_e8 = *eax_24
                int32_t var_e4_1 = edx_16
                int32_t var_e0_1 = eax_24[2]
                int32_t var_dc_1 = eax_24[3]
                edx_15.b = sub_4057a0(&var_e8, arg2)
                eax_22 = edx
            else
                edx_15.b = 0
            
            int32_t* ecx_19
            ecx_19.b = arg5
            int32_t eax_27 = sub_505640(eax_22[1], edx_15.b, ecx_19.b, &eax_22[4], *eax_22, &eax_22[2])
            char ecx_20 = *(ebx_4 + arg4 + 0x245)
            
            if (ecx_20 != 0)
                if (*(ebx_4 + arg4 + 0x247) != 0 && *(ebx_4 + arg4 + 0x248) != 0)
                    *arg6 = 0xa
                else if (ecx_20 != 0 && *(ebx_4 + arg4 + 0x247) == 0)
                    *arg6 = 0xa
            
            if (eax_27 == 1)
                int32_t* eax_28 = arg3[0x43]
                arg3[3] = 0
                
                if (*eax_28 s<= var_94 || var_94 != 0)
                    arg3[3] = 0
                    *eax_28 = var_94 + 1
                else
                    *eax_28 = 0
                    arg3[3] = 1
                
                unimplemented  {fild st0, dword [ebp-0x90]}
                arg3[2] = 1
                unimplemented  {fdiv st0, qword [0x8a54f0]}
                
                if (arg3 != arg4 + 0x14)
                    *(data_27e7a50 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                    unimplemented  {fstp dword [eax+0x4], st0}
                else
                    *data_27e7a50 = fconvert.s(unimplemented  {fstp dword [edx], st0})
                    unimplemented  {fstp dword [edx], st0}
                
                sub_408ca0()
                sub_408a40()
        else if (arg5 != 0)
            void* edx_3 = edx
            
            if (*(data_27e7bbc + 0x18) != 0)
                int32_t* eax_11 = sub_4f5350(*(edx_3 + 4), &var_50, *edx_3, &var_50)
                int32_t edx_5 = eax_11[1]
                float var_d8 = *eax_11
                int32_t var_d4_1 = edx_5
                int32_t edx_6 = eax_11[3]
                int32_t var_d0 = eax_11[2]
                int32_t var_cc_1 = edx_6
                
                if (sub_4057a0(&var_d8, arg2) != 0)
                    if (arg3[3] != 1 || var_94 != 0)
                        int32_t* edx_21 = arg3[0x43]
                        arg3[3] = 0
                        *edx_21 = var_94 + 1
                        arg3[2] = 1
                    
                    unimplemented  {fild st0, dword [ebp-0x90]}
                    unimplemented  {fdiv st0, qword [0x8a54f0]}
                    
                    if (arg3 != arg4 + 0x14)
                        *(data_27e7a50 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                        unimplemented  {fstp dword [eax+0x4], st0}
                    else
                        *data_27e7a50 = fconvert.s(unimplemented  {fstp dword [edx], st0})
                        unimplemented  {fstp dword [edx], st0}
                    
                    sub_408ca0()
                    sub_408a40()
                    *arg6 = 0xa
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                edx_3 = edx
            
            if (var_94 == 0)
                int32_t* eax_15 = sub_4f5350(*(edx_3 + 4), edx_3, *edx_3, &var_50)
                int32_t edx_8 = eax_15[1]
                float var_c0 = *eax_15
                unimplemented  {fld st0, dword [ebp-0xbc]}
                unimplemented  {fsub st0, qword [0x8a58a8]}
                int32_t var_bc_1 = edx_8
                int32_t edx_9 = eax_15[3]
                int32_t var_b8_1 = eax_15[2]
                var_c0 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                unimplemented  {fstp dword [ebp-0xbc], st0}
                int32_t var_b4_1 = edx_9
                
                if (sub_4057a0(&var_c0, arg2) != 0)
                    unimplemented  {fld st0, dword [0x8a58d4]}
                    int32_t* edx_11 = arg3[0x43]
                    arg3[3] = 0
                    *edx_11 = 0
                    arg3[2] = 1
                    
                    if (arg3 != arg4 + 0x14)
                        *(data_27e7a50 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                        unimplemented  {fstp dword [eax+0x4], st0}
                    else
                        *data_27e7a50 = fconvert.s(unimplemented  {fstp dword [edx], st0})
                        unimplemented  {fstp dword [edx], st0}
                    
                label_417119:
                    sub_408ca0()
                    sub_408a40()
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            else if (var_94 == 8 && sub_416c50(&var_50, edx_3, edx_3, arg2) != 0)
                unimplemented  {fld st0, dword [0x8a58d0]}
                int32_t* ecx_13 = arg3[0x43]
                arg3[3] = 0
                *ecx_13 = 9
                arg3[2] = 1
                
                if (arg3 != arg4 + 0x14)
                    *(data_27e7a50 + 4) = fconvert.s(unimplemented  {fstp dword [ecx+0x4], st0})
                    unimplemented  {fstp dword [ecx+0x4], st0}
                else
                    *data_27e7a50 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                    unimplemented  {fstp dword [eax], st0}
                
                goto label_417119
        else
            arg3[2] = 0
        
        int32_t eax_31 = var_94 + 1
        var_94 = eax_31
        
        if (eax_31 s>= 9)
            break
        
        eax_4 = var_94
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
